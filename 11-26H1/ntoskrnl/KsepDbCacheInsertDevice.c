/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1407BF87C
 * Callers:
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x1409D7F70 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409D8054 (KsepCacheUnlock.c)
 *     KsepCacheInsert @ 0x140B2B9F0 (KsepCacheInsert.c)
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
  KsepCacheLock(stru_140E66D40.SListFaultAddress);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(stru_140E66D40.SListFaultAddress, v6) )
  {
    KsepCacheInsert(stru_140E66D40.SListFaultAddress, a2);
    v4 = 0;
  }
  KsepCacheUnlock((struct _KTHREAD *)stru_140E66D40.SListFaultAddress);
  return v4;
}
