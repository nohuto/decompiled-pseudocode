/*
 * XREFs of PsGetNextProcess @ 0x14096EE20
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021BA80 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     MiEmptyAccessLogs @ 0x140501AF0 (MiEmptyAccessLogs.c)
 *     IopLiveDumpAllocAndInitProcessFilters @ 0x1405CC8F8 (IopLiveDumpAllocAndInitProcessFilters.c)
 *     KeEtwRundown @ 0x1405E48E8 (KeEtwRundown.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E5A40 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405F92A0 (KiTraceSchedulingGroupRundown.c)
 *     PsUpdateActiveProcessAffinity @ 0x1407F0DD8 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1407FA724 (PsWaitForAllProcesses.c)
 *     MiHotPatchAllProcesses @ 0x140870190 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x14087272C (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x14087DB14 (MiReferenceNonPagedMemoryProcessList.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLogMemInfoWs @ 0x14096E598 (EtwpLogMemInfoWs.c)
 *     PsEnumProcesses @ 0x14096E8BC (PsEnumProcesses.c)
 *     EtwpProcessThreadImageRundown @ 0x14096E924 (EtwpProcessThreadImageRundown.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409705AC (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140972A58 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     EtwpCoverageSamplerStop @ 0x140A84B18 (EtwpCoverageSamplerStop.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     DbgkpCloseObject @ 0x140AFF4E0 (DbgkpCloseObject.c)
 *     VmpTracingEnabledCallback @ 0x140B1FF10 (VmpTracingEnabledCallback.c)
 *     PspProcessRundownWorker @ 0x140B3CF70 (PspProcessRundownWorker.c)
 *     PfpRpControlRequestReset @ 0x140B4463C (PfpRpControlRequestReset.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

LIST_ENTRY *__fastcall PsGetNextProcess(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdi
  LIST_ENTRY *p_WaitListHead; // r14
  int v8; // r15d
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbp
  struct _KTHREAD *Thread; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  p_WaitListHead = 0LL;
  v8 = 0;
  --CurrentThread->SpecialApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PspActiveProcessLock,
      0,
      v10,
      (struct _KTHREAD *)&PspActiveProcessLock);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( Object )
    Thread = (struct _KTHREAD *)Object[59];
  else
    Thread = PsAltSystemCallRegistrationLock.WaitBlock[0].Thread;
  while ( Thread != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[24] )
  {
    p_WaitListHead = &Thread[-1].SuspendEvent.Header.WaitListHead;
    if ( ObReferenceObjectSafeWithTag((__int64)&Thread[-1].SuspendEvent.Header.WaitListHead, 0x6E457350u) )
    {
      v8 = 1;
      break;
    }
    Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((unsigned __int64)&PspActiveProcessLock);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v8 )
    return p_WaitListHead;
  return (LIST_ENTRY *)v6;
}
