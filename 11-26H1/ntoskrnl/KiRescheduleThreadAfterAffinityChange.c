/*
 * XREFs of KiRescheduleThreadAfterAffinityChange @ 0x14022CBFC
 * Callers:
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 *     KiUpdateThreadCpuSets @ 0x14045C180 (KiUpdateThreadCpuSets.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14022FB10 (KiPrepareReadyThreadForRescheduling.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140338054 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KPRCB *v5; // r14
  struct _SINGLE_LIST_ENTRY *v7; // r13
  unsigned __int64 v8; // r15
  char v9; // r12
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // rsi
  int v11; // edx
  __int64 Next_low; // rdx
  unsigned int v13; // ecx
  bool v14; // zf
  _KI_RESCHEDULE_CONTEXT_ENTRY *v15; // r8
  __int64 i; // rdx
  unsigned __int8 *v17; // rax
  unsigned __int8 AllCompareThreadStateFlags; // r10
  _KPRCB *Prcb; // rcx
  _KTHREAD *IdleThread; // rax
  unsigned int v21; // r14d
  unsigned int k; // ebx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  int v24; // ecx
  struct _SINGLE_LIST_ENTRY *v25; // rax
  volatile signed __int64 *v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  unsigned int m; // r15d
  char v30; // al
  _KPRCB *v31; // rbx
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 Group; // rcx
  int v39; // ecx
  _DWORD *SchedulerAssist; // rcx
  __int64 Number; // rbp
  unsigned int v42; // ebx
  __int64 j; // rdx
  _KI_RESCHEDULE_CONTEXT_ENTRY *v44; // rcx
  _KPRCB *v45; // rcx
  _KTHREAD *v46; // rax
  unsigned __int64 v47; // [rsp+50h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = *(struct _KPRCB **)a3;
  v7 = a4;
  v8 = a3;
  v9 = 0;
  StaticRescheduleContext = 0LL;
  v11 = a2 - 1;
  if ( !v11 )
  {
    v42 = *(char *)(a1 + 195);
    KiRemoveThreadFromAnyReadyQueue(v5);
    KiPrepareReadyThreadForRescheduling(a1, v42, v7);
    goto LABEL_22;
  }
  Next_low = (unsigned int)(v11 - 1);
  if ( (_DWORD)Next_low )
  {
    if ( (_DWORD)Next_low != 1 )
      goto LABEL_22;
    v14 = (unsigned int)KeCheckProcessorAffinityEx(*(_QWORD *)(a1 + 576), v5->Number) == 0;
  }
  else
  {
    a3 = *(_QWORD *)(a1 + 576);
    v13 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v5->Number);
    Next_low = v13 >> 6;
    if ( (unsigned int)Next_low < *(unsigned __int16 *)a3 )
    {
      Next_low = *(_QWORD *)(a3 + 8 * Next_low + 8) >> v13;
      if ( (Next_low & 1) != 0 )
        goto LABEL_22;
    }
    if ( *(_BYTE *)(a1 + 388) != 2 )
    {
      *(_BYTE *)(a1 + 112) |= 8u;
      goto LABEL_22;
    }
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
    v14 = v5->NextThread == 0LL;
  }
  if ( v14 )
  {
    StaticRescheduleContext = CurrentPrcb->StaticRescheduleContext;
    memset_0(StaticRescheduleContext, 0, sizeof(_KI_RESCHEDULE_CONTEXT));
    KiStartRescheduleContext(StaticRescheduleContext, v8 + 8, a1);
    v15 = 0LL;
    for ( i = 0LL; (unsigned int)i < StaticRescheduleContext->ProcessorCount; i = (unsigned int)(i + 1) )
    {
      v17 = &StaticRescheduleContext->ProcessorCount + 40 * i;
      if ( *((struct _KPRCB **)v17 + 2) == v5 )
      {
        v15 = (_KI_RESCHEDULE_CONTEXT_ENTRY *)(v17 + 16);
        break;
      }
    }
    v15->___u5[0] |= 2u;
    AllCompareThreadStateFlags = v15->AllCompareThreadStateFlags;
    Prcb = v15->Prcb;
    v15->CompareThread = v15->Prcb->IdleThread;
    v15->AllCompareThreadStateFlags = AllCompareThreadStateFlags & 0xC0 | 5;
    IdleThread = Prcb->IdleThread;
    *((_BYTE *)&v15->0 + 1) &= ~1u;
    v15->NewThread = IdleThread;
    if ( (AllCompareThreadStateFlags & 2) != 0 )
    {
      for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
      {
        v44 = &StaticRescheduleContext->ProcessorEntries[j];
        if ( v44 != v15 )
        {
          StaticRescheduleContext->ProcessorEntries[j].___u5[0] |= 2u;
          v45 = v44->Prcb;
          StaticRescheduleContext->ProcessorEntries[j].CompareThread = v45->IdleThread;
          StaticRescheduleContext->ProcessorEntries[j].AllCompareThreadStateFlags = StaticRescheduleContext->ProcessorEntries[j].AllCompareThreadStateFlags & 0xC0 | 5;
          v46 = v45->IdleThread;
          *((_BYTE *)&StaticRescheduleContext->ProcessorEntries[j].0 + 1) &= ~1u;
          StaticRescheduleContext->ProcessorEntries[j].NewThread = v46;
        }
      }
      if ( (AllCompareThreadStateFlags & 2) != 0 )
        StaticRescheduleContext->MaximumThreadIsolationWidth = KiIsolationWidthLogicalProcessor;
    }
    KiSearchForNewThreadsForRescheduleContext(StaticRescheduleContext, v7);
    v21 = 0;
    if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
      v21 = 2;
    for ( k = 0; k < StaticRescheduleContext->ProcessorCount; ++k )
      v9 |= KiCommitRescheduleContextEntry(
              (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries + 32 * k + 8 * k),
              CurrentPrcb,
              v21,
              v7);
    if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
    {
      CoreControlBlock = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
      if ( ++CoreControlBlock->ScanStartIndex >= CoreControlBlock->ProcessorCount )
        CoreControlBlock->ScanStartIndex = 0;
    }
  }
LABEL_22:
  if ( *(_QWORD *)v8 )
  {
    v24 = *(_DWORD *)(v8 + 8);
    a3 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    v47 = a3;
    if ( (v24 & 1) == 0 )
    {
      a4 = (struct _SINGLE_LIST_ENTRY *)&v47;
      LODWORD(Next_low) = 1;
      goto LABEL_26;
    }
    v25 = *(struct _SINGLE_LIST_ENTRY **)(a3 + 36504);
    Next_low = LOBYTE(v25->Next);
    a4 = v25 + 1;
    while ( (_DWORD)Next_low )
    {
LABEL_26:
      Next_low = (unsigned int)(Next_low - 1);
      _InterlockedAnd64((volatile signed __int64 *)&a4[(unsigned int)Next_low].Next[6], 0LL);
    }
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  v26 = *(volatile signed __int64 **)(v8 + 16);
  if ( v26 )
  {
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      v27 = (_QWORD *)(v8 + 24);
      _m_prefetchw((const void *)(v8 + 24));
      v28 = *(_QWORD *)(v8 + 24);
      if ( !v28 )
      {
        if ( v27 == (_QWORD *)_InterlockedCompareExchange64(*(volatile signed __int64 **)(v8 + 32), 0LL, v8 + 24) )
          goto LABEL_35;
        v28 = KxWaitForLockChainValid(v8 + 24);
      }
      *v27 = 0LL;
      Next_low = *(_QWORD *)(v8 + 32);
      if ( (((unsigned __int8)Next_low ^ (unsigned __int8)_InterlockedExchange64(
                                                            (volatile __int64 *)(v28 + 8),
                                                            Next_low)) & 4) != 0 )
        KeWakeAddressAll(v28 + 8, Next_low, a3, a4);
    }
    else
    {
      _InterlockedAnd64(v26, 0LL);
    }
  }
LABEL_35:
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v9 )
  {
    for ( m = 0; m < StaticRescheduleContext->ProcessorCount; ++m )
    {
      v30 = StaticRescheduleContext->ProcessorEntries[m].___u6[0];
      v31 = StaticRescheduleContext->ProcessorEntries[m].Prcb;
      if ( (v30 & 0x10) == 0 && ((v30 & 8) == 0 || !v31->IdleHalt) )
        goto LABEL_42;
      TargetType = CurrentPrcb->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
        CurrentPrcb->DeferredDispatchInterrupts.TargetType = 1;
        CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex = v31->Number;
        goto LABEL_42;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = CurrentPrcb->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == v31->Number )
          goto LABEL_42;
        CurrentPrcb->DeferredDispatchInterrupts.TargetType = 2;
        v34 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + SingleTargetIndex);
        a3 = v34 & 0x3F;
        v35 = v34 >> 6;
        if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned int)v35 )
        {
          if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned int)v35 )
            goto LABEL_55;
          CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v35 + 1;
        }
        v36 = (unsigned int)v35;
        v37 = CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v35];
        _bittestandset64((__int64 *)&v37, (unsigned int)a3);
        CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v36] = v37;
      }
LABEL_55:
      Group = v31->Group;
      Next_low = v31->GroupSetMember;
      if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count <= (unsigned __int16)Group )
      {
        if ( CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned __int16)Group )
          goto LABEL_42;
        CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = Group + 1;
      }
      CurrentPrcb->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[Group] |= Next_low;
LABEL_42:
      if ( (StaticRescheduleContext->ProcessorEntries[m].___u6[0] & 2) != 0 )
        EtwTraceScheduleThread(StaticRescheduleContext->ProcessorEntries[m].NewThread, v31, 0LL);
      if ( (StaticRescheduleContext->ProcessorEntries[m].___u6[0] & 4) != 0 )
      {
        Next_low = (unsigned int)StaticRescheduleContext->ProcessorEntries[m].KickPriority;
        if ( v31->SchedulerAssist )
        {
          if ( CurrentPrcb->SchedulerAssist )
          {
            if ( CurrentPrcb != v31 )
            {
              v39 = *(_DWORD *)v31->SchedulerAssist;
              if ( (v39 & 0x100000) != 0
                || (*(_DWORD *)v31->SchedulerAssist & 0x40000) != 0 && (unsigned __int8)v39 < (int)Next_low )
              {
                v14 = HvlpVirtualProcessorsIdentityMapped == 0;
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                SchedulerAssist[3] = 2;
                Number = v31->Number;
                if ( v14 )
                  LODWORD(Number) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * Number + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
                SchedulerAssist[2] = Number;
                if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                  EtwTraceXSchedulerPriorityKickSend(v31->Number, 2LL, a3);
                Next_low = 0LL;
                __writemsr(0x400000C2u, (unsigned int)Number);
              }
            }
          }
        }
      }
      if ( (StaticRescheduleContext->ProcessorEntries[m].___u6[0] & 1) != 0 )
        _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[m].NewThread->KeReferenceCount);
    }
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, Next_low);
  }
}
