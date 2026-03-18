/*
 * XREFs of ExReleaseFastMutexUnsafe @ 0x140276140
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403FB800 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403FB980 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140487690 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     KeReleaseGuardedMutexUnsafe @ 0x1404D6F30 (KeReleaseGuardedMutexUnsafe.c)
 *     FsRtlpWaitOnIrp @ 0x1404EC254 (FsRtlpWaitOnIrp.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1405B5F20 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405B60A0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B6114 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B75A0 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExReleaseFastMutexUnsafeWrapper @ 0x140653E40 (DifExReleaseFastMutexUnsafeWrapper.c)
 *     DifKeReleaseGuardedMutexUnsafeWrapper @ 0x140662AF0 (DifKeReleaseGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x14078E550 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14078EBEC (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14078ED3C (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140790910 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1407BA4E0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140815140 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1408151E0 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140815290 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140815350 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x140815820 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x14083BEC0 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14083C5DC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14083CB1C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14083D0F0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14083D290 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x14083D430 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14083D8B0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x14083DA50 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x14083DB70 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x14083DD80 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x14083DE30 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14083E0F0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14083E2B0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14083E500 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14083E6B0 (NtSetSystemEnvironmentValue.c)
 *     CmObliterateRMTxArray @ 0x14085BBD0 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     CmSnapshotRMTxArray @ 0x1408ACD84 (CmSnapshotRMTxArray.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1408ADB44 (CmpLogCheckpoint.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x1408AE404 (CmpIsCmRm.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1408AE814 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1408AE99C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1408AEDA8 (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpRunDownCmRM @ 0x1408AF194 (CmpRunDownCmRM.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x1408D0928 (CmpNotifyTriggerCheck.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408ED0C4 (CmpTransSearchAddLightWeightTrans.c)
 *     NtQueryBootOptions @ 0x140906480 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140907D64 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A85310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x140A85640 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A860F0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     NtEnumerateBootEntries @ 0x140A94460 (NtEnumerateBootEntries.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140AB6BF0 (FsRtlOplockBreakH2.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140AE0EFC (UNLOCK_TRANSACTION_LIST.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 *     CmRmFinalizeRecovery @ 0x140B3A6E8 (CmRmFinalizeRecovery.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140B3D1C0 (FsRtlCheckOplockForFsFilterCallback.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140246C20 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x14026A2B4 (KeAbPreWakeupThread.c)
 *     ?KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z @ 0x140272090 (-KiAbPostRelease@LegacyAutoBoost@@YAXPEAX@Z.c)
 *     KiTryUnwaitThread @ 0x1402735B4 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027AAF0 (-KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z.c)
 *     ?KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x14027C800 (-KiAbpUnboostThread@AutoBoost@@YAXPEAU_KTHREAD@@PEAXT_AB_BOOST_BITMAP@1@PEAU_SINGLE_LIST_ENTRY@@.c)
 *     KiSignalThread @ 0x14027C940 (KiSignalThread.c)
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiWaitSatisfyMutant @ 0x1404419C0 (KiWaitSatisfyMutant.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14052FA20 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  void *v1; // rdx
  __int64 v2; // rdi
  PFAST_MUTEX v3; // r12
  int v4; // r15d
  signed __int32 v5; // eax
  int v6; // ecx
  signed __int32 v7; // ett
  _KEVENT *p_Event; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r13
  void *v11; // r8
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *Flink; // r15
  struct _LIST_ENTRY *v14; // rax
  __int64 v15; // rsi
  struct _LIST_ENTRY *v16; // rcx
  char v17; // al
  char v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rbp
  unsigned __int8 v22; // r14
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v24; // rdx
  __int64 *AutoBoostThreadState; // rax
  __int64 v26; // r9
  unsigned int v27; // r11d
  __int64 *v28; // rsi
  char v29; // al
  __int64 v30; // rcx
  char v31; // r8
  struct _KPRCB *v32; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  signed __int8 v34; // al
  signed __int8 v35; // tt
  signed __int8 v36; // al
  signed __int8 v37; // tt
  char v38; // dl
  __int64 v39; // rbx
  struct _KPRCB *v40; // rcx
  unsigned __int32 *v41; // r8
  _BYTE *v42; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned __int32 v44; // eax
  unsigned __int32 v45; // ett
  unsigned __int32 v46; // eax
  __int64 v47; // rdx
  unsigned __int32 v48; // ett
  char Priority; // [rsp+88h] [rbp+10h]
  int v51; // [rsp+90h] [rbp+18h] BYREF
  __int64 v52; // [rsp+98h] [rbp+20h]

  v2 = 0LL;
  v3 = FastMutex;
  FastMutex->Owner = 0LL;
  v4 = 1;
  v5 = _InterlockedCompareExchange(&FastMutex->Count, 1, 0);
  if ( v5 )
  {
    do
    {
      v6 = -1;
      v1 = (void *)(v5 & 2);
      if ( (v5 & 2) != 0 )
        v6 = 1;
      v7 = v5;
      v5 = _InterlockedCompareExchange(&v3->Count, v5 + v6, v5);
    }
    while ( v7 != v5 );
    if ( !(_DWORD)v1 )
    {
      p_Event = &v3->Event;
      Priority = KeGetCurrentThread()->Priority;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      CurrentPrcb = KeGetCurrentPrcb();
      KiAcquireKobjectLockSafe(&v3->Event);
      p_WaitListHead = &v3->Event.Header.WaitListHead;
      v3->Event.Header.SignalState = 1;
      Flink = v3->Event.Header.WaitListHead.Flink;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( Flink == p_WaitListHead )
          {
LABEL_20:
            _InterlockedAnd(&p_Event->Header.Lock, 0xFFFFFF7F);
            v3 = FastMutex;
            if ( Priority )
            {
              Next = CurrentPrcb->DeferredReadyListHead.Next;
              if ( Next )
                KeAbPreWakeupThread((AutoBoost *)&Next[-27], (struct _KTHREAD *)FastMutex, v11);
            }
            v4 = 1;
            KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
            goto LABEL_22;
          }
          v14 = Flink->Flink;
          v15 = (__int64)Flink;
          Flink = v14;
          v16 = *(struct _LIST_ENTRY **)(v15 + 8);
          if ( v14->Blink != (struct _LIST_ENTRY *)v15 || v16->Flink != (struct _LIST_ENTRY *)v15 )
            __fastfail(3u);
          v16->Flink = v14;
          v14->Blink = v16;
          v17 = *(_BYTE *)(v15 + 16);
          if ( v17 != 1 )
            break;
          v18 = 0;
          v19 = *(_QWORD *)(v15 + 24);
          v52 = *(unsigned __int16 *)(v15 + 18);
          v51 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v51);
            while ( *(_QWORD *)(v19 + 64) );
          }
          if ( *(_BYTE *)(v19 + 388) == 5 )
          {
            v18 = KiSignalThread(CurrentPrcb, v19, v52, v15);
            if ( v18 )
            {
              v42 = *(_BYTE **)(v15 + 32);
              if ( (*v42 & 0x7F) == 2 )
                KiWaitSatisfyMutant(v42, v19, CurrentPrcb);
            }
          }
          *(_QWORD *)(v19 + 64) = 0LL;
          ++*(_BYTE *)(v15 + 17);
          p_WaitListHead = &p_Event->Header.WaitListHead;
          if ( v18 )
          {
LABEL_19:
            v20 = p_Event->Header.SignalState - 1;
            p_Event->Header.SignalState = v20;
            if ( !v20 )
              goto LABEL_20;
            p_WaitListHead = &p_Event->Header.WaitListHead;
          }
        }
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v15 + 24), (_QWORD *)v15, (__int64)v11);
          goto LABEL_19;
        }
        if ( v17 == 4 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          p_Event->Header.SignalState = 0;
          KiInsertQueueDpc(*(_QWORD *)(v15 + 24), 0);
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
        }
        p_WaitListHead = &p_Event->Header.WaitListHead;
      }
    }
  }
LABEL_22:
  if ( (KiAbpGlobalState & 1) != 0 )
  {
    v21 = 0LL;
    v22 = -1;
    _disable();
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    AutoBoostThreadState = (__int64 *)CurrentThread->AutoBoostThreadState;
    v26 = *AutoBoostThreadState;
    v27 = *(unsigned __int8 *)(*AutoBoostThreadState + 14);
    while ( 1 )
    {
      if ( (unsigned int)v24 >= v27 )
      {
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)v3, 0LL, 0LL);
        goto LABEL_48;
      }
      v28 = (__int64 *)(v26 + 48LL * (unsigned int)v24 + 16);
      v29 = *((_BYTE *)v28 + 33);
      if ( (v29 & 0x10) == 0 )
      {
        v30 = *v28;
        v31 = v28[4] & 2;
        if ( v31 )
          v30 = *(_QWORD *)(v30 + 24);
        if ( (PFAST_MUTEX)v30 == v3 && (v29 & 2) != 0 )
          break;
      }
      v24 = (unsigned int)(v24 + 1);
    }
    v21 = v26 + 48LL * (unsigned int)v24 + 16;
    *((_BYTE *)v28 + 33) = v29 & 0xFC | 1;
    if ( v31 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v24) = 2;
        KiRaiseIrqlProcessIrqlFlags(v22, v24);
      }
      v32 = KeGetCurrentPrcb();
      SchedulerAssist = (unsigned __int32 *)v32->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v44 = *SchedulerAssist;
        do
        {
          v24 = v44;
          LODWORD(v24) = v44 & 0xFFDFFFFF;
          v45 = v44;
          v44 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v44 & 0xFFDFFFFF, v44);
        }
        while ( v45 != v44 );
        if ( (v44 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v32, v24, SchedulerAssist, v26);
      }
      _enable();
      v4 = 0;
      _m_prefetchw((char *)v28 + 35);
      v34 = *((_BYTE *)v28 + 35);
      do
      {
        v35 = v34;
        v34 = _InterlockedCompareExchange8((volatile signed __int8 *)v28 + 35, v34 | 1, v34);
      }
      while ( v35 != v34 );
      if ( (v34 & 1) != 0 )
      {
        do
        {
          while ( (*((_BYTE *)v28 + 35) & 1) != 0 )
            _mm_pause();
          _m_prefetchw((char *)v28 + 35);
          v36 = *((_BYTE *)v28 + 35);
          do
          {
            v37 = v36;
            v36 = _InterlockedCompareExchange8((volatile signed __int8 *)v28 + 35, v36 | 1, v36);
          }
          while ( v37 != v36 );
        }
        while ( (v36 & 1) != 0 );
      }
      AutoBoost::KiAbpEntryUnlink((AutoBoost *)v28, (struct AutoBoost::_AB_THREAD_ENTRY *)v24);
      _InterlockedAnd8((volatile signed __int8 *)v28 + 35, 0xFEu);
    }
    v38 = *((_BYTE *)v28 + 36);
    v39 = v28[5];
    *((_DWORD *)v28 + 10) = 0;
    *v28 = 0LL;
    *((_WORD *)v28 + 16) = 0;
    LOWORD(v28[-6 * (v38 & 0x7F) - 1]) |= 1 << (v38 & 0xF);
    v2 = v39;
    if ( v4 )
    {
LABEL_48:
      v40 = KeGetCurrentPrcb();
      v41 = (unsigned __int32 *)v40->SchedulerAssist;
      if ( v41 )
      {
        _m_prefetchw(v41);
        v46 = *v41;
        do
        {
          v47 = v46;
          LODWORD(v47) = v46 & 0xFFDFFFFF;
          v48 = v46;
          v46 = _InterlockedCompareExchange((volatile signed __int32 *)v41, v46 & 0xFFDFFFFF, v46);
        }
        while ( v48 != v46 );
        if ( (v46 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v40, v47, v41, v26);
      }
      _enable();
      goto LABEL_55;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
    __writecr8(v22);
LABEL_55:
    if ( (_DWORD)v2 )
      AutoBoost::KiAbpUnboostThread(*(_QWORD *)(v21 - 48LL * (*(_BYTE *)(v21 + 36) & 0x7F) - 16), v3, v2, 0LL);
  }
  else
  {
    LegacyAutoBoost::KiAbPostRelease((ULONG_PTR)v3, v1);
  }
}
