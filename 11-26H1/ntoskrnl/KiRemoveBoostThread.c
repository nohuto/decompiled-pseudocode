/*
 * XREFs of KiRemoveBoostThread @ 0x140273850
 * Callers:
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExpUpdateTimerConfiguration @ 0x14037BB10 (ExpUpdateTimerConfiguration.c)
 *     KeGenericProcessorCallback @ 0x14037BD24 (KeGenericProcessorCallback.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KiCompleteDirectSwitchThread @ 0x14042C2A8 (KiCompleteDirectSwitchThread.c)
 * Callees:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x14022E570 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiDeferredReadySingleThread @ 0x140233180 (KiDeferredReadySingleThread.c)
 *     ?KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x140240AA0 (-KiCommitRescheduleContextEntry@@YAEPEAU_KI_RESCHEDULE_CONTEXT_ENTRY@@PEAU_KPRCB@@KPEAU_SINGLE_L.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140245030 (KiFlushSoftwareInterruptBatch.c)
 *     EtwTraceScheduleThread @ 0x140248130 (EtwTraceScheduleThread.c)
 *     KeWakeAddressAll @ 0x140304EB0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140331520 (KiAcquireMultiplePrcbLocks.c)
 *     KiStartRescheduleContext @ 0x140331610 (KiStartRescheduleContext.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     ?KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z @ 0x140521BAC (-KiComputeThreadPriorityStacking@@YAJPEAU_KTHREAD@@KC@Z.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x140521C58 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140529DB4 (EtwTraceXSchedulerPriorityKickSend.c)
 *     ?KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z @ 0x1405332E4 (-KiComputeThreadPriorityNonStacking@@YAJPEAU_KTHREAD@@K@Z.c)
 */

__int64 __fastcall KiRemoveBoostThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int64 v4; // r14
  struct _KPRCB *v5; // r13
  int v6; // edi
  int v7; // eax
  int v8; // r15d
  int v10; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rcx
  char v14; // bl
  int v15; // edx
  struct _KPRCB *v16; // r13
  char v17; // r12
  char v18; // r15
  int v19; // r9d
  int v20; // esi
  _KI_RESCHEDULE_CONTEXT *StaticRescheduleContext; // r14
  struct _KPRCB *v22; // rdi
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // r8d
  __int16 v26; // ax
  int IsEnabledNoReportingNoInline; // eax
  int v28; // ecx
  unsigned int v29; // r8d
  char v30; // al
  int v31; // edx
  signed int v32; // eax
  int v33; // r8d
  bool v34; // cc
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  _WORD *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r9
  unsigned int i; // edx
  __int64 j; // rdi
  _KCORE_CONTROL_BLOCK *v45; // rcx
  _BYTE *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 *v48; // r8
  unsigned int v49; // edi
  unsigned __int8 v50; // al
  __int64 Prcb; // rsi
  unsigned __int8 v52; // al
  unsigned __int8 TargetType; // al
  unsigned int SingleTargetIndex; // eax
  unsigned int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  unsigned int v61; // eax
  unsigned int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  int v66; // edx
  bool v67; // zf
  _DWORD *SchedulerAssist; // rcx
  __int64 v69; // r15
  int v70; // ecx
  _DWORD *v71; // rcx
  __int64 Number; // rbx
  char v73; // cl
  unsigned int v74; // edx
  int v75; // ecx
  struct _KPRCB *v76; // [rsp+30h] [rbp-39h]
  struct _SINGLE_LIST_ENTRY v77; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v78; // [rsp+40h] [rbp-29h] BYREF
  struct _KPRCB *v79; // [rsp+48h] [rbp-21h]
  struct _KPRCB *v80; // [rsp+50h] [rbp-19h]
  _QWORD v81[2]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v82; // [rsp+68h] [rbp-1h]
  int v85; // [rsp+E0h] [rbp+77h]
  int v86; // [rsp+E8h] [rbp+7Fh]

  v3 = 0;
  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( !*(_WORD *)(a2 + 518) )
  {
    v7 = 0;
    v8 = *(char *)(a2 + 195) + 1;
    goto LABEL_3;
  }
  v23 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 64), 0LL) )
  {
    do
    {
      if ( (++v23 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v23);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v4 + 64) );
  }
  if ( (unsigned int)Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(a1) )
    v24 = KiComputeThreadPriorityStacking((struct _KTHREAD *)v4, 1u, 0);
  else
    v24 = KiComputeThreadPriorityNonStacking((struct _KTHREAD *)v4, 1u);
  v25 = v24;
  v26 = *(_WORD *)(v4 + 518);
  v8 = v25 + 1;
  if ( (v26 & 0xFF0) != 0 )
    v8 = v25;
  *(_WORD *)(v4 + 518) = v26 & 0xF00F;
  IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(61455LL);
  v28 = *(char *)(v4 + 563);
  v6 = v28;
  if ( IsEnabledNoReportingNoInline )
  {
    if ( v28 < 16 )
    {
      v30 = 0;
      v31 = v28 + (*(_WORD *)(v4 + 518) & 0xF);
      if ( v31 <= v28 )
        v31 = *(char *)(v4 + 563);
      if ( *(char *)(v4 + 870) > 0 )
        v30 = *(_BYTE *)(v4 + 870);
      v6 = v31 + v30;
      if ( v6 >= 16 )
        v6 = 15;
      v29 = *(unsigned __int16 *)(v4 + 518);
      if ( (unsigned __int8)(v29 >> 4) > v6 )
        v6 = (unsigned __int8)(v29 >> 4);
    }
    v32 = *(_DWORD *)(v4 + 856);
    if ( !v32 )
      goto LABEL_33;
    _BitScanReverse((unsigned int *)&v32, v32);
    v34 = v6 < v32;
  }
  else
  {
    v33 = *(char *)(v4 + 563);
    if ( v28 < 16 )
    {
      v75 = v28 + (*(_WORD *)(v4 + 518) & 0xF);
      if ( v75 <= v6 )
        v75 = *(char *)(v4 + 563);
      v33 = *(char *)(v4 + 563) + *(char *)(v4 + 870);
      if ( v33 <= v75 )
        v33 = v75;
      v74 = *(unsigned __int16 *)(v4 + 518);
      if ( (unsigned __int8)(v74 >> 4) > v33 )
        v33 = (unsigned __int8)(v74 >> 4);
      if ( v33 >= 16 && (*(_DWORD *)(v4 + 120) & 0x400000) == 0 )
        v33 = 15;
    }
    v32 = *(_DWORD *)(v4 + 856);
    v6 = v33;
    if ( !v32 )
      goto LABEL_33;
    _BitScanReverse((unsigned int *)&v32, v32);
    v34 = v33 < v32;
  }
  if ( v34 )
    v6 = v32;
