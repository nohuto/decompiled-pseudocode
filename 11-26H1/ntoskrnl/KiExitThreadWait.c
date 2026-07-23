/*
 * XREFs of KiExitThreadWait @ 0x1402470E0
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
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

__int64 __fastcall KiExitThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  char v5; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  __int64 result; // rax
  int v10; // ebx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  char v12; // bl
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r9
  unsigned __int8 AllCompareThreadStateFlags; // r8
  _KPRCB *Prcb; // rdx
  _KTHREAD *IdleThread; // rcx
  char v17; // al
  _KPRCB *v18; // rsi
  unsigned __int8 TargetType; // al
  __int64 SingleTargetIndex; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r12
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  void **p_SchedulerAssist; // rdx
  void **v25; // r9
  __int64 v26; // r8
  bool v27; // zf
  _DWORD *v28; // rcx
  __int64 Number; // r12
  char v30; // r14
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // rbx
  unsigned __int8 v32; // al
  unsigned int v33; // edx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 Level; // r8
  unsigned __int64 v36; // rsi
  ULONG_PTR v37; // rcx
  char v38; // al
  struct _SINGLE_LIST_ENTRY *v39; // rbx
  _KSOFTWARE_INTERRUPT_BATCH *v40; // r14
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int i; // r8d
  char *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  char v47; // al
  unsigned int v48; // edx
  int IsEnabledNoReportingNoInline; // eax
  int v50; // ecx
  char v51; // al
  int v52; // edx
  signed int v53; // eax
  bool v54; // cc
  unsigned int v55; // edx
  int v56; // ecx
  __int64 v57; // [rsp+30h] [rbp-30h] BYREF
  _KI_RESCHEDULE_CONTEXT *v58; // [rsp+38h] [rbp-28h]
  __int64 v59; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-18h]
  __int64 v61; // [rsp+4Ch] [rbp-14h]
  struct _SINGLE_LIST_ENTRY v62; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = a3;
  v62.Next = 0LL;
  Next = 0LL;
  if ( (a3 & 2) != 0 )
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
    v37 = *(char *)(BugCheckParameter1 + 795);
    a3 = v37;
    v38 = *(_BYTE *)(v37 + BugCheckParameter1 + 824);
    if ( !v38 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v37, 2uLL, 0LL);
    v47 = v38 - 1;
    *(_BYTE *)(v37 + BugCheckParameter1 + 824) = v47;
    if ( v47 )
      goto LABEL_109;
    v48 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v37);
    *(_DWORD *)(BugCheckParameter1 + 856) = v48;
    if ( v48 >= 1 << v37 || *(char *)(BugCheckParameter1 + 195) > 31 )
      goto LABEL_109;
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v37);
    v50 = *(char *)(BugCheckParameter1 + 563);
    a3 = (unsigned int)v50;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v50 < 16 )
      {
        v51 = 0;
        v52 = v50 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v52 <= v50 )
          v52 = v50;
        if ( *(char *)(BugCheckParameter1 + 870) > 0 )
          v51 = *(_BYTE *)(BugCheckParameter1 + 870);
        a3 = (unsigned int)(v52 + v51);
        if ( (int)a3 >= 16 )
          a3 = 15LL;
        a4 = *(unsigned __int16 *)(BugCheckParameter1 + 518) >> 4;
        if ( (unsigned __int8)a4 > (int)a3 )
          a3 = (unsigned __int8)a4;
      }
      v53 = *(_DWORD *)(BugCheckParameter1 + 856);
      if ( !v53 )
        goto LABEL_107;
      _BitScanReverse((unsigned int *)&v53, v53);
      v54 = (int)a3 < v53;
    }
    else
    {
      a4 = (unsigned int)v50;
      if ( v50 < 16 )
      {
        v56 = v50 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v56 <= (int)a3 )
          v56 = a3;
        a4 = (unsigned int)(*(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870));
        if ( (int)a4 <= v56 )
          a4 = (unsigned int)v56;
        v55 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v55 >> 4) > (int)a4 )
          a4 = (unsigned __int8)(v55 >> 4);
        if ( (int)a4 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
          a4 = 15LL;
      }
      v53 = *(_DWORD *)(BugCheckParameter1 + 856);
      a3 = (unsigned int)a4;
      if ( !v53 )
        goto LABEL_107;
      _BitScanReverse((unsigned int *)&v53, v53);
      v54 = (int)a4 < v53;
    }
    if ( v54 )
      a3 = (unsigned int)v53;
LABEL_107:
    if ( (int)a3 < *(char *)(BugCheckParameter1 + 195) )
      KiSetPriorityThread(BugCheckParameter1, &v62, a3);
LABEL_109:
    Next = v62.Next;
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  result = *(unsigned __int8 *)(BugCheckParameter1 + 112);
  v10 = v5 & 1;
  if ( (result & 0x38) != 0 )
  {
    if ( (result & 0x18) != 0 )
    {
      v57 = 0LL;
      if ( (result & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0xCu);
      StaticRescheduleContext = a1->StaticRescheduleContext;
      v12 = 0;
      v58 = StaticRescheduleContext;
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, &v57);
      if ( !a1->NextThread )
      {
        KiStartRescheduleContext(StaticRescheduleContext, &v57, 0LL);
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
            v44 = (char *)StaticRescheduleContext + 40 * i;
            if ( v44 + 16 != (char *)RescheduleContextEntryForPrcb )
            {
              v44[50] |= 2u;
              v45 = *((_QWORD *)v44 + 2);
              *((_QWORD *)v44 + 4) = *(_QWORD *)(v45 + 24);
              v44[48] = v44[48] & 0xC0 | 5;
              v46 = *(_QWORD *)(v45 + 24);
              v44[49] &= ~1u;
              *((_QWORD *)v44 + 5) = v46;
            }
          }
          StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
        }
        KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v62);
        v12 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, &v62);
      }
      KiReleasePrcbLocksForIsolationUnit(&v57);
      if ( v12 )
      {
        if ( StaticRescheduleContext->ProcessorCount )
        {
          do
          {
            v17 = StaticRescheduleContext->ProcessorEntries[v4].___u6[0];
            v18 = StaticRescheduleContext->ProcessorEntries[v4].Prcb;
            if ( (v17 & 0x10) != 0 )
            {
              KiAddProcessorToSoftwareInterruptBatch(
                &a1->DeferredDispatchInterrupts,
                StaticRescheduleContext->ProcessorEntries[v4].Prcb);
            }
            else
            {
              if ( (v17 & 8) == 0 || !v18->IdleHalt )
                goto LABEL_16;
              TargetType = a1->DeferredDispatchInterrupts.TargetType;
              if ( TargetType )
              {
                if ( TargetType == 1 )
                {
                  SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
                  if ( (_DWORD)SingleTargetIndex == v18->Number )
                    goto LABEL_16;
                  p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                  a1->DeferredDispatchInterrupts.TargetType = 2;
                  KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity, SingleTargetIndex);
                }
                else
                {
                  p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
                }
                Group = v18->Group;
                GroupSetMember = v18->GroupSetMember;
                if ( p_MultipleTargetAffinity->Count <= (unsigned __int16)Group )
                {
                  if ( p_MultipleTargetAffinity->Size <= (unsigned __int16)Group )
                    goto LABEL_16;
                  p_MultipleTargetAffinity->Count = Group + 1;
                }
                p_MultipleTargetAffinity->Bitmap[Group] |= GroupSetMember;
              }
              else
              {
                a1->DeferredDispatchInterrupts.TargetType = 1;
                a1->DeferredDispatchInterrupts.SingleTargetIndex = v18->Number;
              }
            }
LABEL_16:
            if ( (StaticRescheduleContext->ProcessorEntries[v4].___u6[0] & 2) != 0 )
              EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v4].NewThread, v18, 0LL);
            if ( (StaticRescheduleContext->ProcessorEntries[v4].___u6[0] & 4) != 0 )
            {
              if ( v18->SchedulerAssist )
              {
                p_SchedulerAssist = &a1->SchedulerAssist;
                if ( a1->SchedulerAssist )
                {
                  if ( a1 != v18 )
                  {
                    v25 = &a1->SchedulerAssist;
                    v26 = *(unsigned int *)v18->SchedulerAssist;
                    if ( (*(_DWORD *)v18->SchedulerAssist & 0x40000) != 0 )
                      v25 = &a1->SchedulerAssist;
                    if ( (v26 & 0x100000) != 0
                      || (*(_DWORD *)v18->SchedulerAssist & 0x40000) != 0
                      && (p_SchedulerAssist = v25,
                          (unsigned __int8)v26 < StaticRescheduleContext->ProcessorEntries[v4].KickPriority) )
                    {
                      v27 = HvlpVirtualProcessorsIdentityMapped == 0;
                      v28 = *p_SchedulerAssist;
                      *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                      Number = v18->Number;
                      if ( v27 )
                      {
                        StaticRescheduleContext = v58;
                        LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                      }
                      v28[2] = Number;
                      if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                        EtwTraceXSchedulerPriorityKickSend(v18->Number, 2LL, v26);
                      __writemsr(0x400000C2u, (unsigned int)Number);
                    }
                  }
                }
              }
            }
            if ( (StaticRescheduleContext->ProcessorEntries[v4].___u6[0] & 1) != 0 )
              _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v4].NewThread->KeReferenceCount);
            ++v4;
          }
          while ( v4 < StaticRescheduleContext->ProcessorCount );
        }
        KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
      }
      return KiProcessDeferredReadyList(a1, &v62, *(unsigned __int8 *)(BugCheckParameter1 + 390));
    }
    else
    {
      v30 = 0;
      if ( Next )
      {
        v62.Next = Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v62, 0LL);
          Next = v62.Next;
          ++v30;
          if ( v62.Next )
            v62.Next = v62.Next->Next;
          p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
          if ( (v30 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      else
      {
        p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
      }
      v32 = p_DeferredDispatchInterrupts->TargetType;
      if ( v32 )
      {
        if ( v32 == 1 )
        {
          v33 = 31;
          CurrentPrcb = KeGetCurrentPrcb();
          Level = p_DeferredDispatchInterrupts->Level;
          v60 = p_DeferredDispatchInterrupts->SingleTargetIndex;
          v59 = 6LL;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          v61 = 0LL;
          if ( Level != 1 )
            v33 = 47;
          HalpInterruptSendIpi((unsigned int *)&v59, v33);
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
    v36 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v10 )
    {
      v39 = v62.Next;
      if ( v62.Next )
      {
        v62.Next = v62.Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&v39[-27], &v62, 0LL);
          v39 = v62.Next;
          LOBYTE(v4) = v4 + 1;
          if ( v62.Next )
            v62.Next = v62.Next->Next;
          v40 = &a1->DeferredDispatchInterrupts;
          if ( (v4 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
        }
        while ( v39 );
      }
      else
      {
        v40 = &a1->DeferredDispatchInterrupts;
      }
      KiFlushSoftwareInterruptBatch((char *)v40);
      return KiCheckForThreadDispatch(a1, (unsigned __int8)v36, v41, v42);
    }
    else
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v36);
      __writecr8(v36);
    }
  }
  return result;
}
