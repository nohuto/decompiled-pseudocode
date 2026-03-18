/*
 * XREFs of KseResetDeviceCache @ 0x1409E4E40
 * Callers:
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepCacheReset @ 0x1407BEC2C (KsepCacheReset.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     KsepCacheUnlock @ 0x1409E5030 (KsepCacheUnlock.c)
 */

__int64 __fastcall KseResetDeviceCache(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx

  if ( dword_140E66B04 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)stru_140E66B30.SListFaultAddress, a2, a3, a4);
    KsepCacheReset((__int64)stru_140E66B30.SListFaultAddress, v4);
    KsepCacheUnlock((struct _KTHREAD *)stru_140E66B30.SListFaultAddress);
  }
  return 0LL;
}
