/*
 * XREFs of KiParkCurrentProcessor @ 0x14033670C
 * Callers:
 *     KiSearchForNewThread @ 0x14023FD30 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14022C528 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiIsPrcbThread @ 0x1403078D0 (KiIsPrcbThread.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140335C00 (KiTransitionSchedulingGroupGeneration.c)
 *     KiFlushReadyLists @ 0x140336D7C (KiFlushReadyLists.c)
 *     KiAdjustRescheduleContextForParking @ 0x1403375CC (KiAdjustRescheduleContextForParking.c)
 *     KiGetCurrentScheduledThreadProcessor @ 0x14033770C (KiGetCurrentScheduledThreadProcessor.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     KiProcessScbTracingList @ 0x1404555D0 (KiProcessScbTracingList.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     EtwTraceParkTransition @ 0x1406C88AC (EtwTraceParkTransition.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiParkCurrentProcessor(
        struct _KPRCB *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  char v6; // r13
  __int64 v8; // rbx
  char v11; // r12
  unsigned __int64 GroupSetMember; // r14
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // al
  __int64 CurrentScheduledThreadProcessor; // rax
  int v17; // edx
  int v18; // ecx
  __int64 v19; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r9
  __int64 v21; // r8
  _KSHARED_READY_QUEUE *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  _KSCHEDULER_SUBNODE *SubNode; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  __int64 v31; // r15
  unsigned int v32; // esi
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  _QWORD *v34; // r10
  int v35; // ecx
  unsigned __int64 v36; // r8
  unsigned __int8 *v37; // rax
  int v38; // edx
  _DWORD **v39; // r9
  __int64 v40; // r13
  char v41; // al
  __int64 Prcb; // rsi
  unsigned __int8 TargetType; // al
  __int64 result; // rax
  unsigned int SingleTargetIndex; // eax
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  void **p_SchedulerAssist; // rcx
  void **v53; // r8
  int v54; // edx
  bool v55; // zf
  _DWORD *v56; // rdx
  __int64 v57; // r15
  __int64 v58; // rdx
  struct _SINGLE_LIST_ENTRY v59; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v60[2]; // [rsp+38h] [rbp-20h] BYREF
  int v61; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v62; // [rsp+A8h] [rbp+50h] BYREF
  _DWORD *v63; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v64; // [rsp+B8h] [rbp+60h]

  v64 = a4;
  v63 = a3;
  v6 = 0;
  v8 = 0LL;
  LOBYTE(v61) = 0;
  v62 = 0LL;
  if ( (a1->IdleState & 0x10) == 0 || (v11 = 1, a5 != 3) )
    v11 = 0;
  GroupSetMember = a1->GroupSetMember;
  if ( !v11 )
    _InterlockedXor64((volatile signed __int64 *)(a2 + 80), GroupSetMember);
  KiAdjustReadyQueueScanOwnerOnParkingChange((__int64)a1, a2, (char *)&v61);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 120));
  v15 = 48;
  if ( a5 != 3 )
    v15 = 16;
  a1->IdleState |= v15;
  if ( (a1->IdleState & 1) == 0 && !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), ~GroupSetMember);
  if ( !v11 )
  {
    CurrentScheduledThreadProcessor = KiGetCurrentScheduledThreadProcessor(a1, v14, a1->IdleThread);
    KiUpdateThreadPriority(v18, v17, v19, 63, CurrentScheduledThreadProcessor == v19);
  }
  if ( KiGroupSchedulingEnabled )
  {
    KiTransitionSchedulingGroupGeneration(a1, v14, MEMORY[0xFFFFF78000000320], 1, (__int64)&v62);
    v8 = v62;
  }
  SharedReadyQueue = a1->SharedReadyQueue;
  v59.Next = 0LL;
  KiFlushReadyLists(a1->DispatcherReadyListHead, &a1->ReadySummary, &v59, SharedReadyQueue);
  a1->ReadyThreadCount = 0;
  a1->ReadyQueueExpectedRunTime = 0LL;
  if ( !a1->ScbQueue.Root )
    _InterlockedAnd64((volatile signed __int64 *)&a1->SchedulerSubNode->StealableLocalReadyQueues, ~a1->GroupSetMember);
  if ( !(_BYTE)v61 )
    goto LABEL_26;
  v22 = a1->SharedReadyQueue;
  v60[0] = 0LL;
  if ( _bittest(&KiVelocityFlags, 0x15u) )
  {
    *((_QWORD *)&v60[0] + 1) = v22;
    *(_QWORD *)&v60[0] = 0LL;
    v23 = _InterlockedExchange64((volatile __int64 *)v22, (__int64)v60);
    if ( v23 )
      KxWaitForLockOwnerShip((volatile signed __int64)v60, v23, v21);
  }
  else
  {
    v61 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
    {
      do
        KeYieldProcessorEx(&v61);
      while ( v22->Lock );
    }
  }
  KiFlushReadyLists(v22->ReadyListHead, &v22->ReadySummary, &v59, v22);
  SubNode = v22->SubNode;
  v27 = ~v22->Affinity;
  v22->ReadyThreadCount = 0;
  v22->ReadyQueueExpectedRunTime = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)&SubNode->StealableSharedReadyQueues, v27);
  if ( _bittest(&KiVelocityFlags, 0x15u) )
  {
    _m_prefetchw(v60);
    v28 = *(_QWORD *)&v60[0];
    if ( *(_QWORD *)&v60[0] )
      goto LABEL_24;
    if ( (_OWORD *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v60[0] + 1), 0LL, (signed __int64)v60) != v60 )
    {
      v28 = KxWaitForLockChainValid((__int64 *)v60, v24, v25);
LABEL_24:
      *(_QWORD *)&v60[0] = 0LL;
      v29 = BYTE8(v60[0]);
      if ( ((v29 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v28 + 8), *((__int64 *)&v60[0] + 1))) & 4) != 0 )
        KeWakeAddressAll();
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
  }
LABEL_26:
  if ( !a6 && (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 && !KiIsPrcbThread((__int64)a1->CurrentThread) )
    _interlockedbittestandset((volatile signed __int32 *)(v58 + 120), 0xCu);
  StaticRescheduleContext = a1->StaticRescheduleContext;
  memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
  KiStartRescheduleContext((__int64)StaticRescheduleContext, a3, 0LL);
  KiAdjustRescheduleContextForParking(StaticRescheduleContext);
  KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v59);
  v31 = 0LL;
  v32 = (WORD2(xmmword_140FC0C10) & 0x400 | 0x200u) >> 9;
  if ( StaticRescheduleContext->ProcessorCount )
  {
    do
    {
      v6 |= KiCommitRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                    + 32 * v31
                                                    + 8 * (unsigned int)v31),
              a1,
              v32,
              &v59);
      v31 = (unsigned int)(v31 + 1);
    }
    while ( (unsigned int)v31 < StaticRescheduleContext->ProcessorCount );
    v8 = v62;
  }
  if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
  {
    CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
    if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
      CoreControlBlock->ScanStartIndex = 0;
  }
  if ( !v11 )
    _InterlockedDecrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  v34 = v63;
  v35 = *v63;
  v36 = *(_QWORD *)v63 & 0xFFFFFFFFFFFFFFFEuLL;
  v63 = (_DWORD *)v36;
  if ( (v35 & 1) == 0 )
  {
    v39 = &v63;
    v38 = 1;
    goto LABEL_36;
  }
  v37 = *(unsigned __int8 **)(v36 + 36504);
  v38 = *v37;
  v39 = (_DWORD **)(v37 + 8);
  while ( v38 )
LABEL_36:
    _InterlockedAnd64((volatile signed __int64 *)v39[--v38] + 6, 0LL);
  *v34 = 0LL;
  if ( !v6 )
    goto LABEL_53;
  v40 = 0LL;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_52;
  do
  {
    v41 = StaticRescheduleContext->ProcessorEntries[v40].___u6[0];
    Prcb = (__int64)StaticRescheduleContext->ProcessorEntries[v40].Prcb;
    if ( (v41 & 0x10) == 0 && ((v41 & 8) == 0 || !*(_BYTE *)(Prcb + 7)) )
      goto LABEL_44;
    TargetType = a1->DeferredDispatchInterrupts.TargetType;
    if ( !TargetType )
    {
      a1->DeferredDispatchInterrupts.TargetType = 1;
      a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(Prcb + 36);
      goto LABEL_44;
    }
    if ( TargetType == 1 )
    {
      SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( SingleTargetIndex == *(_DWORD *)(Prcb + 36) )
        goto LABEL_44;
      a1->DeferredDispatchInterrupts.TargetType = 2;
      v46 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) & 0x3F;
      v47 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) >> 6;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v47 )
        goto LABEL_60;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v47 )
      {
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v47 + 1;
LABEL_60:
        v48 = (unsigned int)v47;
        v49 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v47];
        _bittestandset64((__int64 *)&v49, v46);
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v48] = v49;
      }
    }
    v50 = *(unsigned __int8 *)(Prcb + 208);
    v51 = *(_QWORD *)(Prcb + 200);
    if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v50 )
      goto LABEL_62;
    if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned __int16)v50 )
    {
      a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v50 + 1;
LABEL_62:
      a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v50] |= v51;
    }
LABEL_44:
    if ( (StaticRescheduleContext->ProcessorEntries[v40].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v40].NewThread, Prcb, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v40].___u6[0] & 4) != 0 )
    {
      if ( *(_QWORD *)(Prcb + 36600) )
      {
        p_SchedulerAssist = &a1->SchedulerAssist;
        if ( a1->SchedulerAssist )
        {
          if ( a1 != (struct _KPRCB *)Prcb )
          {
            v53 = &a1->SchedulerAssist;
            v54 = **(_DWORD **)(Prcb + 36600);
            if ( (v54 & 0x40000) != 0 )
              v53 = &a1->SchedulerAssist;
            if ( (v54 & 0x100000) != 0
              || (**(_DWORD **)(Prcb + 36600) & 0x40000) != 0
              && (p_SchedulerAssist = v53,
                  (unsigned __int8)v54 < StaticRescheduleContext->ProcessorEntries[v40].KickPriority) )
            {
              v55 = HvlpVirtualProcessorsIdentityMapped == 0;
              v56 = *p_SchedulerAssist;
              *((_DWORD *)*p_SchedulerAssist + 3) = 2;
              v57 = *(unsigned int *)(Prcb + 36);
              if ( v55 )
                LODWORD(v57) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v57 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v57] << 6);
              v56[2] = v57;
              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(Prcb + 36), 2LL, v53);
              __writemsr(0x400000C2u, (unsigned int)v57);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v40].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v40].NewThread->KeReferenceCount);
    v40 = (unsigned int)(v40 + 1);
  }
  while ( (unsigned int)v40 < StaticRescheduleContext->ProcessorCount );
  v8 = v62;
LABEL_52:
  KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
LABEL_53:
  if ( v8 )
    KiProcessScbTracingList(a1, &v62);
  LOBYTE(v36) = 2;
  result = KiProcessDeferredReadyList(a1, &v59, v36);
  if ( (WORD2(xmmword_140FC0C10) & 0x2000) != 0 )
    return EtwTraceParkTransition(a1, a5, v64);
  return result;
}
