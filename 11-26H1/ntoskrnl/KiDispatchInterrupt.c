/*
 * XREFs of KiDispatchInterrupt @ 0x140224C20
 * Callers:
 *     KiDpcInterrupt @ 0x140733B40 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402313F0 (KiDeferGroupSchedulingPreemption.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiQuantumEnd @ 0x1403330A0 (KiQuantumEnd.c)
 *     KeIsUserVaAccessAllowed @ 0x1403A98D0 (KeIsUserVaAccessAllowed.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapStacksAndRetireDpcList @ 0x140731010 (KiSwapStacksAndRetireDpcList.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 */

__int64 __fastcall KiDispatchInterrupt(unsigned __int8 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r8
  void *v5; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // rsi
  struct _KPRCB *v8; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 result; // rax
  unsigned int v11; // edi
  _KTHREAD *NextThread; // rdi
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 GroupSetMember; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v16; // rcx
  char IsUserVaAccessAllowed; // bl
  __int64 v18; // r8
  __int64 i; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  _LIST_ENTRY *p_ActiveScbList; // rdx
  struct _LIST_ENTRY *Blink; // r8
  struct _LIST_ENTRY *v24; // rax
  unsigned __int32 v25; // eax
  __int64 v26; // rdx
  unsigned __int32 v27; // ett
  __int64 v28; // rax

  if ( a2 )
  {
    v4 = *(_WORD *)(a2 + 368);
    v5 = *(void **)(a2 + 360);
    if ( v4 == 51 )
    {
      if ( v5 > stru_140FC11F0.KernelShadowStack
        && (unsigned __int64)v5 <= stru_140FC11F0.InGlobalUpdateVpThreadPriorityList )
      {
        *(_QWORD *)(a2 + 360) = stru_140FC11F0.KernelShadowStack;
      }
    }
    else if ( v4 == 16 && v5 > &ExpInterlockedPopEntrySListResume && v5 <= &ExpInterlockedPopEntrySListEnd )
    {
      *(_QWORD *)(a2 + 48) |= 0x10000uLL;
    }
  }
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  CurrentThread->WaitIrql = a1;
  if ( (CurrentPrcb->DpcRequestSummary & 0xBF) != 0 )
    KiSwapStacksAndRetireDpcList(CurrentPrcb, CurrentPrcb->DpcStack);
  v8 = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)v8->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v25 = *SchedulerAssist;
    do
    {
      v26 = v25;
      LODWORD(v26) = v25 & 0xFFDFFFFF;
      v27 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v25 & 0xFFDFFFFF, v25);
    }
    while ( v27 != v25 );
    if ( (v25 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v8, v26, SchedulerAssist, a4);
  }
  _enable();
  if ( CurrentPrcb->QuantumEnd )
  {
    CurrentPrcb->QuantumEnd = 0;
    return KiQuantumEnd();
  }
  result = (__int64)CurrentPrcb->NextThread;
  if ( result )
  {
    if ( (CurrentThread->Header.Size & 4) == 0
      || (result = KiDeferGroupSchedulingPreemption(CurrentThread, CurrentPrcb), !(_BYTE)result) )
    {
      KiCaptureTotalCyclesCurrentThread(CurrentPrcb, CurrentThread);
      KiRcuCheckQuiescent((__int64)CurrentPrcb);
      KiAbProcessPreContextSwitch((AutoBoost *)CurrentThread);
      v11 = 0;
LABEL_11:
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime += MEMORY[0xFFFFF78000000320] - NextThread->WaitBlock[2].SpareLong;
        NextThread->WaitBlockFill6[68] = 2;
        SchedulerSubNode = CurrentPrcb->SchedulerSubNode;
        GroupSetMember = CurrentPrcb->GroupSetMember;
        if ( (GroupSetMember & SchedulerSubNode->StealableStandbyThreads) != 0 )
          _InterlockedAnd64((volatile signed __int64 *)&SchedulerSubNode->StealableStandbyThreads, ~GroupSetMember);
        SchedulingGroup = NextThread->SchedulingGroup;
        if ( SchedulingGroup )
        {
          v16 = (__int64)SchedulingGroup + CurrentPrcb->ScbOffset;
          if ( v16 )
          {
            if ( (*(_WORD *)(v16 + 128) & 0x200) == 0 )
            {
              p_ActiveScbList = &CurrentPrcb->ActiveScbList;
              while ( v16 && (*(_WORD *)(v16 + 128) & 0x200) == 0 )
              {
                Blink = p_ActiveScbList->Blink;
                v24 = (struct _LIST_ENTRY *)(v16 + 88);
                if ( Blink->Flink != p_ActiveScbList )
                  __fastfail(3u);
                v24->Flink = p_ActiveScbList;
                *(_QWORD *)(v16 + 96) = Blink;
                Blink->Flink = v24;
                p_ActiveScbList->Blink = v24;
                p_ActiveScbList = (_LIST_ENTRY *)(v16 + 88);
                *(_WORD *)(v16 + 128) = *(_WORD *)(v16 + 128) & 0xF1FF | 0x200;
                v28 = *(_QWORD *)(v16 + 440);
                v16 = v28;
                if ( v28 )
                  ++*(_QWORD *)(v28 + 416);
              }
            }
          }
        }
        CurrentThread->WaitReason = 31;
        KiQueueReadyThread(CurrentPrcb);
        IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
        if ( KeSmapEnabled )
          __asm { stac }
        LOBYTE(v18) = 1;
        KiSwapContext(CurrentThread, NextThread, v18);
        if ( !IsUserVaAccessAllowed && KeSmapEnabled )
          __asm { clac }
        return KiAbProcessPostContextSwitch(CurrentThread);
      }
      while ( 1 )
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
        {
          if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
          {
LABEL_38:
            HvlNotifyLongSpinWait(v11);
            goto LABEL_14;
          }
          for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
          {
            v20 = KiProcessorBlock[i];
            if ( (*(_BYTE *)(v20 + 35) & 1) != 0 )
            {
              v21 = *(_QWORD *)(v20 + 36600);
              if ( !v21 || !*(_BYTE *)(v21 + 65) || !*(_BYTE *)(v21 + 64) )
                goto LABEL_38;
            }
          }
        }
        _mm_pause();
LABEL_14:
        if ( !CurrentPrcb->PrcbLock )
          goto LABEL_11;
      }
    }
  }
  return result;
}