LABEL_33:
  v7 = 1;
LABEL_3:
  if ( v8 >= 16 )
    v8 = 15;
  v86 = v8;
  if ( !v7 )
    return (unsigned int)v8;
  v10 = *(char *)(v4 + 195);
  Next = 0LL;
  v77.Next = 0LL;
  if ( v6 == v10 )
    goto LABEL_84;
  v81[0] = 0LL;
  v82 = 0LL;
  CurrentPrcb = v5;
  v76 = v5;
  if ( !v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v76 = CurrentPrcb;
  }
  CoreControlBlock = CurrentPrcb->CoreControlBlock;
  v14 = (unsigned __int8)CurrentPrcb | 1;
  v80 = CurrentPrcb;
  v81[1] = 0LL;
  v81[0] = (unsigned __int64)CurrentPrcb | 1;
  KiAcquireMultiplePrcbLocks(CoreControlBlock->Prcbs, CoreControlBlock->ProcessorCount);
  v16 = KeGetCurrentPrcb();
  v17 = 0;
  v18 = 0;
  v19 = v6;
  v85 = 0;
  v20 = *(char *)(v4 + 195);
  StaticRescheduleContext = 0LL;
  v79 = v16;
  if ( v76->NextThread )
  {
    v22 = v76;
    KiUpdateThreadPriority((_DWORD)v76, v15, a2, v19, 0);
LABEL_42:
    v35 = a2;
    goto LABEL_43;
  }
  KiUpdateThreadPriority((_DWORD)v76, v15, a2, v6, 1);
  if ( v6 >= v20 )
  {
    if ( v6 > v20 && *(_BYTE *)(a2 + 388) == 2 )
      v85 = v6;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(a2 + 388) == 2 )
  {
    v18 = 1;
LABEL_41:
    v22 = v76;
    goto LABEL_42;
  }
  v35 = a2;
  v73 = v6 + 1;
  v22 = v76;
  if ( (v76->SharedReadyQueue->ReadySummary | v76->ReadySummary) >> v73 )
    *(_BYTE *)(a2 + 112) |= 0x10u;
