/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407BC81C
 * Callers:
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     KsepCacheInsert @ 0x1409E3518 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x1409E4F4C (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409E5030 (KsepCacheUnlock.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // edi
  _BYTE v6[4]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+24h] [rbp-54h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v7 = 0;
  v4 = -1073741811;
  memset_0(v6, 0, 0x44uLL);
  KsepCacheLock(stru_140E66B30.SListFaultAddress);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(stru_140E66B30.SListFaultAddress, v6) )
  {
    KsepCacheInsert(stru_140E66B30.SListFaultAddress, a2);
    v4 = 0;
  }
  KsepCacheUnlock((struct _KTHREAD *)stru_140E66B30.SListFaultAddress);
  return v4;
}
