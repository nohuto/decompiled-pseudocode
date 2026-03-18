/*
 * XREFs of NormalizationList__Unlock @ 0x140626488
 * Callers:
 *     RtlpGetNormalization @ 0x14080F254 (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void NormalizationList__Unlock()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&NormalizationListLock);
  KeLeaveCriticalRegion();
}
