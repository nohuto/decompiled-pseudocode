/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x1406EA20C
 * Callers:
 *     MiReleaseAddMemoryLocks @ 0x140866D0C (MiReleaseAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x140B27510 (MiNodeZeroConductor.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E37DC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E37DC8.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E37DC8);
}
