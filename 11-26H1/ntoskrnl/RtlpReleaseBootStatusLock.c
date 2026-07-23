/*
 * XREFs of RtlpReleaseBootStatusLock @ 0x1404E8D18
 * Callers:
 *     PopBootStatSet @ 0x140ACD7B0 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void RtlpReleaseBootStatusLock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RtlpBootStatHandleLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RtlpBootStatHandleLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&RtlpBootStatHandleLock);
  KeLeaveCriticalRegion();
}
