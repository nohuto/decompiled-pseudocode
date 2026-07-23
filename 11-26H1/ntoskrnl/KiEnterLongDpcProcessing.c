/*
 * XREFs of KiEnterLongDpcProcessing @ 0x140230404
 * Callers:
 *     KiExecuteAllDpcs @ 0x14032FD30 (KiExecuteAllDpcs.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiScheduleThreadToRescheduleContext @ 0x14022FC30 (KiScheduleThreadToRescheduleContext.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402309E0 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140230FF0 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x1406C8814 (EtwTraceLongDpcMitigationEvent.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

bool __fastcall KiEnterLongDpcProcessing(struct _KPRCB *a1, _KTHREAD *a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  _KTHREAD *v5; // r13
  unsigned int v7; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 *v10; // r8
  unsigned __int64 v11; // r9
  _KPRCBFLAG v12; // eax
  _KTHREAD *DpcDelegateThread; // rax
  _KTHREAD *v14; // rax
  _KTHREAD *NextThread; // rcx
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r15
  int v17; // eax
  int v18; // r12d
  unsigned int v19; // edi
  __int64 v20; // rbx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  char v22; // al
  unsigned __int8 *v23; // rax
  unsigned __int64 GroupSetMember; // rdx
  __int64 v25; // rdi
  unsigned __int8 TargetType; // al
  unsigned int ProcessorCount; // eax
  unsigned int v28; // r12d
  _BYTE *v29; // rax
  __int64 v30; // rdx
  __int64 v32; // r13
  char v33; // al
  _KPRCB *Prcb; // r14
  unsigned int SingleTargetIndex; // eax
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 Group; // rcx
  void **p_SchedulerAssist; // rcx
  void **v42; // r8
  bool v43; // zf
  _DWORD *v44; // rdx
  __int64 Number; // r12
  unsigned int v46; // r11d
  unsigned __int32 v47; // eax
  __int64 v48; // rdx
  unsigned __int32 v49; // ett
  struct _SINGLE_LIST_ENTRY v50; // [rsp+30h] [rbp-28h] BYREF
  __int64 v51; // [rsp+38h] [rbp-20h]
  _KTHREAD *v52; // [rsp+40h] [rbp-18h]
  char Priority; // [rsp+A0h] [rbp+48h]
  unsigned __int64 v54; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v56; // [rsp+B8h] [rbp+60h]

  v54 = (unsigned __int64)a2;
  v4 = 0;
  v5 = a2;
  v50.Next = 0LL;
  v7 = 0;
  v55 = 0LL;
  Priority = 0;
  if ( a2 == a1->DpcDelegateThread )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v47 = *SchedulerAssist;
    do
    {
      v48 = v47;
      LODWORD(v48) = v47 & 0xFFDFFFFF;
      v49 = v47;
      v47 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v47 & 0xFFDFFFFF, v47);
    }
    while ( v49 != v47 );
    if ( (v47 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v48, SchedulerAssist, a4);
  }
  _enable();
  KiAcquirePrcbLocksForPreemptionAttempt(a1, 0LL, &v55);
  v12.PrcbFlags = (volatile int)a1->PrcbFlags;
  if ( (v12.PrcbFlags & 0x800) == 0 )
    a1->PrcbFlagsReserved = v12.PrcbFlags | 0x800;
  if ( v5 != a1->IdleThread )
  {
    DpcDelegateThread = a1->DpcDelegateThread;
    if ( DpcDelegateThread )
    {
      if ( v5 != DpcDelegateThread
        && v5->Priority >= 16
        && (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, v5->Affinity) )
      {
        v7 = v46;
      }
    }
  }
  v14 = a1->DpcDelegateThread;
  NextThread = a1->NextThread;
  v52 = NextThread;
  if ( !v14 || NextThread == v14 )
  {
    v25 = v55;
  }
  else
  {
    if ( NextThread )
      Priority = NextThread->Priority;
    StaticRescheduleContext = a1->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext(StaticRescheduleContext, &v55, 0LL);
    v17 = KiScheduleThreadToRescheduleContext(
            &StaticRescheduleContext->ProcessorCount,
            (__int64)a1->DpcDelegateThread,
            (__int64)a1,
            0,
            &v50) & 1;
    v18 = v7 | (4 * v17);
    if ( v17 )
      KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v50);
    v19 = 0;
    if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
      v19 = 2;
    v20 = 0LL;
    if ( StaticRescheduleContext->ProcessorCount )
    {
      do
      {
        v4 |= KiCommitRescheduleContextEntry(
                (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                      + 32 * v20
                                                      + 8 * (unsigned int)v20),
                a1,
                v19,
                &v50);
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < StaticRescheduleContext->ProcessorCount );
      v5 = (_KTHREAD *)v54;
    }
    if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
    {
      CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
      if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
        CoreControlBlock->ScanStartIndex = 0;
    }
    v22 = v55;
    v11 = v55 & 0xFFFFFFFFFFFFFFFEuLL;
    v55 &= ~1uLL;
    v7 = v18 | (8 * (v4 & 1)) | 1;
    v56 = v7;
    if ( (v22 & 1) == 0 )
    {
      v10 = (unsigned __int64 *)&v55;
      LODWORD(GroupSetMember) = 1;
      goto LABEL_24;
    }
    v23 = *(unsigned __int8 **)(v11 + 36504);
    GroupSetMember = *v23;
    v10 = (unsigned __int64 *)(v23 + 8);
    while ( (_DWORD)GroupSetMember )
    {
LABEL_24:
      GroupSetMember = (unsigned int)(GroupSetMember - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v10[(unsigned int)GroupSetMember] + 48), 0LL);
    }
    v51 = 0LL;
    v25 = 0LL;
    if ( v7 >= 8 )
    {
      v28 = 0;
      LODWORD(v55) = 0;
      if ( StaticRescheduleContext->ProcessorCount )
      {
        while ( 1 )
        {
          v32 = v28;
          v33 = StaticRescheduleContext->ProcessorEntries[v28].___u6[0];
          Prcb = StaticRescheduleContext->ProcessorEntries[v28].Prcb;
          if ( (v33 & 0x10) == 0 && ((v33 & 8) == 0 || !Prcb->IdleHalt) )
            goto LABEL_28;
          TargetType = a1->DeferredDispatchInterrupts.TargetType;
          if ( !TargetType )
          {
            a1->DeferredDispatchInterrupts.TargetType = 1;
            a1->DeferredDispatchInterrupts.SingleTargetIndex = Prcb->Number;
            goto LABEL_28;
          }
          if ( TargetType == 1 )
          {
            SingleTargetIndex = a1->DeferredDispatchInterrupts.SingleTargetIndex;
            if ( SingleTargetIndex == Prcb->Number )
              goto LABEL_28;
            a1->DeferredDispatchInterrupts.TargetType = 2;
            v36 = *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) & 0x3F;
            v37 = (unsigned int)*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + SingleTargetIndex) >> 6;
            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v37 )
            {
              if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned int)v37 )
                goto LABEL_55;
              a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v37 + 1;
            }
            v38 = (unsigned int)v37;
            v39 = a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v37];
            _bittestandset64((__int64 *)&v39, v36);
            a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v38] = v39;
          }
LABEL_55:
          Group = Prcb->Group;
          GroupSetMember = Prcb->GroupSetMember;
          if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned __int16)Group )
          {
            if ( a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned __int16)Group )
              goto LABEL_28;
            a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
          }
          a1->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= GroupSetMember;
LABEL_28:
          if ( (StaticRescheduleContext->ProcessorEntries[v28].___u6[0] & 2) != 0 )
            EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[v28].NewThread, Prcb, 0LL);
          if ( (StaticRescheduleContext->ProcessorEntries[v28].___u6[0] & 4) != 0 )
          {
            if ( Prcb->SchedulerAssist )
            {
              p_SchedulerAssist = &a1->SchedulerAssist;
              if ( a1->SchedulerAssist )
              {
                if ( a1 != Prcb )
                {
                  v42 = &a1->SchedulerAssist;
                  GroupSetMember = *(unsigned int *)Prcb->SchedulerAssist;
                  if ( (*(_DWORD *)Prcb->SchedulerAssist & 0x40000) != 0 )
                    v42 = &a1->SchedulerAssist;
                  if ( (GroupSetMember & 0x100000) != 0
                    || (*(_DWORD *)Prcb->SchedulerAssist & 0x40000) != 0
                    && (p_SchedulerAssist = v42,
                        (unsigned __int8)GroupSetMember < StaticRescheduleContext->ProcessorEntries[v28].KickPriority) )
                  {
                    v43 = HvlpVirtualProcessorsIdentityMapped == 0;
                    v44 = *p_SchedulerAssist;
                    *((_DWORD *)*p_SchedulerAssist + 3) = 2;
                    Number = Prcb->Number;
                    if ( v43 )
                      LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                    v44[2] = Number;
                    if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                      EtwTraceXSchedulerPriorityKickSend(Prcb->Number, 2LL, v42);
                    GroupSetMember = 0LL;
                    __writemsr(0x400000C2u, (unsigned int)Number);
                    v28 = v55;
                  }
                }
              }
            }
          }
          if ( (StaticRescheduleContext->ProcessorEntries[v32].___u6[0] & 1) != 0 )
            _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v32].NewThread->KeReferenceCount);
          ProcessorCount = StaticRescheduleContext->ProcessorCount;
          LODWORD(v55) = ++v28;
          if ( v28 >= ProcessorCount )
          {
            LOBYTE(v7) = v56;
            v25 = v51;
            v5 = (_KTHREAD *)v54;
            break;
          }
        }
      }
      KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts, GroupSetMember);
    }
    if ( !v50.Next )
      goto LABEL_43;
    KiReadyDeferredReadyList(a1, &v50);
  }
  if ( v25 )
  {
    v54 = v25 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v25 & 1) == 0 )
    {
      v10 = &v54;
      LODWORD(v30) = 1;
      do
      {
LABEL_42:
        v30 = (unsigned int)(v30 - 1);
        _InterlockedAnd64((volatile signed __int64 *)(v10[v30] + 48), 0LL);
      }
      while ( (_DWORD)v30 );
      goto LABEL_43;
    }
    v29 = *(_BYTE **)((v25 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
    LODWORD(v30) = (unsigned __int8)*v29;
    v10 = (unsigned __int64 *)(v29 + 8);
    if ( *v29 )
      goto LABEL_42;
  }
LABEL_43:
  _disable();
  if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 && (v7 & 3) != 0 )
  {
    LOBYTE(v11) = Priority;
    LOBYTE(v10) = v5->Priority;
    EtwTraceLongDpcMitigationEvent((_DWORD)v5, (_DWORD)v52, (_DWORD)v10, v11, v7 & 1, (v7 & 2) != 0);
  }
  return (v7 & 2) != 0;
}
