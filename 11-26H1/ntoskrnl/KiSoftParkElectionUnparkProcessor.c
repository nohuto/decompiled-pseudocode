/*
 * XREFs of KiSoftParkElectionUnparkProcessor @ 0x14022C654
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14022BDF0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14022C528 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     EtwTraceParkTransition @ 0x1406C88AC (EtwTraceParkTransition.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiSoftParkElectionUnparkProcessor(
        struct _KPRCB *a1,
        __int64 a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _SINGLE_LIST_ENTRY *v5; // r13
  char v6; // r9
  __int64 v7; // r15
  char v10; // bl
  _KCORE_CONTROL_BLOCK *v11; // rax
  __int64 ProcessorCount; // rcx
  _KPRCB **Prcbs; // r12
  __int64 v14; // r13
  _KPRCB *v15; // r15
  unsigned int v16; // ebp
  unsigned __int64 v17; // rbp
  char v18; // r8
  int v19; // edx
  char v20; // bp
  __int64 v21; // r15
  unsigned int v22; // ebp
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  unsigned __int8 *v24; // rax
  int v25; // edx
  unsigned __int64 *v26; // r8
  __int64 i; // r12
  char v28; // al
  struct _KPRCB *Prcb; // rbx
  unsigned __int8 TargetType; // al
  int *SchedulerAssist; // rcx
  unsigned __int8 v32; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  int v40; // ecx
  bool v41; // zf
  _DWORD *v42; // rcx
  __int64 Number; // rbp
  char v44; // bl
  __int64 v45; // rdx
  _KAFFINITY_EX *p_MultipleTargetAffinity; // rdi
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  char v50; // [rsp+30h] [rbp-68h]
  __int64 v51; // [rsp+38h] [rbp-60h] BYREF
  __int64 v52; // [rsp+40h] [rbp-58h]
  unsigned __int64 v53; // [rsp+A0h] [rbp+8h] BYREF
  char v54; // [rsp+A8h] [rbp+10h]
  __int64 v55; // [rsp+B0h] [rbp+18h]
  struct _SINGLE_LIST_ENTRY *v56; // [rsp+B8h] [rbp+20h]

  v56 = a4;
  v55 = a3;
  StaticRescheduleContext = a1->StaticRescheduleContext;
  v5 = a4;
  v6 = 0;
  v7 = a3;
  LOBYTE(v53) = 0;
  v54 = 0;
  v50 = 0;
  v10 = a2 | 1;
  v52 = a2 | 1;
  v51 = a2 | 1;
  v11 = *(_KCORE_CONTROL_BLOCK **)(a2 + 36504);
  ProcessorCount = v11->ProcessorCount;
  Prcbs = v11->Prcbs;
  if ( (_BYTE)ProcessorCount )
  {
    v14 = v11->ProcessorCount;
    do
    {
      v15 = *Prcbs;
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->PrcbLock, 0LL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(ProcessorCount, a2, a3) )
          {
            HvlNotifyLongSpinWait(v16);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( v15->PrcbLock );
      }
      ++Prcbs;
      --v14;
    }
    while ( v14 );
    v5 = v56;
    v6 = v53;
    v7 = v55;
  }
  if ( (*(_BYTE *)(a2 + 35) & 0x14) == 0x14 )
  {
    v17 = *(_QWORD *)(a2 + 200);
    _InterlockedXor64((volatile signed __int64 *)(v7 + 80), v17);
    KiAdjustReadyQueueScanOwnerOnParkingChange(a2, v7, 0LL);
    LOBYTE(v19) = *(_BYTE *)(a2 + 35) & 0xCF;
    if ( (*(_BYTE *)(a2 + 35) & 1) != 0 )
    {
      *(_BYTE *)(a2 + 35) = v19;
      v20 = 0;
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), v17);
      *(_BYTE *)(a2 + 35) = v19;
      v20 = 1;
      *(_BYTE *)(a2 + 14523) = 1;
      v54 = v18;
      if ( (struct _KPRCB *)a2 == a1 )
        goto LABEL_11;
    }
    v54 = v20;
LABEL_11:
    KiUpdateThreadPriority(a2, v19, *(_QWORD *)(a2 + 24), 0, v20);
    _InterlockedAdd16((volatile signed __int16 *)(MmWriteableSharedUserData + 874), 1u);
    v50 = 1;
    if ( v20 )
    {
      memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
      KiStartRescheduleContext(StaticRescheduleContext, &v51, 0LL);
      KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, v5);
      v6 = 0;
      v21 = 0LL;
      v22 = (DWORD1(xmmword_140FC0C10) >> 9) & 2;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        v44 = 0;
        do
        {
          v44 |= KiCommitRescheduleContextEntry(
                   (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                         + 32 * v21
                                                         + 8 * (unsigned int)v21),
                   a1,
                   v22,
                   v5);
          v21 = (unsigned int)(v21 + 1);
        }
        while ( (unsigned int)v21 < StaticRescheduleContext->ProcessorCount );
        LOBYTE(v53) = v44;
        v10 = v52;
        v6 = v53;
      }
      if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
      {
        CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
        if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
          CoreControlBlock->ScanStartIndex = 0;
      }
    }
    else
    {
      v6 = v53;
    }
  }
  v53 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) == 0 )
  {
    v26 = &v53;
    v25 = 1;
    goto LABEL_19;
  }
  v24 = *(unsigned __int8 **)((a2 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
  v25 = *v24;
  v26 = (unsigned __int64 *)(v24 + 8);
  while ( v25 )
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)(v26[--v25] + 48), 0LL);
  if ( v6 )
  {
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      v28 = StaticRescheduleContext->ProcessorEntries[i].___u6[0];
      Prcb = StaticRescheduleContext->ProcessorEntries[i].Prcb;
      if ( (v28 & 0x10) == 0 && ((v28 & 8) == 0 || !Prcb->IdleHalt) )
        goto LABEL_34;
      TargetType = a1->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        a1->DeferredDispatchInterrupts.TargetType = 1;
        a1->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
        goto LABEL_34;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == Prcb->Number )
          goto LABEL_34;
        a1->DeferredDispatchInterrupts.TargetType = 2;
        v34 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + SingleTargetIndex);
        v26 = (unsigned __int64 *)(v34 & 0x3F);
        v35 = v34 >> 6;
        if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v35 )
        {
          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned int)v35 )
            goto LABEL_50;
          a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v35 + 1;
        }
        v36 = (unsigned int)v35;
        v37 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v35];
        _bittestandset64((__int64 *)&v37, (unsigned int)v26);
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v36] = v37;
      }
LABEL_50:
      Group = Prcb->Group;
      GroupSetMember = Prcb->GroupSetMember;
      if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned __int16)Group )
      {
        if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned __int16)Group )
          goto LABEL_34;
        a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
      }
      a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= GroupSetMember;
LABEL_34:
      if ( (StaticRescheduleContext->ProcessorEntries[i].___u6[0] & 2) != 0 )
        EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[i].NewThread, Prcb, 0LL);
      if ( (StaticRescheduleContext->ProcessorEntries[i].___u6[0] & 4) != 0 )
      {
        SchedulerAssist = (int *)Prcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( a1->SchedulerAssist )
          {
            if ( a1 != Prcb )
            {
              v40 = *SchedulerAssist;
              if ( (v40 & 0x100000) != 0
                || (v40 & 0x40000) != 0
                && (unsigned __int8)v40 < StaticRescheduleContext->ProcessorEntries[i].KickPriority )
              {
                v41 = HvlpVirtualProcessorsIdentityMapped == 0;
                v42 = a1->SchedulerAssist;
                v42[3] = 2;
                Number = Prcb->Number;
                if ( v41 )
                  LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                v42[2] = Number;
                if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL, v26);
                __writemsr(0x400000C2u, (unsigned int)Number);
              }
            }
          }
        }
      }
      if ( (StaticRescheduleContext->ProcessorEntries[i].___u6[0] & 1) != 0 )
        _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[i].NewThread->KeReferenceCount);
    }
  }
  if ( v54 )
  {
    v32 = a1->DeferredDispatchInterrupts.TargetType;
    if ( !v32 )
    {
      a1->DeferredDispatchInterrupts.TargetType = 1;
      a1->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(a2 + 36);
      goto LABEL_44;
    }
    if ( v32 == 1 )
    {
      v45 = a1->DeferredDispatchInterrupts.SingleTargetIndex;
      if ( (_DWORD)v45 == *(_DWORD *)(a2 + 36) )
        goto LABEL_44;
      a1->DeferredDispatchInterrupts.TargetType = 2;
      p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
      KeAddProcessorAffinityEx(p_MultipleTargetAffinity, v45);
    }
    else
    {
      p_MultipleTargetAffinity = &a1->DeferredDispatchInterrupts.MultipleTargetAffinity;
    }
    v47 = *(unsigned __int8 *)(a2 + 208);
    v48 = *(_QWORD *)(a2 + 200);
    if ( p_MultipleTargetAffinity->Count > (unsigned __int16)v47 )
      goto LABEL_72;
    if ( p_MultipleTargetAffinity->Size > (unsigned __int16)v47 )
    {
      p_MultipleTargetAffinity->Count = v47 + 1;
LABEL_72:
      p_MultipleTargetAffinity->Bitmap[v47] |= v48;
    }
  }
LABEL_44:
  if ( (WORD2(xmmword_140FC0C10) & 0x2000) != 0 )
  {
    if ( v50 )
    {
      v49 = v55;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v55 + 120));
      EtwTraceParkTransition(a2, 0LL, 2LL);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v49 + 120));
    }
  }
}
