/*
 * XREFs of MmGetMinWsPagePriority @ 0x1404B1660
 * Callers:
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x1404B1374 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1404B141C (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1404B14C4 (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostClearFloor @ 0x1404B15B0 (EtwTraceAutoBoostClearFloor.c)
 *     PspUpdateJobEffectivePriorityLimits @ 0x1407FA07C (PspUpdateJobEffectivePriorityLimits.c)
 *     MiComputeProcessUserVa @ 0x140962818 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesSetBits @ 0x1409C7A4C (MiCommitPageTablesSetBits.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiReturnVadBitmapCommit @ 0x140AE6210 (MiReturnVadBitmapCommit.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
