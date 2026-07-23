/*
 * XREFs of MmGetMinWsPagePriority @ 0x1404AACF0
 * Callers:
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1404AAA04 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404AAAAC (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404AAB54 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404AAC40 (EtwTraceAutoBoostClearFloor.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407FFAAC (PspUpdateJobEffectivePriorityLimits.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     MiCommitPageTablesSetBits @ 0x140998A2C (MiCommitPageTablesSetBits.c)
 *     MiComputeProcessUserVa @ 0x140A086A0 (MiComputeProcessUserVa.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiReturnVadBitmapCommit @ 0x140AE3FD0 (MiReturnVadBitmapCommit.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
