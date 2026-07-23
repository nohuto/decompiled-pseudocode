/*
 * XREFs of NormalizationList__Unlock @ 0x1406294D8
 * Callers:
 *     RtlpGetNormalization @ 0x140814CE4 (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void NormalizationList__Unlock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&NormalizationListLock);
  KeLeaveCriticalRegion();
}
