/*
 * XREFs of KeYieldExecution @ 0x14023A110
 * Callers:
 *     NtYieldExecution @ 0x14023A0F0 (NtYieldExecution.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiActivateScb @ 0x140239EA4 (KiActivateScb.c)
 *     KiVpBackingThreadYieldExecution @ 0x140239F24 (KiVpBackingThreadYieldExecution.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x14023B460 (KiClearForegroundBoost.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023D390 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1403CA394 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1403CA4C0 (EtwTraceXSchedulerPriorityUpdate.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     ?KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z @ 0x1405306A8 (-KiComputeNewPriorityNonStacking@@YAJPEAU_KTHREAD@@CE@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  unsigned int v1; // esi
  char v2; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  __int64 v12; // rbx
  _KPRCB **Prcbs; // r14
  __int64 ProcessorCount; // r13
  _KPRCB *v15; // rdi
  unsigned int v16; // ebp
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  bool v18; // r10
  __int64 v19; // r8
  unsigned int j; // edx
  unsigned int i; // ecx
  __int64 v22; // rdx
  __int64 v23; // r9
  char v24; // cl
  char v25; // dl
  char v26; // bp
  unsigned int v27; // r15d
  unsigned int m; // edi
  _KCORE_CONTROL_BLOCK *v29; // rcx
  ULONG_PTR v30; // r15
  unsigned __int64 v31; // rcx
  unsigned __int8 *v32; // r8
  unsigned int v33; // r9d
  unsigned __int8 *v34; // rax
  __int64 v35; // rdx
  _KTHREAD *NextThread; // rdi
  unsigned __int64 updated; // rax
  __int64 v38; // r9
  struct _KPRCB *v39; // rcx
  unsigned __int64 v40; // rbx
  unsigned __int32 *v41; // r8
  unsigned __int64 v42; // rcx
  signed __int8 v43; // dl
  unsigned int v44; // edx
  char v45; // al
  char v46; // bl
  char v47; // al
  bool v48; // zf
  AutoBoost *v49; // rdx
  char v50; // cl
  int v51; // eax
  __int64 v52; // r8
  unsigned __int64 v53; // r9
  volatile signed __int32 *v54; // rdx
  int v55; // ecx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rdx
  unsigned __int64 GroupSetMember; // rcx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v62; // r10
  _BYTE *v63; // rax
  __int64 v64; // rcx
  unsigned __int64 *v65; // r8
  _QWORD *v66; // r8
  _QWORD *v67; // rcx
  unsigned __int64 SingleTargetIndex; // rdx
  __int64 v69; // r8
  unsigned int v70; // edi
  char v71; // al
  _KPRCB *Prcb; // rbp
  unsigned __int8 *v73; // rbx
  unsigned __int8 v74; // al
  unsigned __int8 TargetType; // al
  _KAFFINITY_EX *p_MultipleTargetAffinity; // r15
  __int64 Group; // rcx
  unsigned int v78; // eax
  unsigned int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  __int64 v83; // rcx
  _DWORD *SchedulerAssist; // rcx
  __int64 Number; // r15
  unsigned __int32 v86; // eax
  __int64 v87; // rdx
  unsigned __int32 v88; // ett
  int v89; // eax
  int v90; // edx
  int v91; // r14d
  ULONG_PTR v92; // rax
  char v93; // cl
  unsigned int k; // edx
  _BYTE *v95; // r9
  char v96; // al
  char v97; // al
  char v98; // al
  int v99; // ebp
  int v100; // eax
  int v101; // edx
  int v102; // ebx
  int v103; // edx
  __int64 v104; // rcx
  ULONG_PTR v105; // rcx
  char v106; // al
  struct _KPRCB *v107; // [rsp+30h] [rbp-58h]
  _QWORD v108[10]; // [rsp+38h] [rbp-50h]
  int v109; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v110; // [rsp+98h] [rbp+10h] BYREF
  struct _SINGLE_LIST_ENTRY v111; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+A8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = a1;
  v111.Next = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v6 = KeGetCurrentPrcb();
  v107 = v6;
  if ( !v6->ReadySummary && !v6->SharedReadyQueue->ReadySummary )
  {
    v1 = 1073741860;
    goto LABEL_90;
  }
  if ( (v2 & 2) != 0
    && (((*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0) & _bittest(&KiVelocityFlags, 0x14u)) != 0
    && !KiVpBackingThreadYieldExecution((__int64)CurrentThread) )
  {
    v1 = 1073741860;
    goto LABEL_90;
  }
  KiAbProcessPreContextSwitch((AutoBoost *)CurrentThread);
  v10 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v7, v9) )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CurrentThread->ThreadLock );
  }
  CoreControlBlock = v6->CoreControlBlock;
  v12 = (unsigned __int64)v6 | 1;
  v110 = (unsigned __int64)v6 | 1;
  Prcbs = CoreControlBlock->Prcbs;
  if ( CoreControlBlock->ProcessorCount )
  {
    ProcessorCount = CoreControlBlock->ProcessorCount;
    while ( 1 )
    {
      v15 = *Prcbs;
      v16 = 0;
LABEL_19:
      if ( _interlockedbittestandset64((volatile signed __int32 *)&v15->PrcbLock, 0LL) )
        break;
      ++Prcbs;
      if ( !--ProcessorCount )
      {
        v6 = v107;
        CurrentThread = (struct _KTHREAD *)BugCheckParameter1;
        goto LABEL_22;
      }
    }
    while ( 1 )
    {
      if ( (++v16 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
      {
        if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
        {
LABEL_42:
          HvlNotifyLongSpinWait(v16);
          goto LABEL_31;
        }
        for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
        {
          v22 = KiProcessorBlock[i];
          if ( (*(_BYTE *)(v22 + 35) & 1) != 0 )
          {
            v23 = *(_QWORD *)(v22 + 36600);
            if ( !v23 || !*(_BYTE *)(v23 + 65) || !*(_BYTE *)(v23 + 64) )
              goto LABEL_42;
          }
        }
      }
      _mm_pause();
LABEL_31:
      if ( !v15->PrcbLock )
        goto LABEL_19;
    }
  }
LABEL_22:
  if ( v6->NextThread )
    goto LABEL_56;
  StaticRescheduleContext = v6->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext(StaticRescheduleContext, &v110, CurrentThread);
  v18 = (v2 & 1) == 0 || CurrentThread->Priority >= 16;
  v19 = 0LL;
  for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
  {
    if ( StaticRescheduleContext->ProcessorEntries[j].Prcb == v6 )
    {
      v19 = (__int64)&StaticRescheduleContext->ProcessorEntries[j];
      break;
    }
  }
  v24 = *(_BYTE *)(v19 + 32);
  if ( v18 )
    v25 = v24 | 0x10;
  else
    v25 = v24 | 8;
  *(_BYTE *)(v19 + 32) = v25;
  *(_BYTE *)(v19 + 34) |= 2u;
  if ( (v24 & 2) != 0 )
  {
    for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
    {
      v95 = (char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k;
      if ( v95 != (_BYTE *)v19 )
      {
        v96 = v95[32];
        if ( v18 )
          v97 = v96 | 0x10;
        else
          v97 = v96 | 8;
        v95[32] = v97;
        v95[34] |= 2u;
      }
    }
  }
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v111);
  v26 = 0;
  v27 = 0;
  if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
    v27 = 2;
  for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    v26 |= KiCommitRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m),
             v6,
             v27,
             &v111);
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    v29 = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    if ( ++v29->ScanStartIndex >= v29->ProcessorCount )
      v29->ScanStartIndex = 0;
  }
  if ( !v26 && !v111.Next )
  {
LABEL_56:
    v30 = BugCheckParameter1;
    goto LABEL_57;
  }
  KiReleasePrcbLocksForIsolationUnit((__int64 *)&v110);
  v30 = BugCheckParameter1;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  if ( !v26 )
    goto LABEL_143;
  v70 = 0;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_142;
  do
  {
    v71 = StaticRescheduleContext->ProcessorEntries[v70].___u6[0];
    Prcb = StaticRescheduleContext->ProcessorEntries[v70].Prcb;
    v73 = &StaticRescheduleContext->ProcessorCount + 40 * v70;
    if ( (v71 & 0x10) != 0 )
    {
      TargetType = v6->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
LABEL_133:
        v6->DeferredDispatchInterrupts.TargetType = 1;
        v6->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
        goto LABEL_134;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = v6->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( (_DWORD)SingleTargetIndex == Prcb->Number )
          goto LABEL_134;
        p_MultipleTargetAffinity = &v6->DeferredDispatchInterrupts.MultipleTargetAffinity;
        v6->DeferredDispatchInterrupts.TargetType = 2;
        KeAddProcessorAffinityEx(&v6->DeferredDispatchInterrupts.MultipleTargetAffinity, SingleTargetIndex);
      }
      else
      {
        p_MultipleTargetAffinity = &v6->DeferredDispatchInterrupts.MultipleTargetAffinity;
      }
      Group = Prcb->Group;
      SingleTargetIndex = Prcb->GroupSetMember;
      if ( p_MultipleTargetAffinity->Count > (unsigned __int16)Group )
        goto LABEL_154;
      if ( p_MultipleTargetAffinity->Size > (unsigned __int16)Group )
      {
        p_MultipleTargetAffinity->Count = Group + 1;
LABEL_154:
        p_MultipleTargetAffinity->Bitmap[Group] |= SingleTargetIndex;
        goto LABEL_134;
      }
      goto LABEL_134;
    }
    if ( (v71 & 8) == 0 || !Prcb->IdleHalt )
      goto LABEL_134;
    v74 = v6->DeferredDispatchInterrupts.TargetType;
    if ( !v74 )
      goto LABEL_133;
    if ( v74 == 1 )
    {
      v78 = v6->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( v78 == Prcb->Number )
        goto LABEL_134;
      v6->DeferredDispatchInterrupts.TargetType = 2;
      v79 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v78);
      v69 = v79 & 0x3F;
      v80 = v79 >> 6;
      if ( v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v80 )
        goto LABEL_158;
      if ( v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v80 )
      {
        v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v80 + 1;
LABEL_158:
        v81 = v80;
        v82 = v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v80];
        _bittestandset64((__int64 *)&v82, (unsigned int)v69);
        v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v81] = v82;
      }
    }
    v83 = Prcb->Group;
    SingleTargetIndex = Prcb->GroupSetMember;
    if ( v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v83 )
      goto LABEL_160;
    if ( v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v83 )
    {
      v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v83 + 1;
LABEL_160:
      v6->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v83] |= SingleTargetIndex;
    }
LABEL_134:
    if ( (v73[51] & 2) != 0 )
      EtwTraceScheduleThread(*((_QWORD *)v73 + 5), Prcb, 0LL);
    if ( (v73[51] & 4) != 0 )
    {
      if ( Prcb->SchedulerAssist )
      {
        if ( v6->SchedulerAssist )
        {
          if ( v6 != Prcb )
          {
            SingleTargetIndex = *(unsigned int *)Prcb->SchedulerAssist;
            if ( (SingleTargetIndex & 0x100000) != 0
              || (v69 = (unsigned __int8)SingleTargetIndex, (*(_DWORD *)Prcb->SchedulerAssist & 0x40000) != 0)
              && (unsigned __int8)SingleTargetIndex < (char)v73[52] )
            {
              v48 = HvlpVirtualProcessorsIdentityMapped == 0;
              SchedulerAssist = v6->SchedulerAssist;
              SchedulerAssist[3] = 2;
              Number = Prcb->Number;
              if ( v48 )
              {
                v6 = v107;
                LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
              }
              SchedulerAssist[2] = Number;
              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL, v69);
              SingleTargetIndex = 0LL;
              __writemsr(0x400000C2u, (unsigned int)Number);
            }
          }
        }
      }
    }
    if ( (v73[51] & 1) != 0 )
      _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v73 + 5) + 868LL));
    ++v70;
  }
  while ( v70 < StaticRescheduleContext->ProcessorCount );
  v30 = BugCheckParameter1;
LABEL_142:
  KiFlushSoftwareInterruptBatch(&v6->DeferredDispatchInterrupts, SingleTargetIndex);
LABEL_143:
  if ( v111.Next )
    KiReadyDeferredReadyList(v6, &v111);
  v109 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v109);
    while ( *(_QWORD *)(v30 + 64) );
  }
  KiAcquirePrcbLocksForIsolationUnit(v6, 0LL, &v110);
  v12 = v110;
LABEL_57:
  v31 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  v32 = 0LL;
  v108[0] = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  v33 = 0;
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 1) == 1 )
    {
      v34 = *(unsigned __int8 **)(v31 + 36504);
      v33 = *v34;
      v32 = v34 + 8;
    }
    LODWORD(v35) = 0;
    if ( v33 )
    {
      v62 = v33;
      do
      {
        if ( v31 == *(_QWORD *)v32 )
        {
          v35 = (unsigned int)(v35 + 1);
          if ( (_DWORD)v35 == 1 )
            v31 = -1LL;
          else
            v31 = v108[v35];
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v32 + 48LL), 0LL);
        }
        v32 += 8;
        --v62;
      }
      while ( v62 );
    }
    v12 &= ~1uLL;
    v110 = v12;
  }
  NextThread = v6->NextThread;
  if ( !NextThread )
  {
    v110 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v12 & 1) != 0 )
    {
      v63 = *(_BYTE **)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
      LODWORD(v64) = (unsigned __int8)*v63;
      v65 = (unsigned __int64 *)(v63 + 8);
      if ( !*v63 )
      {
LABEL_110:
        *(_QWORD *)(v30 + 64) = 0LL;
        KiAbProcessPostContextSwitch(v30);
        v1 = 1073741860;
        goto LABEL_90;
      }
    }
    else
    {
      v65 = &v110;
      LODWORD(v64) = 1;
    }
    do
    {
      v64 = (unsigned int)(v64 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v65[v64] + 48), 0LL);
    }
    while ( (_DWORD)v64 );
    goto LABEL_110;
  }
  if ( v6->NestingLevel )
  {
    v40 = *(_QWORD *)(v30 + 72);
  }
  else
  {
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread((__int64)v6, v30, 0LL);
    v39 = KeGetCurrentPrcb();
    v40 = updated;
    v41 = (unsigned __int32 *)v39->SchedulerAssist;
    if ( v41 )
    {
      _m_prefetchw(v41);
      v86 = *v41;
      do
      {
        v87 = v86;
        LODWORD(v87) = v86 & 0xFFDFFFFF;
        v88 = v86;
        v86 = _InterlockedCompareExchange((volatile signed __int32 *)v41, v86 & 0xFFDFFFFF, v86);
      }
      while ( v88 != v86 );
      if ( (v86 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v39, v87, v41, v38);
    }
    _enable();
  }
  v42 = v40 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(v30);
  if ( (*(_DWORD *)(v30 + 120) & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(v30 + 120), 5u);
  *(_QWORD *)(v30 + 32) = v42;
  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v42) )
  {
    if ( *(char *)(v30 + 195) < 16 || (*(_DWORD *)(v30 + 120) & 0x400000) != 0 )
    {
      v44 = 2;
      if ( KiSchedulerForegroundBoostDecayPolicy )
        KiClearForegroundBoost(v30, 3LL);
      v45 = KiComputeThreadPriority((struct _KTHREAD *)v30, v44, 1);
      *(_WORD *)(v30 + 518) &= 0xF00Fu;
      v46 = v45;
      v47 = *(_BYTE *)(v30 + 870);
      if ( v47 >= 1 )
        *(_BYTE *)(v30 + 870) = v47 - 1;
      else
        *(_BYTE *)(v30 + 870) = 0;
    }
    else
    {
      v46 = *(_BYTE *)(v30 + 195);
    }
  }
  else
  {
    v46 = KiComputeNewPriorityNonStacking((struct _KTHREAD *)v30, v43, 1u);
  }
  v48 = (*(_DWORD *)(v30 + 120) & 0x400000) == 0;
  BugCheckParameter1 = 0LL;
  if ( v48 )
  {
    v49 = (AutoBoost *)KeGetCurrentPrcb();
    v50 = *(_BYTE *)(v30 + 195);
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      if ( v46 > v50 )
      {
        if ( *(_BYTE *)(v30 + 792) )
        {
          v66 = (_QWORD *)(v30 + 808);
          if ( *(_QWORD *)(v30 + 808) == 1LL )
          {
            v67 = (_QWORD *)((char *)v49 + 37304);
            if ( v49 != (AutoBoost *)-37304LL )
              goto LABEL_120;
          }
        }
      }
    }
    else if ( v46 > v50 )
    {
      if ( *(_BYTE *)(v30 + 792) )
      {
        v66 = (_QWORD *)(v30 + 808);
        if ( *(_QWORD *)(v30 + 808) == 1LL )
        {
          v67 = (_QWORD *)((char *)v49 + 37304);
          if ( v49 != (AutoBoost *)-37304LL )
          {
LABEL_120:
            *v66 = *v67;
            *v67 = v66;
            _InterlockedIncrement16((volatile signed __int16 *)(v30 + 868));
            AutoBoost::KiAbpQueueAutoBoostDpc(v49, (struct _KPRCB *)v49);
          }
        }
      }
    }
    *(_BYTE *)(v30 + 195) = v46;
    v51 = KiComputeThreadQos(v30);
    if ( v51 != *(unsigned __int8 *)(v30 + 516) )
      *(_BYTE *)(v30 + 516) = v51;
    if ( (*(_DWORD *)(v30 + 120) & 0x400000) != 0 )
    {
      v54 = *(volatile signed __int32 **)(v30 + 968);
      v55 = *(char *)(v30 + 195);
      v52 = (unsigned __int8)*v54;
      if ( v55 != (_DWORD)v52 )
        _InterlockedAdd(v54, v55 - v52);
    }
  }
  else
  {
    _InterlockedOr(*(volatile signed __int32 **)(v30 + 968), 0x100000u);
    v89 = KiReadGuestSchedulerAssistPriority(v30, &BugCheckParameter1);
    v90 = *(_DWORD *)(v30 + 1024);
    v91 = v89;
    if ( v89 != v90 )
    {
      v92 = (char)v89 + v30;
      v93 = *(_BYTE *)(v92 + 824);
      if ( v93 == -1 )
        KeBugCheckEx(0x157u, v30, (char)v91, 1uLL, 0LL);
      *(_BYTE *)(v92 + 824) = v93 + 1;
      *(_DWORD *)(v30 + 856) |= 1 << v91;
      if ( v90 != 32 )
      {
        v105 = (char)v90 + v30;
        v106 = *(_BYTE *)(v105 + 824);
        if ( !v106 )
          KeBugCheckEx(0x157u, v30, (char)v90, 2uLL, 0LL);
        v98 = v106 - 1;
        *(_BYTE *)(v105 + 824) = v98;
        if ( !v98 )
          *(_DWORD *)(v30 + 856) ^= 1 << v90;
      }
      *(_DWORD *)(v30 + 1024) = v91;
    }
    v99 = *(char *)(v30 + 195);
    *(_WORD *)(v30 + 518) &= 0xF00Fu;
    *(_BYTE *)(v30 + 870) = 0;
    v100 = KiComputeThreadPriority((struct _KTHREAD *)v30, 0, 0);
    v102 = v100;
    if ( v100 != v99 )
      KiUpdateThreadPriority(0, v101, v30, v100, 0);
    v103 = *(unsigned __int8 *)(v30 + 1122);
    if ( *(_BYTE *)(v30 + 1122) )
    {
      v104 = *(_QWORD *)(v30 + 968);
      if ( v104 )
      {
        v53 = *(unsigned int *)(v104 + 32);
        v52 = *(_DWORD *)v104 & 0x200000;
        if ( *(_QWORD *)(v104 + 28) || (*(_DWORD *)(v104 + 20) & 0x4000) != 0 || (_DWORD)v52 )
          v103 = 0;
      }
    }
    if ( v103 != *(unsigned __int8 *)(v30 + 516) )
      *(_BYTE *)(v30 + 516) = v103;
    if ( (*(_DWORD *)(v30 + 120) & 0x400000) != 0 )
      _InterlockedAnd(*(volatile signed __int32 **)(v30 + 968), 0xFFEFFFFF);
    if ( v99 != v102 && (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
      EtwTraceXSchedulerPriorityUpdate(v30, v99, v91, v102, (__int64)&BugCheckParameter1);
  }
  *(_QWORD *)(v30 + 64) = 0LL;
  v6->NextThread = 0LL;
  KiCaptureTotalCyclesCurrentThread((__int64)v6, v30, v52, v53);
  v6->CurrentThread = NextThread;
  if ( NextThread->WaitBlockFill6[68] == 1 )
    NextThread->ReadyTime += MEMORY[0xFFFFF78000000320] - NextThread->WaitBlock[2].SpareLong;
  NextThread->WaitBlockFill6[68] = 2;
  SchedulerSubNode = v6->SchedulerSubNode;
  GroupSetMember = v6->GroupSetMember;
  if ( (GroupSetMember & SchedulerSubNode->StealableStandbyThreads) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)&SchedulerSubNode->StealableStandbyThreads, ~GroupSetMember);
  SchedulingGroup = NextThread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v59 = (__int64)SchedulingGroup + v6->ScbOffset;
    if ( v59 )
    {
      if ( !_bittest16((const signed __int16 *)(v59 + 128), 9u) )
        KiActivateScb((__int64)v6, v59);
    }
  }
  *(_BYTE *)(v30 + 643) = 33;
  *(_BYTE *)(v30 + 390) = CurrentIrql;
  KiQueueReadyThread(v6, (unsigned __int64)&v110, v30, 1);
  LOBYTE(v60) = 1;
  KiSwapContext(v30, NextThread, v60);
  KiAbProcessPostContextSwitch(v30);
LABEL_90:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v1;
}
