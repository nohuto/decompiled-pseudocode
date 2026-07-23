/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1403F8AE0
 * Callers:
 *     KeAcquireGuardedMutexUnsafe @ 0x1403F7EF0 (KeAcquireGuardedMutexUnsafe.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403F7FF0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCheckOplockEx2 @ 0x1403F8170 (FsRtlCheckOplockEx2.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1403F8AB0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x1403FB5E0 (FsRtlCancelNotify.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1405B8790 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockGetAnyBreakOwnerProcess @ 0x1405B8910 (FsRtlOplockGetAnyBreakOwnerProcess.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockAckTimeoutWorker @ 0x1405B9E10 (FsRtlpOplockAckTimeoutWorker.c)
 *     DifExAcquireFastMutexUnsafeWrapper @ 0x140652400 (DifExAcquireFastMutexUnsafeWrapper.c)
 *     DifKeAcquireGuardedMutexUnsafeWrapper @ 0x140663440 (DifKeAcquireGuardedMutexUnsafeWrapper.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14079171C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14079186C (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140793440 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1407BD540 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x14081B2F0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x14081B390 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x14081B440 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x14081B500 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepNotifyFileSystems @ 0x14081B9D0 (SepNotifyFileSystems.c)
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14084281C (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140842D5C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x140843330 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408434D0 (NtDeleteDriverEntry.c)
 *     NtEnumerateDriverEntries @ 0x140843670 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x140843AF0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x140843C90 (NtGetEnvironmentVariableEx.c)
 *     NtQueryDriverEntryOrder @ 0x140843DB0 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140843FC0 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140844070 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140844330 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1408444F0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140844740 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408448F0 (NtSetSystemEnvironmentValue.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     LOCK_CM_RM_LIST @ 0x1408B5570 (LOCK_CM_RM_LIST.c)
 *     CmpPostNotify @ 0x1408D1490 (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x1408D6A50 (CmpReportNotifyHelper.c)
 *     CmpNotifyTriggerCheck @ 0x1408D6EE8 (CmpNotifyTriggerCheck.c)
 *     NtNotifyChangeMultipleKeys @ 0x14093C190 (NtNotifyChangeMultipleKeys.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140A2E370 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140A2E7B0 (NtQueryBootOptions.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140A2FEC4 (ExpGetFirmwareEnvironmentVariable.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A89F10 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x140A8A240 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A8A420 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A8ACF0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA46C0 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlOplockBreakH2 @ 0x140AB7FB0 (FsRtlOplockBreakH2.c)
 *     FsRtlNotifyFilterReportChange @ 0x140AF8AC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x140B3F290 (FsRtlCheckOplockForFsFilterCallback.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
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
