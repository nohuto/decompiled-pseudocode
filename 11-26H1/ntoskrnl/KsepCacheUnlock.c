/*
 * XREFs of KsepCacheUnlock @ 0x1409E5030
 * Callers:
 *     KsepDbCacheInsertDevice @ 0x1407BC81C (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x1407BE31C (KseLookupHardwareId.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     KseResetDeviceCache @ 0x1409E4E40 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDevice @ 0x1409E4E84 (KsepDbCacheQueryDevice.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall KsepCacheUnlock(struct _KTHREAD *a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
