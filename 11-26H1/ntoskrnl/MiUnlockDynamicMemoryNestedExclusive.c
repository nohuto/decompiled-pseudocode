/*
 * XREFs of MiUnlockDynamicMemoryNestedExclusive @ 0x1406EEEAC
 * Callers:
 *     MiReleaseAddMemoryLocks @ 0x14086D0EC (MiReleaseAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void MiUnlockDynamicMemoryNestedExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E37F48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E37F48.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E37F48);
}
