/*
 * XREFs of VmpReleasePushLockExclusive @ 0x1404857AC
 * Callers:
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 *     PfpRpCHashGrow @ 0x1406ECDEC (PfpRpCHashGrow.c)
 *     PfpRpShutdown @ 0x14073AFB0 (PfpRpShutdown.c)
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfpParametersWatcher @ 0x14073C490 (PfpParametersWatcher.c)
 *     VmCleanProcessAddressSpace @ 0x14078F1A8 (VmCleanProcessAddressSpace.c)
 *     VmCreateMemoryRange @ 0x14078F640 (VmCreateMemoryRange.c)
 *     VmPinMemoryRange @ 0x14078F8C0 (VmPinMemoryRange.c)
 *     VmUnpinMemoryRange @ 0x14078FBA0 (VmUnpinMemoryRange.c)
 *     VmUpdateCommitMemoryRange @ 0x14078FCD0 (VmUpdateCommitMemoryRange.c)
 *     VmpPauseResumeNotify @ 0x14078FE78 (VmpPauseResumeNotify.c)
 *     PfpPrefetchSharedCleanup @ 0x1408EBCF8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1408EBE2C (PfpPrefetchSharedStart.c)
 *     PfProcessExitNotification @ 0x14091D314 (PfProcessExitNotification.c)
 *     PfpRpCHashAddEntries @ 0x1409243D8 (PfpRpCHashAddEntries.c)
 *     PfpRpCHashDeleteEntries @ 0x140A1F018 (PfpRpCHashDeleteEntries.c)
 *     VmDeleteMemoryRange @ 0x140A61400 (VmDeleteMemoryRange.c)
 *     VmSplitMemoryRange @ 0x140A77C20 (VmSplitMemoryRange.c)
 *     VmMergeMemoryRanges @ 0x140A7A390 (VmMergeMemoryRanges.c)
 *     PfpRpCHashEmpty @ 0x140A986A4 (PfpRpCHashEmpty.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140B4B640 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140B4B6BC (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140B4B830 (PfpPartitionAccessTraceLockRelease.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall VmpReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegion();
}