LABEL_43:
  v3 = 0;
  v36 = 0;
  v37 = KiProcessorBlock[*(unsigned int *)(v35 + 588)];
  v38 = *(_QWORD *)(v37 + 36480);
  if ( v38 )
  {
    v39 = *(unsigned __int8 *)(v37 + 208);
    v40 = *(_WORD **)(v35 + 576);
    if ( (unsigned __int16)v39 >= *v40 )
      v41 = 0LL;
    else
      v41 = *(_QWORD *)&v40[4 * v39 + 4];
    LOBYTE(v36) = (v38 & v41) == v38;
  }
  if ( v36 != ((*(_DWORD *)(a2 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  if ( v18 )
  {
    StaticRescheduleContext = v16->StaticRescheduleContext;
    KiStartRescheduleContext(StaticRescheduleContext, v81, 0LL);
    v42 = 0LL;
    for ( i = 0; i < StaticRescheduleContext->ProcessorCount; ++i )
    {
      if ( StaticRescheduleContext->ProcessorEntries[i].Prcb == v22 )
      {
        v42 = (__int64)&StaticRescheduleContext->ProcessorEntries[i];
        break;
      }
    }
    *(_BYTE *)(v42 + 34) |= 2u;
    KiSearchForNewThreadsForRescheduleContext(&StaticRescheduleContext->ProcessorCount, &v77);
    if ( (WORD2(xmmword_140FC0C10) & 0x400) != 0 )
      v3 = 2;
    for ( j = 0LL; (unsigned int)j < StaticRescheduleContext->ProcessorCount; j = (unsigned int)(j + 1) )
      v17 |= KiCommitRescheduleContextEntry(
               (struct _KI_RESCHEDULE_CONTEXT_ENTRY *)((char *)StaticRescheduleContext->ProcessorEntries
                                                     + 32 * j
                                                     + 8 * (unsigned int)j),
               v16,
               v3,
               &v77);
    if ( StaticRescheduleContext->IsolationWidth == KiIsolationWidthCore )
    {
      v45 = StaticRescheduleContext->ProcessorEntries[0].Prcb->CoreControlBlock;
      if ( ++v45->ScanStartIndex >= v45->ProcessorCount )
        v45->ScanStartIndex = 0;
    }
    v22 = v76;
    v3 = 0;
  }
  v78 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v14 & 1) == 0 )
  {
    v48 = &v78;
    LODWORD(v47) = 1;
    do
    {
LABEL_64:
      v47 = (unsigned int)(v47 - 1);
      _InterlockedAnd64((volatile signed __int64 *)(v48[v47] + 48), 0LL);
    }
    while ( (_DWORD)v47 );
    goto LABEL_65;
  }
  v46 = *(_BYTE **)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFEuLL) + 36504);
  LODWORD(v47) = (unsigned __int8)*v46;
  v48 = (unsigned __int64 *)(v46 + 8);
  if ( *v46 )
    goto LABEL_64;
LABEL_65:
  v81[0] = 0LL;
  if ( !v17 )
    goto LABEL_81;
  v49 = 0;
  if ( !StaticRescheduleContext->ProcessorCount )
    goto LABEL_80;
  do
  {
    v50 = StaticRescheduleContext->ProcessorEntries[v49].___u6[0];
    Prcb = (__int64)StaticRescheduleContext->ProcessorEntries[v49].Prcb;
    if ( (v50 & 0x10) != 0 )
    {
      TargetType = v16->DeferredDispatchInterrupts.TargetType;
      if ( !TargetType )
      {
LABEL_71:
        v16->DeferredDispatchInterrupts.TargetType = 1;
        v16->DeferredDispatchInterrupts.SingleTargetIndex = *(_DWORD *)(Prcb + 36);
        goto LABEL_72;
      }
      if ( TargetType == 1 )
      {
        SingleTargetIndex = v16->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( SingleTargetIndex == *(_DWORD *)(Prcb + 36) )
          goto LABEL_72;
        v16->DeferredDispatchInterrupts.TargetType = 2;
        v55 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + SingleTargetIndex);
        v48 = (unsigned __int64 *)(v55 & 0x3F);
        v56 = v55 >> 6;
        if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v56 )
          goto LABEL_96;
        if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v56 )
        {
          v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v56 + 1;
LABEL_96:
          v57 = v56;
          v58 = v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v56];
          _bittestandset64((__int64 *)&v58, (unsigned int)v48);
          v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v57] = v58;
        }
      }
      v59 = *(unsigned __int8 *)(Prcb + 208);
      v60 = *(_QWORD *)(Prcb + 200);
      if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v59 )
      {
LABEL_105:
        v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v59] |= v60;
        goto LABEL_72;
      }
