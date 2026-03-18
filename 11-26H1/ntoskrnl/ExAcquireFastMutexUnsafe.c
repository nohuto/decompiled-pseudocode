/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1403FC2F0
 * Callers:
 *     KeAcquireGuardedMutexUnsafe @ 0x1403FB700 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403FB800 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403FB980 (FsRtlCheckOplockEx2.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403FC2C0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCancelNotify @ 0x1404A3F80 (FsRtlCancelNotify.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1405B5F20 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405B60A0 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B6114 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B75A0 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x14064E820 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x14065F860 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
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
 *     LOCK_TRANSACTION_LIST @ 0x1408AEE3C (LOCK_TRANSACTION_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x1408AF164 (LOCK_CM_RM_LIST.c)
 *     CmpPostNotify @ 0x1408CAEE0 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D0490 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x1408D0928 (CmpNotifyTriggerCheck.c)
 *     NtQueryBootOptions @ 0x140906480 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140907D64 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtNotifyChangeMultipleKeys @ 0x14097A180 (NtNotifyChangeMultipleKeys.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A85310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x140A85640 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A860F0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     NtEnumerateBootEntries @ 0x140A94460 (NtEnumerateBootEntries.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140AB6BF0 (FsRtlOplockBreakH2.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF6420 (FsRtlNotifyFilterReportChange.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140B3D1C0 (FsRtlCheckOplockForFsFilterCallback.c)
 *     KeInitSystem @ 0x140CC82B8 (KeInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v4; // rax
  struct _KLOCK_ENTRY *v5; // rdx
  unsigned __int64 v6; // rdi
  AutoBoost *v7; // rsi
  int v8; // r14d
  int i; // r15d
  signed __int32 Count; // eax
  signed __int32 v11; // ett
  struct _KLOCK_ENTRIES *v12; // r9
  signed __int32 v13; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = KeAbPreAcquire((__int64)FastMutex, 0LL, 0LL, v1);
  v6 = v4;
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
  {
    v7 = (AutoBoost *)v4;
    v8 = 1;
    ++FastMutex->Contention;
    for ( i = 4; ; i = 2 )
    {
      Count = FastMutex->Count;
      do
      {
        while ( (Count & 1) != 0 )
        {
          v13 = Count;
          Count = _InterlockedCompareExchange(&FastMutex->Count, v8 ^ Count, Count);
          if ( v13 == Count )
            goto LABEL_11;
        }
        v11 = Count;
        Count = _InterlockedCompareExchange(&FastMutex->Count, i + Count, Count);
      }
      while ( v11 != Count );
      if ( v7 )
        KeAbPreWait(v7, v5);
      KeWaitForSingleObject(&FastMutex->Event, WrFastMutex, 0, 0, 0LL);
      _m_prefetchw(FastMutex);
      v8 = 3;
      if ( v7 )
        v7 = (AutoBoost *)KeAbPreAcquire((__int64)FastMutex, (unsigned __int64)v7, 0LL, v12);
    }
  }
LABEL_11:
  if ( !v6 )
    goto LABEL_14;
  if ( (KiAbpGlobalState & 1) == 0 )
  {
    *(_BYTE *)(v6 + 10) = 1;
LABEL_14:
    FastMutex->Owner = CurrentThread;
    return;
  }
  *(_BYTE *)(v6 + 33) |= 2u;
  FastMutex->Owner = CurrentThread;
}
