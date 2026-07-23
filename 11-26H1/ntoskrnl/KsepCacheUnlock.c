/*
 * XREFs of KsepCacheUnlock @ 0x1409D8054
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x1407BF87C (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x1407C137C (KseLookupHardwareId.c)
 *     KsepDbCacheQueryDevice @ 0x1409D7EA8 (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x1409D808C (KseResetDeviceCache.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall KsepCacheUnlock(struct _KTHREAD *a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
