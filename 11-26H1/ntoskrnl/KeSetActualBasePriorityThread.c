/*
 * XREFs of KeSetActualBasePriorityThread @ 0x140239560
 * Callers:
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140204B58 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     IoApplyPriorityInfoThread @ 0x140238190 (IoApplyPriorityInfoThread.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024BD00 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x140281860 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiAgingThread @ 0x1402A90D0 (MiAgingThread.c)
 *     MiThreadFaultClusterAgingThread @ 0x1402A96E0 (MiThreadFaultClusterAgingThread.c)
 *     MiInsertPageInList @ 0x1402DDC40 (MiInsertPageInList.c)
 *     SmKmStoreHelperWorker @ 0x140395A70 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140396030 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PopCreatePowerThread @ 0x1403B653C (PopCreatePowerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x1403BFAB8 (KeSetThreadSchedulerAssist.c)
 *     MiFlushAllStoreSwapPages @ 0x1403E0BBC (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x1403E0E48 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1403E0ED8 (MiStoreUpdateMemoryConditions.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403F51A0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiModifiedWriterInitialize @ 0x1404048B8 (MiModifiedWriterInitialize.c)
 *     MiModifiedPageWriter @ 0x1404064D0 (MiModifiedPageWriter.c)
 *     MiModifiedWriterDeterminePriority @ 0x1404069D8 (MiModifiedWriterDeterminePriority.c)
 *     MiSetZeroPageThreadPriority @ 0x14047D034 (MiSetZeroPageThreadPriority.c)
 *     MiMappedPageWriter @ 0x140496920 (MiMappedPageWriter.c)
 *     MiTrimmingThread @ 0x1404BDEE0 (MiTrimmingThread.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404DCA28 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 *     CmpSetPriorityThread @ 0x1404ED860 (CmpSetPriorityThread.c)
 *     PfpServiceMainThreadUnboost @ 0x1404FA8B0 (PfpServiceMainThreadUnboost.c)
 *     MiWakeAllZeroingThreads @ 0x14050DB8C (MiWakeAllZeroingThreads.c)
 *     MiModifiedPageWriterExit @ 0x140528408 (MiModifiedPageWriterExit.c)
 *     PfpServiceMainThreadBoost @ 0x1405FFE34 (PfpServiceMainThreadBoost.c)
 *     PopFxStaticWorkPoolThread @ 0x140605A50 (PopFxStaticWorkPoolThread.c)
 *     MiFileOnlyReaperWorker @ 0x1406F9D60 (MiFileOnlyReaperWorker.c)
 *     MiReapFileOnlyPfns @ 0x1406FABB0 (MiReapFileOnlyPfns.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1407A3A98 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     ExpWorkQueueManagerThread @ 0x140A039A0 (ExpWorkQueueManagerThread.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 * Callees:
 *     EtwTracePriority @ 0x140202938 (EtwTracePriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140226F90 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140237B90 (KiPriQueueThreadPriorityChanged.c)
 *     KiQueryQuantumReset @ 0x140239A30 (KiQueryQuantumReset.c)
 *     ?KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z @ 0x14023BA30 (-KiAbpQueueAutoBoostDpc@AutoBoost@@YAXPEAU_KPRCB@@@Z.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14037CA70 (KiCheckForThreadDispatch.c)
 *     KiSetPriorityThread @ 0x14037F250 (KiSetPriorityThread.c)
 *     Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline @ 0x14051F5B4 (Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(__int64 BugCheckParameter1, __int64 a2, __int64 a3)
{
  char v3; // si
  ULONG_PTR v4; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v8; // edi
  _KTHREAD *CurrentThread; // r15
  unsigned int v10; // ecx
  unsigned int v11; // r13d
  AutoBoost *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  ULONG_PTR v15; // rcx
  int v16; // eax
  char v17; // al
  char v18; // al
  char v20; // al
  int IsEnabledNoReportingNoInline; // eax
  __int64 v22; // rdx
  int v23; // ecx
  int v24; // r8d
  unsigned int v25; // r9d
  char v26; // al
  signed int v27; // eax
  int v28; // eax
  unsigned __int64 updated; // rax
  __int64 v30; // r9
  struct _KPRCB *v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v34; // rcx
  __int64 v35; // r8
  volatile signed __int32 *v36; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r9d
  bool v41; // cc
  unsigned __int32 v42; // eax
  __int64 v43; // rdx
  unsigned __int32 v44; // ett
  int v45; // ecx
  unsigned int v46; // [rsp+70h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY v47; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v4 = (int)a2;
  v46 = 0;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &unk_140FC8F40 )
    return 1LL;
  v47.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(BugCheckParameter1, a2, a3) )
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
  v10 = *(char *)(BugCheckParameter1 + 563);
  *(_BYTE *)(BugCheckParameter1 + 645) = 0;
  v11 = v10;
  v12 = (AutoBoost *)KeGetCurrentPrcb();
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    if ( (char)v4 < (char)v10 )
    {
      if ( *(_BYTE *)(BugCheckParameter1 + 793) )
      {
        v13 = (_QWORD *)(BugCheckParameter1 + 816);
        if ( *(_QWORD *)(BugCheckParameter1 + 816) == 1LL )
        {
          v14 = (_QWORD *)((char *)v12 + 37296);
          if ( v12 != (AutoBoost *)-37296LL )
          {
LABEL_17:
            *v13 = *v14;
            *v14 = v13;
            _InterlockedIncrement16((volatile signed __int16 *)(BugCheckParameter1 + 868));
            AutoBoost::KiAbpQueueAutoBoostDpc(v12, (struct _KPRCB *)v12);
          }
        }
      }
    }
  }
  else if ( (char)v4 < (char)v10 )
  {
    if ( *(_BYTE *)(BugCheckParameter1 + 793) )
    {
      v13 = (_QWORD *)(BugCheckParameter1 + 816);
      if ( *(_QWORD *)(BugCheckParameter1 + 816) == 1LL )
      {
        v14 = (_QWORD *)((char *)v12 + 37296);
        if ( v12 != (AutoBoost *)-37296LL )
          goto LABEL_17;
      }
    }
  }
  v15 = *(int *)(BugCheckParameter1 + 1028);
  *(_WORD *)(BugCheckParameter1 + 518) &= 0xF00Fu;
  *(_BYTE *)(BugCheckParameter1 + 563) = v4;
  *(_BYTE *)(BugCheckParameter1 + 870) = 0;
  if ( (int)v4 >= 16 )
  {
    v18 = *(_BYTE *)(v4 + BugCheckParameter1 + 824);
    if ( v18 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v4, 1uLL, 0LL);
    *(_BYTE *)(v4 + BugCheckParameter1 + 824) = v18 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v4;
    v16 = v4;
  }
  else
  {
    v16 = 32;
  }
  *(_DWORD *)(BugCheckParameter1 + 1028) = v16;
  if ( (_DWORD)v15 != 32 )
  {
    v17 = *(_BYTE *)(v15 + BugCheckParameter1 + 824);
    if ( !v17 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v15, 2uLL, 0LL);
    v20 = v17 - 1;
    *(_BYTE *)(v15 + BugCheckParameter1 + 824) = v20;
    if ( !v20 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v15;
  }
  IsEnabledNoReportingNoInline = Feature_StackingDecayBoosts__private_IsEnabledNoReportingNoInline(v15);
  v23 = *(char *)(BugCheckParameter1 + 563);
  v24 = v23;
  if ( IsEnabledNoReportingNoInline )
  {
    if ( v23 < 16 )
    {
      v26 = 0;
      v22 = v23 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xFu);
      if ( (int)v22 <= v23 )
        v22 = (unsigned int)v23;
      if ( *(char *)(BugCheckParameter1 + 870) > 0 )
        v26 = *(_BYTE *)(BugCheckParameter1 + 870);
      v24 = v22 + v26;
      if ( v24 >= 16 )
        v24 = 15;
      v25 = *(unsigned __int16 *)(BugCheckParameter1 + 518);
      if ( (unsigned __int8)(v25 >> 4) > v24 )
        v24 = (unsigned __int8)(v25 >> 4);
    }
    v27 = *(_DWORD *)(BugCheckParameter1 + 856);
    if ( !v27 )
      goto LABEL_47;
    _BitScanReverse((unsigned int *)&v27, v27);
    v41 = v24 < v27;
  }
  else
  {
    v40 = *(char *)(BugCheckParameter1 + 563);
    if ( v23 < 16 )
    {
      v45 = v23 + (*(_WORD *)(BugCheckParameter1 + 518) & 0xF);
      if ( v45 <= v24 )
        v45 = *(char *)(BugCheckParameter1 + 563);
      v40 = *(char *)(BugCheckParameter1 + 563) + *(char *)(BugCheckParameter1 + 870);
      if ( v40 <= v45 )
        v40 = v45;
      v22 = *(unsigned __int16 *)(BugCheckParameter1 + 518) >> 4;
      if ( (unsigned __int8)v22 > v40 )
        v40 = (unsigned __int8)v22;
      if ( v40 >= 16 && (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0 )
        v40 = 15;
    }
    v27 = *(_DWORD *)(BugCheckParameter1 + 856);
    v24 = v40;
    if ( !v27 )
      goto LABEL_47;
    _BitScanReverse((unsigned int *)&v27, v27);
    v41 = v40 < v27;
  }
  if ( v41 )
    v24 = v27;
  v46 = 0;
LABEL_47:
  v28 = *(char *)(BugCheckParameter1 + 195);
  v46 = v24;
  if ( v24 != v28 )
  {
    if ( (_KTHREAD *)BugCheckParameter1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      v32 = *(_QWORD *)(BugCheckParameter1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, BugCheckParameter1, 0LL);
      v31 = KeGetCurrentPrcb();
      v32 = updated;
      SchedulerAssist = (unsigned __int32 *)v31->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v42 = *SchedulerAssist;
        do
        {
          v43 = v42;
          LODWORD(v43) = v42 & 0xFFDFFFFF;
          v44 = v42;
          v42 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v42 & 0xFFDFFFFF, v42);
        }
        while ( v44 != v42 );
        if ( (v42 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v31, v43, SchedulerAssist, v30);
      }
      _enable();
    }
    v34 = v32 + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 5u);
    v35 = v46;
    *(_QWORD *)(BugCheckParameter1 + 32) = v34;
    KiSetPriorityThread(BugCheckParameter1, &v47, v35);
  }
  v36 = *(volatile signed __int32 **)(BugCheckParameter1 + 232);
  if ( v36 && (*(_BYTE *)v36 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v36, BugCheckParameter1);
  else
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  Next = v47.Next;
  if ( v47.Next )
  {
    v47.Next = v47.Next->Next;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v47, 0LL);
      Next = v47.Next;
      ++v3;
      if ( v47.Next )
        v47.Next = v47.Next->Next;
      if ( (v3 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v22);
    }
    while ( Next );
  }
  KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts, v22);
  KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql, v38, v39);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(BugCheckParameter1, 0x531u, v11, v4, &v46);
  return v11;
}
