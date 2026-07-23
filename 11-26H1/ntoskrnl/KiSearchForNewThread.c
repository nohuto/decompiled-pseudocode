/*
 * XREFs of KiSearchForNewThread @ 0x14023FD30
 * Callers:
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x140312AA0 (KiIdleSchedule.c)
 * Callees:
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiIsThreadStateControlledByProcessor @ 0x14023944C (KiIsThreadStateControlledByProcessor.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 *     KiStartThreadCycleAccumulation @ 0x140336EE0 (KiStartThreadCycleAccumulation.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1403CA120 (KiUpdateVPBackingThreadPriority.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403ED6A0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiShouldSearchSharedReadyQueue @ 0x14042BF30 (KiShouldSearchSharedReadyQueue.c)
 *     KeIsForceParkingEnabled @ 0x1404366F0 (KeIsForceParkingEnabled.c)
 *     KiSearchForNewThreadsWithinL1SearchContext @ 0x1404A8A68 (KiSearchForNewThreadsWithinL1SearchContext.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_KTHREAD *__fastcall KiSearchForNewThread(struct _KPRCB *a1, char a2, __int64 *a3)
{
  _KTHREAD *NextThread; // rdi
  __int64 v4; // r12
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  _KISOLATION_WIDTH v10; // esi
  unsigned __int8 *v11; // rax
  unsigned int v12; // r9d
  struct _KPRCB **v13; // r8
  int v14; // r14d
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  unsigned int j; // r8d
  char v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r9
  char v22; // si
  unsigned int v23; // r14d
  unsigned int m; // edi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  __int64 *v26; // r13
  unsigned __int8 *v27; // rcx
  unsigned int v28; // r10d
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int8 *v32; // rax
  unsigned __int8 IdleState; // al
  $8EBF9F2B27741A17C5BF2EE4B27176E1 *v34; // r12
  struct _KPRCB *v35; // r11
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  __int64 CurrentThread; // r10
  unsigned __int8 AllCompareThreadStateFlags; // cl
  unsigned __int8 v39; // cl
  unsigned __int8 v40; // dl
  unsigned __int8 v41; // cl
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  _BYTE *v45; // rax
  _BYTE *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // r9
  _BYTE *v50; // rax
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int64 *v52; // r8
  unsigned int v53; // r14d
  char v54; // al
  _KPRCB *Prcb; // rsi
  char *v56; // rdi
  unsigned __int8 v57; // al
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v60; // r8d
  __int64 v61; // rcx
  char *v62; // rdx
  __int64 v63; // rcx
  __int64 Group; // rcx
  unsigned int v65; // eax
  unsigned int v66; // r8d
  __int64 v67; // rcx
  char *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  void **p_SchedulerAssist; // rax
  bool v72; // zf
  _DWORD *v73; // rcx
  __int64 Number; // r12
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  char *v78; // r8
  unsigned int i; // edx
  char *v80; // r10
  unsigned __int8 *v81; // rcx
  __int64 v82; // rdx
  unsigned int k; // r10d
  char *v84; // r9
  __int64 v85; // rcx
  __int64 v86; // rax
  _KFORCE_PARK_DUTY_CYCLE_DATA *ForceParkDutyCycleData; // rsi
  _KSHARED_READY_QUEUE *v88; // r14
  __int64 v89; // rdx
  unsigned __int64 v90; // r9
  unsigned __int64 *v91; // r8
  unsigned __int64 v92; // rax
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rsi
  char v94; // r14
  unsigned __int64 v95; // rcx
  __int64 v96; // r8
  _KTHREAD *IdleThread; // rdx
  __int64 v98; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned int v101; // edi
  unsigned int n; // ecx
  __int64 v103; // rdx
  __int64 v104; // rdx
  unsigned __int32 v105; // eax
  __int64 v106; // rdx
  unsigned __int32 v107; // ett
  __int64 v108; // rax
  __int64 v109; // rdx
  __int128 v110; // [rsp+30h] [rbp-39h] BYREF
  struct _SINGLE_LIST_ENTRY v111; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v112; // [rsp+48h] [rbp-21h]
  __int64 v113; // [rsp+50h] [rbp-19h]
  __int64 v114; // [rsp+58h] [rbp-11h]
  unsigned __int64 v115; // [rsp+60h] [rbp-9h]
  unsigned __int64 v116; // [rsp+68h] [rbp-1h] BYREF
  struct _KPRCB *v117; // [rsp+70h] [rbp+7h]
  _KTHREAD *v118; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v119; // [rsp+D0h] [rbp+67h] BYREF
  char v120; // [rsp+D8h] [rbp+6Fh]
  __int64 *v121; // [rsp+E0h] [rbp+77h]
  unsigned __int64 *v122; // [rsp+E8h] [rbp+7Fh]

  v121 = a3;
  v120 = a2;
  NextThread = a1->NextThread;
  LODWORD(v4) = 0;
  v111.Next = 0LL;
  v118 = NextThread;
  if ( NextThread && NextThread != a1->IdleThread )
  {
    v43 = *a3;
    v44 = *a3 & 0xFFFFFFFFFFFFFFFEuLL;
    v112 = v44;
    if ( (v43 & 1) != 0 )
    {
      v45 = *(_BYTE **)(v44 + 36504);
      v46 = v45 + 8;
      if ( *v45 )
      {
        v47 = (unsigned __int8)*v45;
        do
        {
          if ( v44 == *(_QWORD *)v46 )
          {
            v4 = (unsigned int)(v4 + 1);
            if ( (_DWORD)v4 == 1 )
              v44 = -1LL;
            else
              v44 = *(&v112 + v4);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v46 + 48LL), 0LL);
          }
          v46 += 8;
          --v47;
        }
        while ( v47 );
      }
      *a3 &= ~1uLL;
    }
    return NextThread;
  }
  StaticRescheduleContext = a1->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  v8 = *a3;
  v122 = 0LL;
  v9 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  v116 = v8 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = v8 & 1;
  if ( v10 )
  {
    v11 = *(unsigned __int8 **)(v9 + 36504);
    v12 = *v11;
    v13 = (struct _KPRCB **)(v11 + 8);
    v122 = (unsigned __int64 *)(v11 + 8);
    v14 = 0;
    if ( !v12 )
      goto LABEL_4;
  }
  else
  {
    v13 = (struct _KPRCB **)&v116;
    v12 = 1;
    v122 = &v116;
    v14 = 0;
  }
  v34 = &StaticRescheduleContext->ProcessorEntries[0].32;
  v114 = v12;
  do
  {
    LODWORD(v119) = v12;
    *(_OWORD *)&v34[-16].0 = 0LL;
    *(_OWORD *)&v34[-8].0 = 0LL;
    *(_QWORD *)&v34->0 = 0LL;
    *(_QWORD *)&v34[-4].0 = -1LL;
    v34[2].AllCompareThreadStateFlags = 63;
    v35 = *v13;
    *(_QWORD *)&v34[-16].0 = *v13;
    *(_QWORD *)&v34[-12].0 = 0LL;
    v117 = v35;
    SharedReadyQueue = v35->SharedReadyQueue;
    if ( SharedReadyQueue )
    {
      if ( (v35->IdleState & 0x10) == 0
        || ((unsigned __int8)KeIsForceParkingEnabled(SharedReadyQueue) && (v35->IdleState & 0x20) != 0
          ? (v77 = ~*(_QWORD *)(v75 + 104))
          : (v77 = *(_QWORD *)(v75 + 80)),
            (v77 & *(_QWORD *)(v76 + 712)) == 0) )
      {
        *(_QWORD *)&v34[-12].0 = v35->SharedReadyQueue;
      }
    }
    CurrentThread = (__int64)v35->NextThread;
    v113 = CurrentThread;
    *(_QWORD *)&v34[-8].0 = CurrentThread;
    if ( !CurrentThread )
    {
      CurrentThread = (__int64)v35->CurrentThread;
      v113 = CurrentThread;
      *(_QWORD *)&v34[-8].0 = CurrentThread;
    }
    if ( v35->NextThread == (_KTHREAD *)CurrentThread )
    {
      v34->AllCompareThreadStateFlags |= 4u;
    }
    else
    {
      AllCompareThreadStateFlags = v34->AllCompareThreadStateFlags;
      if ( v35 == KeGetCurrentPrcb() )
        v39 = AllCompareThreadStateFlags | 4;
      else
        v39 = AllCompareThreadStateFlags & 0xFB;
      v34->AllCompareThreadStateFlags = v39;
    }
    if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0
      && !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x400000) != 0 )
      {
        if ( KiIsThreadStateControlledByProcessor(CurrentThread, (__int64)v35) )
        {
          KiUpdateVPBackingThreadPriority((struct _KTHREAD *)CurrentThread);
          v12 = v119;
          CurrentThread = v113;
          v35 = v117;
        }
        v13 = (struct _KPRCB **)v122;
      }
      *(_QWORD *)(CurrentThread + 64) = 0LL;
    }
    v40 = v34->AllCompareThreadStateFlags & 0xFE | ((v35->IdleState & 1) == 0);
    v34->AllCompareThreadStateFlags = v40;
    v41 = v40 ^ (v40 ^ (v35->PriorityState->AllFields >> 6)) & 2;
    v34->AllCompareThreadStateFlags = v41;
    if ( ((v41 >> 1) & 1) > v14 )
      v14 = (v41 >> 1) & 1;
    ++v13;
    v34 += 20;
    v122 = (unsigned __int64 *)v13;
    --v114;
  }
  while ( v114 );
  NextThread = v118;
LABEL_4:
  StaticRescheduleContext->MaximumThreadIsolationWidth = v14;
  StaticRescheduleContext->IsolationWidth = v10;
  StaticRescheduleContext->ProcessorCount = v12;
  if ( v10 )
    v15 = *(_BYTE *)(*(_QWORD *)(v9 + 36504) + 1LL);
  else
    v15 = 0;
  StaticRescheduleContext->ScanStart = v15;
  if ( v14 )
  {
    v78 = 0LL;
    for ( i = 0; i < v12; ++i )
    {
      v80 = (char *)StaticRescheduleContext + 40 * i;
      if ( *((_QWORD *)v80 + 4) != *(_QWORD *)(*((_QWORD *)v80 + 2) + 36544LL) )
      {
        v78 = v80 + 16;
        break;
      }
    }
    if ( v12 )
    {
      v81 = (unsigned __int8 *)&StaticRescheduleContext->ProcessorEntries[0].32;
      v82 = v12;
      do
      {
        if ( v81 - 32 != (unsigned __int8 *)v78 )
        {
          *((_QWORD *)v81 - 2) = *((_QWORD *)v78 + 2);
          *v81 = v78[32] | 0x20;
        }
        v81 += 40;
        --v82;
      }
      while ( v82 );
    }
  }
  if ( !v120 && !NextThread )
  {
    v16 = 0LL;
    for ( j = 0; j < StaticRescheduleContext->ProcessorCount; ++j )
    {
      if ( StaticRescheduleContext->ProcessorEntries[j].Prcb == a1 )
      {
        v16 = (__int64)&StaticRescheduleContext->ProcessorEntries[j];
        break;
      }
    }
    *(_BYTE *)(v16 + 34) |= 2u;
    v18 = *(_BYTE *)(v16 + 32);
    v19 = *(_QWORD *)v16;
    *(_QWORD *)(v16 + 16) = *(_QWORD *)(*(_QWORD *)v16 + 24LL);
    *(_BYTE *)(v16 + 32) = v18 & 0xC0 | 5;
    v20 = *(_QWORD *)(v19 + 24);
    *(_BYTE *)(v16 + 33) &= ~1u;
    *(_QWORD *)(v16 + 24) = v20;
    if ( (v18 & 2) != 0 )
    {
      for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
      {
        v84 = (char *)StaticRescheduleContext + 40 * k;
        if ( v84 + 16 != (char *)v16 )
        {
          v84[50] |= 2u;
          v85 = *((_QWORD *)v84 + 2);
          *((_QWORD *)v84 + 4) = *(_QWORD *)(v85 + 24);
          v84[48] = v84[48] & 0xC0 | 5;
          v86 = *(_QWORD *)(v85 + 24);
          v84[49] &= ~1u;
          *((_QWORD *)v84 + 5) = v86;
        }
      }
      if ( (v18 & 2) != 0 )
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
  }
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v111);
  v22 = 0;
  v23 = 1;
  if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
    v23 = 3;
  for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    v22 |= KiCommitRescheduleContextEntry(
             (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * m + 8 * m),
             a1,
             v23,
             &v111);
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  if ( !v111.Next && !v22 )
  {
    v26 = v121;
    v27 = 0LL;
    v28 = 0;
    v29 = *v121;
    v30 = *v121 & 0xFFFFFFFFFFFFFFFEuLL;
    v115 = v30;
    v31 = v29 & 1;
    if ( (_DWORD)v31 )
    {
      if ( (_DWORD)v31 == 1 )
      {
        v32 = *(unsigned __int8 **)(v30 + 36504);
        v28 = *v32;
        v27 = v32 + 8;
      }
      v21 = 0LL;
      if ( v28 )
      {
        v31 = v28;
        do
        {
          if ( v30 == *(_QWORD *)v27 )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (_DWORD)v21 == 1 )
              v30 = -1LL;
            else
              v30 = *(&v115 + v21);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)v27 + 48LL), 0LL);
          }
          v27 += 8;
          --v31;
        }
        while ( v31 );
      }
      *v26 &= ~1uLL;
    }
    goto LABEL_28;
  }
  v26 = v121;
  v48 = *v121;
  v49 = *v121 & 0xFFFFFFFFFFFFFFFEuLL;
  v119 = v49;
  if ( (v48 & 1) == 0 )
  {
    v52 = &v119;
    LODWORD(GroupSetMember) = 1;
    do
    {
LABEL_75:
      GroupSetMember = (unsigned int)(GroupSetMember - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v52[GroupSetMember] + 48), 0LL);
    }
    while ( (_DWORD)GroupSetMember );
    goto LABEL_76;
  }
  v50 = *(_BYTE **)(v49 + 36504);
  GroupSetMember = (unsigned __int8)*v50;
  v52 = (unsigned __int64 *)(v50 + 8);
  if ( *v50 )
    goto LABEL_75;
LABEL_76:
  *v26 = 0LL;
  if ( !v22 )
    goto LABEL_92;
  v53 = 0;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_91;
  do
  {
    v54 = StaticRescheduleContext->ProcessorEntries[v53].___u6[0];
    Prcb = StaticRescheduleContext->ProcessorEntries[v53].Prcb;
    v56 = (char *)StaticRescheduleContext + 40 * v53;
    if ( (v54 & 0x10) != 0 )
    {
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
LABEL_82:
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
        goto LABEL_83;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == Prcb->Number )
          goto LABEL_83;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        v60 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) & 0x3F;
        v61 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) >> 6;
        if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v61 )
          goto LABEL_99;
        if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v61 )
        {
          a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v61 + 1;
LABEL_99:
          v62 = (char *)a1 + 8 * v61;
          v63 = *((_QWORD *)v62 + 1725);
          _bittestandset64(&v63, v60);
          *((_QWORD *)v62 + 1725) = v63;
        }
      }
      Group = Prcb->Group;
      GroupSetMember = Prcb->GroupSetMember;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
      {
LABEL_108:
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= GroupSetMember;
        goto LABEL_83;
      }
LABEL_101:
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned __int16)Group )
        goto LABEL_83;
      a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
      goto LABEL_108;
    }
    if ( (v54 & 8) != 0 && Prcb->IdleHalt )
    {
      v57 = a1->DeferredDispatchInterrupts.TargetType;
      if ( !v57 )
        goto LABEL_82;
      if ( v57 == 1 )
      {
        v65 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( v65 == Prcb->Number )
          goto LABEL_83;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        v66 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v65) & 0x3F;
        v67 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v65) >> 6;
        if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v67 )
          goto LABEL_106;
        if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v67 )
        {
          a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v67 + 1;
LABEL_106:
          v68 = (char *)a1 + 8 * v67;
          v69 = *((_QWORD *)v68 + 1725);
          _bittestandset64(&v69, v66);
          *((_QWORD *)v68 + 1725) = v69;
        }
      }
      Group = Prcb->Group;
      GroupSetMember = Prcb->GroupSetMember;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)Group )
        goto LABEL_108;
      goto LABEL_101;
    }
LABEL_83:
    if ( (v56[51] & 2) != 0 )
      EtwTraceScheduleThread(*((_QWORD *)v56 + 5), Prcb, 0LL);
    if ( (v56[51] & 4) != 0 && Prcb->SchedulerAssist && a1->SchedulerAssist && a1 != Prcb )
    {
      v70 = *(unsigned int *)Prcb->SchedulerAssist;
      p_SchedulerAssist = &a1->SchedulerAssist;
      if ( (*(_DWORD *)Prcb->SchedulerAssist & 0x40000) != 0 )
        p_SchedulerAssist = &a1->SchedulerAssist;
      if ( (v70 & 0x100000) != 0
        || (GroupSetMember = (unsigned __int8)v70,
            p_SchedulerAssist = &a1->SchedulerAssist,
            (*(_DWORD *)Prcb->SchedulerAssist & 0x40000) != 0)
        && (unsigned __int8)v70 < v56[52] )
      {
        v72 = HvlpVirtualProcessorsIdentityMapped == 0;
        v73 = *p_SchedulerAssist;
        *((_DWORD *)*p_SchedulerAssist + 3) = 2;
        Number = Prcb->Number;
        if ( v72 )
          LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
        v73[2] = Number;
        if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL, v70);
        GroupSetMember = 0LL;
        __writemsr(0x400000C2u, (unsigned int)Number);
      }
    }
    if ( (v56[51] & 1) != 0 )
      _InterlockedDecrement16((volatile signed __int16 *)(*((_QWORD *)v56 + 5) + 868LL));
    ++v53;
  }
  while ( v53 < StaticRescheduleContext->ProcessorCount );
  v26 = v121;
LABEL_91:
  KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, GroupSetMember);
LABEL_92:
  if ( v111.Next )
    KiReadyDeferredReadyList(a1, &v111);
  KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, v26);
LABEL_28:
  NextThread = a1->NextThread;
  if ( !NextThread || NextThread == a1->IdleThread )
  {
    IdleState = a1->IdleState;
    if ( (IdleState & 1) != 0 )
      __fastfail(0x21u);
    if ( KiForceParkingConfiguration )
    {
      if ( (IdleState & 8) != 0 )
      {
        ForceParkDutyCycleData = a1->ForceParkDutyCycleData;
        v88 = a1->SharedReadyQueue;
        if ( ForceParkDutyCycleData->CurrentState )
        {
          if ( !a1->ReadySummary
            && (!v88 || !(unsigned __int8)KiShouldSearchSharedReadyQueue(a1, a1->SharedReadyQueue) || !v88->ReadySummary) )
          {
            a1->IdleState |= 0x20u;
            if ( v88 )
            {
              v110 = 0LL;
              if ( (KiVelocityFlags & 0x200000) != 0 )
              {
                *((_QWORD *)&v110 + 1) = v88;
                *(_QWORD *)&v110 = 0LL;
                if ( _InterlockedExchange64((volatile __int64 *)v88, (__int64)&v110) )
                  KxWaitForLockOwnerShip(&v110);
              }
              else
              {
                LODWORD(v119) = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)v88, 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v119);
                  while ( v88->Lock );
                }
              }
              v72 = (KiVelocityFlags & 0x200000) == 0;
              v88->ForceParkDutyCyclingArmedMask &= ~a1->GroupSetMember;
              if ( v72 )
              {
                _InterlockedAnd64((volatile signed __int64 *)v88, 0LL);
              }
              else
              {
                _m_prefetchw(&v110);
                v108 = v110;
                if ( (_QWORD)v110 )
                {
LABEL_222:
                  *(_QWORD *)&v110 = 0LL;
                  v109 = *((_QWORD *)&v110 + 1);
                  if ( (((unsigned __int8)v109 ^ (unsigned __int8)_InterlockedExchange64(
                                                                    (volatile __int64 *)(v108 + 8),
                                                                    *((__int64 *)&v110 + 1))) & 4) != 0 )
                    KeWakeAddressAll(v108 + 8, v109, v31, v21);
                }
                else if ( (__int128 *)_InterlockedCompareExchange64(
                                        *((volatile signed __int64 **)&v110 + 1),
                                        0LL,
                                        (signed __int64)&v110) != &v110 )
                {
                  v108 = KxWaitForLockChainValid(&v110);
                  goto LABEL_222;
                }
              }
            }
            ForceParkDutyCycleData->CurrentState = KiForceParkDutyCycleUnarmed;
            ForceParkDutyCycleData->DpcTransition = KiForceParkDutyCycleTransitionDisarm;
            KiInsertQueueDpc((ULONG_PTR)ForceParkDutyCycleData, 0);
          }
        }
      }
    }
    if ( (a1->IdleState & 0x10) != 0 )
    {
      if ( !NextThread )
        KiReleasePrcbLocksForIsolationUnit(v26);
    }
    else
    {
      v89 = *v26;
      v90 = *v26 & 0xFFFFFFFFFFFFFFFEuLL;
      v119 = v90;
      if ( (v89 & 1) == 0 )
      {
        v91 = &v119;
        LODWORD(v92) = 1;
        goto LABEL_149;
      }
      v92 = *(_QWORD *)(v90 + 36504);
      v91 = (unsigned __int64 *)(v92 + 8);
      LODWORD(v92) = *(unsigned __int8 *)v92;
      while ( (_DWORD)v92 )
      {
LABEL_149:
        v92 = (unsigned int)(v92 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v91[v92] + 48), 0LL);
      }
      NextThread = 0LL;
      *v26 = 0LL;
      if ( !a1->SearchContexts[0]
        || (NextThread = (_KTHREAD *)KiSearchForNewThreadsWithinL0SearchContext(a1, v26, v91)) == 0LL )
      {
        if ( a1->SearchContexts[1] )
          NextThread = (_KTHREAD *)KiSearchForNewThreadsWithinL1SearchContext(a1, v26, v91);
      }
      if ( !NextThread )
      {
        SchedulerSubNode = a1->SchedulerSubNode;
        v94 = 0;
        v95 = a1->GroupSetMember;
        if ( (SchedulerSubNode->NonParkedSet & v95) == 0 )
        {
          NextThread = 0LL;
          goto LABEL_166;
        }
        if ( (v95 & SchedulerSubNode->SoftParkRequestSet) == 0 )
        {
          NextThread = 0LL;
          goto LABEL_166;
        }
        if ( v120 )
        {
          KiCaptureTotalCyclesCurrentThread((__int64)a1, (__int64)a1->IdleThread, (__int64)v91, v90);
          v94 = 1;
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(&SchedulerSubNode->ParkLock);
        KiAcquirePrcbLocksForIsolationUnit(a1, 1LL, v26);
        NextThread = a1->NextThread;
        if ( NextThread && NextThread != a1->IdleThread )
        {
          KiDowngradeIsolationUnitLockHandle(v26, 0LL);
          ExReleaseSpinLockExclusiveFromDpcLevel(&SchedulerSubNode->ParkLock);
        }
        else
        {
          KiParkCurrentProcessor(a1, 2, 1);
          NextThread = 0LL;
        }
        if ( v94 )
        {
          IdleThread = a1->IdleThread;
          _disable();
          LOBYTE(v96) = 1;
          KiStartThreadCycleAccumulation(a1, IdleThread, v96);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v105 = *SchedulerAssist;
            do
            {
              v106 = v105;
              LODWORD(v106) = v105 & 0xFFDFFFFF;
              v107 = v105;
              v105 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v105 & 0xFFDFFFFF, v105);
            }
            while ( v107 != v105 );
            if ( (v105 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, v106, SchedulerAssist, v98);
          }
          _enable();
        }
        if ( !NextThread )
        {
LABEL_166:
          if ( !v120 )
          {
            v101 = 0;
            *v26 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
            while ( 2 )
            {
              if ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
              {
LABEL_169:
                if ( (++v101 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  goto LABEL_170;
                if ( KeGetCurrentIrql() >= 2u && KeGetCurrentPrcb()->SchedulerAssist )
                {
                  for ( n = 0; n < (unsigned int)KeNumberProcessors_0; ++n )
                  {
                    v103 = KiProcessorBlock[n];
                    if ( (*(_BYTE *)(v103 + 35) & 1) != 0 )
                    {
                      v104 = *(_QWORD *)(v103 + 36600);
                      if ( !v104 || !*(_BYTE *)(v104 + 65) || !*(_BYTE *)(v104 + 64) )
                        goto LABEL_182;
                    }
                  }
LABEL_170:
                  _mm_pause();
                }
                else
                {
LABEL_182:
                  HvlNotifyLongSpinWait(v101);
                }
                if ( !a1->PrcbLock )
                  continue;
                goto LABEL_169;
              }
              return a1->NextThread;
            }
          }
        }
      }
    }
  }
  return NextThread;
}
