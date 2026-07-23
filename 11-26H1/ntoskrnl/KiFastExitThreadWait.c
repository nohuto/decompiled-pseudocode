/*
 * XREFs of KiFastExitThreadWait @ 0x1402459A0
 * Callers:
 *     KeRemoveQueueEx @ 0x1402224F0 (KeRemoveQueueEx.c)
 *     KeWaitForAlertByThreadId @ 0x140223DF0 (KeWaitForAlertByThreadId.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 *     KeRemovePriQueue @ 0x1403EF700 (KeRemovePriQueue.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140247840 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiSendSoftwareInterruptAffinity @ 0x1403D3A10 (KiSendSoftwareInterruptAffinity.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiFastExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v7; // edi
  unsigned int v8; // esi
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 result; // rax
  int v11; // ebx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  char v13; // bl
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r9
  unsigned __int8 AllCompareThreadStateFlags; // r8
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rcx
  char v18; // al
  _KPRCB *v19; // rsi
  unsigned __int8 TargetType; // al
  __int64 SingleTargetIndex; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r12
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  void **p_SchedulerAssist; // rdx
  void **v26; // r9
  __int64 v27; // r8
  bool v28; // zf
  _DWORD *v29; // rcx
  __int64 Number; // r12
  char v31; // r14
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rbx
  unsigned __int8 v33; // al
  unsigned int v34; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 Level; // r8
  unsigned __int64 v37; // rsi
  ULONG_PTR v38; // rcx
  char v39; // al
  struct _SINGLE_LIST_ENTRY *v40; // rbx
  _KSOFTWARE_INTERRUPT_BATCH *v41; // r14
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned int i; // r8d
  char *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  char v48; // al
  unsigned int v49; // edx
  int IsEnabledNoReportingNoInline; // eax
  int v51; // ecx
  char v52; // al
  int v53; // edx
  signed int v54; // eax
  bool v55; // cc
  unsigned int v56; // edx
  int v57; // ecx
  signed __int32 v58[8]; // [rsp+0h] [rbp-60h] BYREF
  struct _SINGLE_LIST_ENTRY v59; // [rsp+30h] [rbp-30h] BYREF
  _KI_RESCHEDULE_CONTEXT *v60; // [rsp+38h] [rbp-28h]
  __int64 v61; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-18h]
  __int64 v63; // [rsp+4Ch] [rbp-14h]
  __int64 v64; // [rsp+A8h] [rbp+48h] BYREF

  v4 = a3;
  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  _InterlockedOr(v58, 0);
  v7 = 0;
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v8 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, BugCheckParameter1, a3) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v59.Next = 0LL;
  Next = 0LL;
  if ( (v4 & 2) != 0 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        LODWORD(Next) = (_DWORD)Next + 1;
        if ( ((unsigned int)Next & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, BugCheckParameter1, a3) )
        {
          HvlNotifyLongSpinWait((unsigned int)Next);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v38 = *(char *)(BugCheckParameter1 + 795);
    a3 = v38;
    v39 = *(_BYTE *)(v38 + BugCheckParameter1 + 824);
    if ( !v39 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v38, 2uLL, 0LL);
    v48 = v39 - 1;
    *(_BYTE *)(v38 + BugCheckParameter1 + 824) = v48;
    if ( v48 )
      goto LABEL_120;
    v49 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v38);
    *(_DWORD *)(BugCheckParameter1 + 856) = v49;
    if ( v49 >= 1 << v38 || *(char *)(BugCheckParameter1 + 195) > 31 )
      goto LABEL_120;
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v38);
    v51 = *(char *)(BugCheckParameter1 + 563);
    a3 = (unsigned int)v51;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v51 < 16 )
      {
        v52 = 0;
        v53 = v51 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v53 <= v51 )
          v53 = v51;
        if ( *(char *)(BugCheckParameter1 + 870) > 0 )
          v52 = *(_BYTE *)(BugCheckParameter1 + 870);
        a3 = (unsigned int)(v53 + v52);
        if ( (int)a3 >= 16 )
          a3 = 15LL;
        a4 = *(unsigned __int16 *)(BugCheckParameter1 + 518) >> 4;
        if ( (unsigned __int8)a4 > (int)a3 )
          a3 = (unsigned __int8)a4;
      }
      v54 = *(_DWORD *)(BugCheckParameter1 + 856);
      if ( !v54 )
        goto LABEL_118;
      _BitScanReverse((unsigned int *)&v54, v54);
      v55 = (int)a3 < v54;
    }
    else
    {
      a4 = (unsigned int)v51;
      if ( v51 < 16 )
      {
        v57 = v51 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v57 <= (int)a3 )
          v57 = a3;
        a4 = (unsigned int)(*(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870));
        if ( (int)a4 <= v57 )
          a4 = (unsigned int)v57;
        v56 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v56 >> 4) > (int)a4 )
          a4 = (unsigned __int8)(v56 >> 4);
        if ( (int)a4 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
          a4 = 15LL;
      }
      v54 = *(_DWORD *)(BugCheckParameter1 + 856);
      a3 = (unsigned int)a4;
      if ( !v54 )
        goto LABEL_118;
      _BitScanReverse((unsigned int *)&v54, v54);
      v55 = (int)a4 < v54;
    }
    if ( v55 )
      a3 = (unsigned int)v54;
    LODWORD(v64) = 0;
LABEL_118:
    if ( (int)a3 < *(char *)(BugCheckParameter1 + 195) )
      KiSetPriorityThread(BugCheckParameter1, &v59, a3);
LABEL_120:
    Next = v59.Next;
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  result = *(unsigned __int8 *)(BugCheckParameter1 + 112);
  v11 = v4 & 1;
  if ( (result & 0x38) != 0 )
  {
    if ( (result & 0x18) != 0 )
    {
      v64 = 0LL;
      if ( (result & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0xCu);
      StaticRescheduleContext = a1->StaticRescheduleContext;
      v13 = 0;
      v60 = StaticRescheduleContext;
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, &v64);
      if ( !a1->NextThread )
      {
        KiStartRescheduleContext(StaticRescheduleContext, &v64, 0LL);
        RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
        RescheduleContextEntryForPrcb->___u5[0] |= 2u;
        AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
        Prcb = RescheduleContextEntryForPrcb->Prcb;
        RescheduleContextEntryForPrcb->CompareThread = RescheduleContextEntryForPrcb->Prcb->IdleThread;
        RescheduleContextEntryForPrcb->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
        IdleThread = Prcb->IdleThread;
        *((_BYTE *)&RescheduleContextEntryForPrcb->0 + 1) &= ~1u;
        RescheduleContextEntryForPrcb->NewThread = IdleThread;
        if ( (AllCompareThreadStateFlags & 2) != 0 )
        {
          for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
          {
            v45 = (char *)StaticRescheduleContext + 40 * i;
            if ( v45 + 16 != (char *)RescheduleContextEntryForPrcb )
            {
              v45[50] |= 2u;
              v46 = *((_QWORD *)v45 + 2);
              *((_QWORD *)v45 + 4) = *(_QWORD *)(v46 + 24);
              v45[48] = v45[48] & 0xC0 | 5;
              v47 = *(_QWORD *)(v46 + 24);
              v45[49] &= ~1u;
              *((_QWORD *)v45 + 5) = v47;
            }
          }
          StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
        }
        KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v59);
        v13 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, &v59);
      }
      KiReleasePrcbLocksForIsolationUnit(&v64);
      if ( v13 )
      {
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            v18 = StaticRescheduleContext->ProcessorEntries[v7].___u6[0];
            v19 = StaticRescheduleContext->ProcessorEntries[v7].Prcb;
            if ( (v18 & 0x10) != 0 )
            {
              KiAddProcessorToSoftwareInterruptBatch(
                &a1->DeferredDispatchInterrupts,
                StaticRescheduleContext->ProcessorEntries[v7].Prcb);
            }
            else
            {
              if ( (v18 & 8) == 0 || !v19->IdleHalt )
                goto LABEL_20;
              TargetType = a1->DeferredDispatchInterrupts.TargetType;
              if ( TargetType )
              {
                if ( TargetType == 1 )
                {
                  SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                  if ( (_DWORD)SingleTargetIndex == v19->Number )
                    goto LABEL_20;
                  p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                  a1->DeferredDispatchInterrupts.TargetType = 2;
                  KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity, SingleTargetIndex);
                }
                else
                {
                  p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                }
                Group = v19->Group;
                GroupSetMember = v19->GroupSetMember;
                if ( p_MultipleTargetAffinity->Count <= (unsigned __int16)Group )
                {
                  if ( p_MultipleTargetAffinity->Size <= (unsigned __int16)Group )
                    goto LABEL_20;
                  p_MultipleTargetAffinity->Count = Group + 1;
                }
                p_MultipleTargetAffinity->Bitmap[Group] |= GroupSetMember;
              }
              else
              {
                a1->DeferredDispatchInterrupts.TargetType = 1;
                a1->DeferredDispatchInterrupts.SingleTargetIndex = v19->Number;
              }
            }
LABEL_20:
            if ( (StaticRescheduleContext->ProcessorEntries[v7].___u6[0] & 2) != 0 )
              EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v7].NewThread, v19, 0LL);
            if ( (StaticRescheduleContext->ProcessorEntries[v7].___u6[0] & 4) != 0 )
            {
              if ( v19->SchedulerAssist )
              {
                p_SchedulerAssist = &a1->SchedulerAssist;
                if ( a1->SchedulerAssist )
                {
                  if ( a1 != v19 )
                  {
                    v26 = &a1->SchedulerAssist;
                    v27 = *(unsigned int *)v19->SchedulerAssist;
                    if ( (*(_DWORD *)v19->SchedulerAssist & 0x40000) != 0 )
                      v26 = &a1->SchedulerAssist;
                    if ( (v27 & 0x100000) != 0
                      || (*(_DWORD *)v19->SchedulerAssist & 0x40000) != 0
                      && (p_SchedulerAssist = v26,
                          (unsigned __int8)v27 < StaticRescheduleContext->ProcessorEntries[v7].KickPriority) )
                    {
                      v28 = HvlpVirtualProcessorsIdentityMapped == 0;
                      v29 = *p_SchedulerAssist;
                      *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                      Number = v19->Number;
                      if ( v28 )
                      {
                        StaticRescheduleContext = v60;
                        LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                      }
                      v29[2] = Number;
                      if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                        EtwTraceXSchedulerPriorityKickSend(v19->Number, 2LL, v27);
                      __writemsr(0x400000C2u, (unsigned int)Number);
                    }
                  }
                }
              }
            }
            if ( (StaticRescheduleContext->ProcessorEntries[v7].___u6[0] & 1) != 0 )
              _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v7].NewThread->KeReferenceCount);
            ++v7;
          }
          while ( v7 < StaticRescheduleContext->ProcessorCount );
        }
        KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
      }
      return KiProcessDeferredReadyList(a1, &v59, *(unsigned __int8 *)(BugCheckParameter1 + 390));
    }
    else
    {
      v31 = 0;
      if ( Next )
      {
        v59.Next = Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v59, 0LL);
          Next = v59.Next;
          ++v31;
          if ( v59.Next )
            v59.Next = v59.Next->Next;
          p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
          if ( (v31 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      else
      {
        p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      }
      v33 = p_DeferredDispatchInterrupts->TargetType;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          v34 = 31;
          CurrentPrcb = KeGetCurrentPrcb();
          Level = p_DeferredDispatchInterrupts->Level;
          v62 = p_DeferredDispatchInterrupts->SingleTargetIndex;
          v61 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          v63 = 0LL;
          if ( Level != 1 )
            v34 = 47;
          HalpInterruptSendIpi((unsigned int *)&v61, v34);
        }
        else
        {
          KiSendSoftwareInterruptAffinity(
            &p_DeferredDispatchInterrupts->MultipleTargetAffinity,
            p_DeferredDispatchInterrupts->Level);
        }
        if ( p_DeferredDispatchInterrupts->TargetType == 2 )
        {
          *(_QWORD *)&p_DeferredDispatchInterrupts->MultipleTargetAffinity.Count = 2097153LL;
          memset_0(
            &p_DeferredDispatchInterrupts->MultipleTargetAffinity.8,
            0,
            sizeof(p_DeferredDispatchInterrupts->MultipleTargetAffinity.8));
        }
        p_DeferredDispatchInterrupts->TargetType = 0;
        p_DeferredDispatchInterrupts->SingleTargetIndex = 0xFFFF;
      }
      KiCheckForThreadDispatch(a1, 1LL, a3, a4);
      result = (__int64)KiDeliverApc(0, 0LL, 0LL);
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
      __writecr8(0LL);
    }
  }
  else
  {
    v37 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v11 )
    {
      v40 = v59.Next;
      if ( v59.Next )
      {
        v59.Next = v59.Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&v40[-27], &v59, 0LL);
          v40 = v59.Next;
          LOBYTE(v7) = v7 + 1;
          if ( v59.Next )
            v59.Next = v59.Next->Next;
          v41 = &a1->DeferredDispatchInterrupts;
          if ( (v7 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
        }
        while ( v40 );
      }
      else
      {
        v41 = &a1->DeferredDispatchInterrupts;
      }
      KiFlushSoftwareInterruptBatch((char *)v41);
      return KiCheckForThreadDispatch(a1, (unsigned __int8)v37, v42, v43);
    }
    else
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v37);
      __writecr8(v37);
    }
  }
  return result;
}
