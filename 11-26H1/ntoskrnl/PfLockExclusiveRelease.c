/*
 * XREFs of PfLockExclusiveRelease @ 0x1404C761C
 * Callers:
 *     PfFileInfoNotify @ 0x1402B8A80 (PfFileInfoNotify.c)
 *     PfpRpShutdown @ 0x1407C6CD0 (PfpRpShutdown.c)
 *     PfpParametersWatcher @ 0x1407C7CE0 (PfpParametersWatcher.c)
 *     PfpPrefetchSharedCleanup @ 0x1409B6F88 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1409B70EC (PfpPrefetchSharedStart.c)
 *     PfProcessExitNotification @ 0x140A43B50 (PfProcessExitNotification.c)
 *     PfpRpCHashDeleteEntries @ 0x140AABCD8 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x140B031D8 (PfpRpCHashAddEntries.c)
 *     PfpRpCHashGrow @ 0x140B033A0 (PfpRpCHashGrow.c)
 *     PfpRpCHashEmpty @ 0x140B44698 (PfpRpCHashEmpty.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BF8EDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BF8F54 (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140BF90AC (PfpPartitionAccessTraceLockRelease.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PfLockExclusiveRelease(struct _KTHREAD *a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
