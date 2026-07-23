/*
 * XREFs of KseResetDeviceCache @ 0x1409D808C
 * Callers:
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepCacheReset @ 0x1407C1C8C (KsepCacheReset.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     KsepCacheUnlock @ 0x1409D8054 (KsepCacheUnlock.c)
 */

__int64 __fastcall KseResetDeviceCache(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx

  if ( dword_140E66D14 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)stru_140E66D40.SListFaultAddress, a2, a3, a4);
    KsepCacheReset((__int64)stru_140E66D40.SListFaultAddress, v4);
    KsepCacheUnlock((struct _KTHREAD *)stru_140E66D40.SListFaultAddress);
  }
  return 0LL;
}