LABEL_98:
      if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Size <= (unsigned __int16)v59 )
        goto LABEL_72;
      v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v59 + 1;
      goto LABEL_105;
    }
    if ( (v50 & 8) != 0 && *(_BYTE *)(Prcb + 7) )
    {
      v52 = v16->DeferredDispatchInterrupts.TargetType;
      if ( !v52 )
        goto LABEL_71;
      if ( v52 == 1 )
      {
        v61 = v16->DeferredDispatchInterrupts.SingleTargetIndex;
        if ( v61 == *(_DWORD *)(Prcb + 36) )
          goto LABEL_72;
        v16->DeferredDispatchInterrupts.TargetType = 2;
        v62 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v61);
        v48 = (unsigned __int64 *)(v62 & 0x3F);
        v63 = v62 >> 6;
        if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned int)v63 )
          goto LABEL_103;
        if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Size > (unsigned int)v63 )
        {
          v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count = v63 + 1;
LABEL_103:
          v64 = v63;
          v65 = v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v63];
          _bittestandset64((__int64 *)&v65, (unsigned int)v48);
          v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Bitmap[v64] = v65;
        }
      }
      v59 = *(unsigned __int8 *)(Prcb + 208);
      v60 = *(_QWORD *)(Prcb + 200);
      if ( v16->DeferredDispatchInterrupts.MultipleTargetAffinity.Count > (unsigned __int16)v59 )
        goto LABEL_105;
      goto LABEL_98;
    }
LABEL_72:
    if ( (StaticRescheduleContext->ProcessorEntries[v49].___u6[0] & 2) != 0 )
      EtwTraceScheduleThread((__int64)StaticRescheduleContext->ProcessorEntries[v49].NewThread, Prcb, 0LL);
    if ( (StaticRescheduleContext->ProcessorEntries[v49].___u6[0] & 4) != 0 )
    {
      if ( *(_QWORD *)(Prcb + 36600) )
      {
        if ( v16->SchedulerAssist )
        {
          if ( v16 != (struct _KPRCB *)Prcb )
          {
            v66 = **(_DWORD **)(Prcb + 36600);
            if ( (v66 & 0x100000) != 0
              || (**(_DWORD **)(Prcb + 36600) & 0x40000) != 0
              && (unsigned __int8)v66 < StaticRescheduleContext->ProcessorEntries[v49].KickPriority )
            {
              v67 = HvlpVirtualProcessorsIdentityMapped == 0;
              SchedulerAssist = v16->SchedulerAssist;
              SchedulerAssist[3] = 2;
              v69 = *(unsigned int *)(Prcb + 36);
              if ( v67 )
              {
                v16 = v79;
                LODWORD(v69) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)v69] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v69] << 6);
              }
              SchedulerAssist[2] = v69;
              if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
                EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(Prcb + 36), 2LL, v48);
              __writemsr(0x400000C2u, (unsigned int)v69);
            }
          }
        }
      }
    }
    if ( (StaticRescheduleContext->ProcessorEntries[v49].___u6[0] & 1) != 0 )
      _InterlockedDecrement16(&StaticRescheduleContext->ProcessorEntries[v49].NewThread->KeReferenceCount);
    ++v49;
  }
  while ( v49 < StaticRescheduleContext->ProcessorCount );
  v3 = 0;
LABEL_80:
  KiFlushSoftwareInterruptBatch((char *)&v16->DeferredDispatchInterrupts);
  v22 = v76;
LABEL_81:
  if ( v85 > 0 )
  {
    if ( v22->SchedulerAssist )
    {
      if ( v16->SchedulerAssist )
      {
        if ( v16 != v22 )
        {
          v70 = *(_DWORD *)v22->SchedulerAssist;
          if ( (v70 & 0x100000) != 0 || (*(_DWORD *)v22->SchedulerAssist & 0x40000) != 0 && (unsigned __int8)v70 < v85 )
          {
            v67 = HvlpVirtualProcessorsIdentityMapped == 0;
            v71 = v16->SchedulerAssist;
            v71[3] = 2;
            Number = v22->Number;
            if ( v67 )
              LODWORD(Number) = (unsigned __int8)byte_140FC71C1[2 * (unsigned int)Number] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * Number] << 6);
            v71[2] = Number;
            if ( (BYTE4(xmmword_140FC0C10) & 0x20) != 0 )
              EtwTraceXSchedulerPriorityKickSend(v22->Number, 2LL, v48);
            __writemsr(0x400000C2u, (unsigned int)Number);
          }
        }
      }
    }
  }
  v5 = a1;
  v8 = v86;
  v4 = a2;
  Next = v77.Next;
LABEL_84:
  *(_QWORD *)(v4 + 64) = 0LL;
  if ( Next )
  {
    v77.Next = Next->Next;
    do
    {
      KiDeferredReadySingleThread(v5, (ULONG_PTR)&Next[-27], &v77, 0LL);
      Next = v77.Next;
      ++v3;
      if ( v77.Next )
        v77.Next = v77.Next->Next;
      if ( (v3 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&v5->DeferredDispatchInterrupts);
    }
    while ( Next );
    KiFlushSoftwareInterruptBatch((char *)&v5->DeferredDispatchInterrupts);
  }
  return (unsigned int)v8;
}
