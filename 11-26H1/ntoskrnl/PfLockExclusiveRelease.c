/*
 * XREFs of PfLockExclusiveRelease @ 0x1404C0F38
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfpRpShutdown @ 0x1407C9D30 (PfpRpShutdown.c)
 *     PfpParametersWatcher @ 0x1407CAD40 (PfpParametersWatcher.c)
 *     PfpPrefetchSharedCleanup @ 0x140987F6C (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1409880CC (PfpPrefetchSharedStart.c)
 *     PfpRpCHashEmpty @ 0x1409BE290 (PfpRpCHashEmpty.c)
 *     PfpRpCHashDeleteEntries @ 0x140AA9288 (PfpRpCHashDeleteEntries.c)
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 *     PfpRpCHashAddEntries @ 0x140B04DEC (PfpRpCHashAddEntries.c)
 *     PfpRpCHashGrow @ 0x140B04FB4 (PfpRpCHashGrow.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 *     PfTAccessTracingCleanup @ 0x140BFEDFC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140BFEEDC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x140BFEF54 (PfTSetTracingPriority.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140BFF0AC (PfpPartitionAccessTraceLockRelease.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall PfLockExclusiveRelease(struct _KTHREAD *a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
