/*
 * XREFs of RtlpReleaseBootStatusLock @ 0x1404EF738
 * Callers:
 *     PopBootStatSet @ 0x140ACB570 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140B516E4 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void RtlpReleaseBootStatusLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
