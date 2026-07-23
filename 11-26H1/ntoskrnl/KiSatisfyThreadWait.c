/*
 * XREFs of KiSatisfyThreadWait @ 0x1402478E0
 * Callers:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCommitRescheduleContext @ 0x1402409D0 (KiCommitRescheduleContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiAddProcessorToSoftwareInterruptBatch @ 0x140247840 (KiAddProcessorToSoftwareInterruptBatch.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     ?KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CONTEXT@@PEAU_KPRCB@@@Z @ 0x140338930 (-KiFindRescheduleContextEntryForPrcb@@YAPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KI_RESCHEDULE_CON.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x14037E820 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiSatisfyThreadWait(struct _KPRCB *a1, ULONG_PTR BugCheckParameter1, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rdi
  __int64 v7; // r12
  __int64 v9; // rcx
  char v10; // bl
  __int64 v12; // r14
  volatile signed __int32 *v13; // r15
  unsigned int v14; // r12d
  __int64 *v15; // rax
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  char v17; // al
  int v18; // ebx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  char v20; // bl
  struct _KI_RESCHEDULE_CONTEXT_ENTRY *RescheduleContextEntryForPrcb; // r8
  unsigned __int8 AllCompareThreadStateFlags; // dl
  _KPRCB *Prcb; // rcx
  _KTHREAD *IdleThread; // rax
  char v25; // al
  _KPRCB *v26; // rsi
  unsigned __int8 TargetType; // al
  __int64 SingleTargetIndex; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  void **p_SchedulerAssist; // rdx
  void **v33; // r9
  __int64 v34; // r8
  bool v35; // zf
  _DWORD *v36; // rcx
  __int64 Number; // r15
  char v38; // bl
  _KSOFTWARE_INTERRUPT_BATCH *p_DeferredDispatchInterrupts; // r14
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  ULONG_PTR v45; // rcx
  char v46; // al
  unsigned int i; // r9d
  char *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  char v51; // al
  unsigned int v52; // edx
  int IsEnabledNoReportingNoInline; // eax
  int v54; // ecx
  __int64 v55; // r8
  unsigned int v56; // r9d
  char v57; // al
  int v58; // edx
  signed int v59; // eax
  int v60; // r9d
  bool v61; // cc
  unsigned int v62; // edx
  int v63; // ecx
  __int64 v64; // [rsp+30h] [rbp-48h] BYREF
  struct _SINGLE_LIST_ENTRY v65; // [rsp+38h] [rbp-40h] BYREF
  __int64 v66; // [rsp+40h] [rbp-38h]

  *(_BYTE *)(BugCheckParameter1 + 388) = 2;
  v5 = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  v7 = *(_QWORD *)(BugCheckParameter1 + 200);
  v9 = *(_QWORD *)(BugCheckParameter1 + 976);
  v10 = a3;
  v66 = v7;
  if ( v9 )
  {
    *(_QWORD *)(BugCheckParameter1 + 976) = 0LL;
    v9 = KeAbPreAcquire((struct _KTHREAD *)v9, 0LL);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *(_BYTE *)(v9 + 33) |= 2u;
      else
        *(_BYTE *)(v9 + 10) = 1;
    }
  }
  if ( a5 )
  {
    v12 = a4 + 48LL * (unsigned __int8)a5;
    do
    {
      if ( *(_BYTE *)(a4 + 17) < 5u )
      {
        v13 = *(volatile signed __int32 **)(a4 + 32);
        v14 = 0;
        if ( _interlockedbittestandset(v13, 7u) )
        {
          do
          {
            if ( (++v14 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, BugCheckParameter1, a3) )
            {
              HvlNotifyLongSpinWait(v14);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( (*v13 & 0x80u) != 0 || _interlockedbittestandset(v13, 7u) );
        }
        if ( *(_BYTE *)(a4 + 17) == 4 )
        {
          v9 = *(_QWORD *)a4;
          v15 = *(__int64 **)(a4 + 8);
          if ( *(_QWORD *)(*(_QWORD *)a4 + 8LL) != a4 || *v15 != a4 )
            __fastfail(3u);
          *v15 = v9;
          *(_QWORD *)(v9 + 8) = v15;
        }
        _InterlockedAnd(v13, 0xFFFFFF7F);
      }
      a4 += 48LL;
    }
    while ( a4 != v12 );
    v7 = v66;
  }
  v65.Next = 0LL;
  Next = 0LL;
  if ( (v10 & 2) != 0 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        LODWORD(Next) = (_DWORD)Next + 1;
        if ( ((unsigned int)Next & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, BugCheckParameter1, a3) )
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
    v45 = *(char *)(BugCheckParameter1 + 795);
    v46 = *(_BYTE *)(v45 + BugCheckParameter1 + 824);
    if ( !v46 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v45, 2uLL, 0LL);
    v51 = v46 - 1;
    *(_BYTE *)(v45 + BugCheckParameter1 + 824) = v51;
    if ( v51 )
      goto LABEL_120;
    v52 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v45);
    *(_DWORD *)(BugCheckParameter1 + 856) = v52;
    if ( v52 >= 1 << v45 || *(char *)(BugCheckParameter1 + 195) > 31 )
      goto LABEL_120;
    IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v45);
    v54 = *(char *)(BugCheckParameter1 + 563);
    v55 = (unsigned int)v54;
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v54 < 16 )
      {
        v57 = 0;
        v58 = v54 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v58 <= v54 )
          v58 = v54;
        if ( *(char *)(BugCheckParameter1 + 870) > 0 )
          v57 = *(_BYTE *)(BugCheckParameter1 + 870);
        v55 = (unsigned int)(v58 + v57);
        if ( (int)v55 >= 16 )
          v55 = 15LL;
        v56 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v56 >> 4) > (int)v55 )
          v55 = (unsigned __int8)(v56 >> 4);
      }
      v59 = *(_DWORD *)(BugCheckParameter1 + 856);
      if ( !v59 )
        goto LABEL_118;
      _BitScanReverse((unsigned int *)&v59, v59);
      v61 = (int)v55 < v59;
    }
    else
    {
      v60 = v54;
      if ( v54 < 16 )
      {
        v63 = v54 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
        if ( v63 <= (int)v55 )
          v63 = v55;
        v60 = *(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870);
        if ( v60 <= v63 )
          v60 = v63;
        v62 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
        if ( (unsigned __int8)(v62 >> 4) > v60 )
          v60 = (unsigned __int8)(v62 >> 4);
        if ( v60 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
          v60 = 15;
      }
      v59 = *(_DWORD *)(BugCheckParameter1 + 856);
      v55 = (unsigned int)v60;
      if ( !v59 )
        goto LABEL_118;
      _BitScanReverse((unsigned int *)&v59, v59);
      v61 = v60 < v59;
    }
    if ( v61 )
      v55 = (unsigned int)v59;
    LODWORD(v64) = 0;
LABEL_118:
    if ( (int)v55 < *(char *)(BugCheckParameter1 + 195) )
      KiSetPriorityThread(BugCheckParameter1, &v65, v55);
LABEL_120:
    Next = v65.Next;
    *(_BYTE *)(BugCheckParameter1 + 795) = 32;
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  }
  v17 = *(_BYTE *)(BugCheckParameter1 + 112);
  v18 = v10 & 1;
  if ( (v17 & 0x38) == 0 )
  {
    v5 = *(unsigned __int8 *)(BugCheckParameter1 + 390);
    if ( v18 )
    {
      KiProcessDeferredReadyList(a1, &v65, (unsigned __int8)v5);
      return v7;
    }
    if ( !KiIrqlFlags )
      goto LABEL_67;
    v43 = (unsigned __int8)v5;
    goto LABEL_66;
  }
  if ( (v17 & 0x18) == 0 )
  {
    v38 = 0;
    if ( Next )
    {
      v65.Next = Next->Next;
      do
      {
        KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v65, 0LL);
        Next = v65.Next;
        ++v38;
        if ( v65.Next )
          v65.Next = v65.Next->Next;
        p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
        if ( (v38 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
      }
      while ( Next );
    }
    else
    {
      p_DeferredDispatchInterrupts = &a1->DeferredDispatchInterrupts;
    }
    KiFlushSoftwareInterruptBatch((char *)p_DeferredDispatchInterrupts);
    LOBYTE(v40) = 1;
    KiCheckForThreadDispatch(a1, v40, v41, v42);
    KiDeliverApc(0, 0LL, 0LL);
    if ( !KiIrqlFlags )
      goto LABEL_67;
    v43 = 0LL;
LABEL_66:
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v43);
LABEL_67:
    __writecr8(v5);
    return v7;
  }
  v64 = 0LL;
  if ( (v17 & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v20 = 0;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, &v64);
  if ( !a1->NextThread )
  {
    KiStartRescheduleContext(StaticRescheduleContext, &v64, 0LL);
    RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(StaticRescheduleContext, a1);
    AllCompareThreadStateFlags = RescheduleContextEntryForPrcb->AllCompareThreadStateFlags;
    RescheduleContextEntryForPrcb->___u5[0] |= 2u;
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
        v48 = (char *)StaticRescheduleContext + 40 * i;
        if ( v48 + 16 != (char *)RescheduleContextEntryForPrcb )
        {
          v48[50] |= 2u;
          v49 = *((_QWORD *)v48 + 2);
          *((_QWORD *)v48 + 4) = *(_QWORD *)(v49 + 24);
          v48[48] = v48[48] & 0xC0 | 5;
          v50 = *(_QWORD *)(v49 + 24);
          v48[49] &= ~1u;
          *((_QWORD *)v48 + 5) = v50;
        }
      }
      StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
    KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v65);
    v20 = KiCommitRescheduleContext(&StaticRescheduleContext->ProcessorCount, a1, 0, &v65);
  }
  KiReleasePrcbLocksForIsolationUnit(&v64);
  if ( !v20 )
    goto LABEL_37;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_36;
  do
  {
    v25 = StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].___u6[0];
    v26 = StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].Prcb;
    if ( (v25 & 0x10) != 0 )
    {
      KiAddProcessorToSoftwareInterruptBatch(
        (__int64)&a1->DeferredDispatchInterrupts,
        (__int64)StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].Prcb);
      goto LABEL_28;
    }
    if ( (v25 & 8) != 0 && v26->IdleHalt )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = v26->Number;
        goto LABEL_28;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( (_DWORD)SingleTargetIndex == v26->Number )
          goto LABEL_28;
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&a1->DeferredDispatchInterrupts.MultipleTargetAffinity, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      Group = v26->Group;
      GroupSetMember = v26->GroupSetMember;
      if ( p_MultipleTargetAffinity->Count > (unsigned __int16)Group )
        goto LABEL_43;
      if ( p_MultipleTargetAffinity->Size > (unsigned __int16)Group )
      {
        p_MultipleTargetAffinity->Count = Group + 1;
LABEL_43:
        p_MultipleTargetAffinity->Bitmap[Group] |= GroupSetMember;
      }
    }
LABEL_28:
    if ( (StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].NewThread, v26, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].___u6[0] & 4) != 0 )
    {
      if ( v26->SchedulerAssist )
      {
        p_SchedulerAssist = &a1->SchedulerAssist;
        if ( a1->SchedulerAssist )
        {
          if ( a1 != v26 )
          {
            v33 = &a1->SchedulerAssist;
            v34 = *(unsigned int *)v26->SchedulerAssist;
            if ( (*(_DWORD *)v26->SchedulerAssist & 0x40000) != 0 )
              v33 = &a1->SchedulerAssist;
            if ( (v34 & 0x100000) != 0
              || (*(_DWORD *)v26->SchedulerAssist & 0x40000) != 0
              && (p_SchedulerAssist = v33,
                  (unsigned __int8)v34 < StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].KickPriority) )
            {
              v35 = HvlpVirtualProcessorsIdentityMapped == 0;
              v36 = *p_SchedulerAssist;
              *((_DWORD *)*p_SchedulerAssist + 3) = 2;
              Number = v26->Number;
              if ( v35 )
                LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              v36[2] = Number;
              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(v26->Number, 2LL, v34);
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[(unsigned int)v5].NewThread->KeReferenceCount);
    LODWORD(v5) = v5 + 1;
  }
  while ( (unsigned int)v5 < StaticRescheduleContext->ProcessorCount );
  v7 = v66;
LABEL_36:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
LABEL_37:
  KiProcessDeferredReadyList(a1, &v65, *(unsigned __int8 *)(BugCheckParameter1 + 390));
  return v7;
}
