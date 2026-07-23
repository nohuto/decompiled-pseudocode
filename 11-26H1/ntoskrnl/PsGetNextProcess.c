/*
 * XREFs of PsGetNextProcess @ 0x1409BC470
 * Callers:
 *     ?KiUpdateProcessConcurrencyCounts@@YAXXZ @ 0x14021D410 (-KiUpdateProcessConcurrencyCounts@@YAXXZ.c)
 *     MiEmptyAccessLogs @ 0x1404FB2E0 (MiEmptyAccessLogs.c)
 *     IopLiveDumpAllocAndInitProcessFilters @ 0x1405CF108 (IopLiveDumpAllocAndInitProcessFilters.c)
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 *     KiAvailableCpusPartitionWorkItemCallback @ 0x1405E83B0 (KiAvailableCpusPartitionWorkItemCallback.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405FBCC0 (KiTraceSchedulingGroupRundown.c)
 *     PsUpdateActiveProcessAffinity @ 0x1407F6938 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140800154 (PsWaitForAllProcesses.c)
 *     MiHotPatchAllProcesses @ 0x1408764F0 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140878A8C (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140883F14 (MiReferenceNonPagedMemoryProcessList.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     DbgkpCloseObject @ 0x1409BA900 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409BBA80 (IopQueryProcessIdsUsingFile.c)
 *     EtwpLogMemInfoWs @ 0x1409BBBE8 (EtwpLogMemInfoWs.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 *     EtwpProcessThreadImageRundown @ 0x1409BBF74 (EtwpProcessThreadImageRundown.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1409BDC4C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PspProcessRundownWorker @ 0x1409BDE40 (PspProcessRundownWorker.c)
 *     PfpRpControlRequestReset @ 0x1409BDEE4 (PfpRpControlRequestReset.c)
 *     EtwpCoverageSamplerStop @ 0x1409BDF40 (EtwpCoverageSamplerStop.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140A31120 (EtwQueryPerformanceTraceInformation.c)
 *     VmpTracingEnabledCallback @ 0x140B22330 (VmpTracingEnabledCallback.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140CDBE50 (PopEtInit.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

LIST_ENTRY *__fastcall PsGetNextProcess(_QWORD *Object, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdi
  LIST_ENTRY *p_WaitListHead; // r14
  int v8; // r15d
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbp
  struct _KTHREAD *Flink; // rbp
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
    Flink = (struct _KTHREAD *)Object[59];
  else
    Flink = (struct _KTHREAD *)PsAltSystemCallRegistrationLock.WaitBlock[2].WaitListEntry.Flink;
  while ( Flink != (struct _KTHREAD *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[96] )
  {
    p_WaitListHead = &Flink[-1].SuspendEvent.Header.WaitListHead;
    if ( ObReferenceObjectSafeWithTag((__int64)&Flink[-1].SuspendEvent.Header.WaitListHead, 0x6E457350u) )
    {
      v8 = 1;
      break;
    }
    Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((unsigned __int64)&PspActiveProcessLock);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v13, v12);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v8 )
    return p_WaitListHead;
  return (LIST_ENTRY *)v6;
}
