/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1409D7EA8
 * Callers:
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407BF914 (KsepDbCacheQueryDeviceData.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x1409D7F70 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409D8054 (KsepCacheUnlock.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, const WCHAR *a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int DeviceData; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rcx
  _BYTE v15[4]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-54h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-30h] BYREF

  v16 = 0;
  DeviceData = -1073741275;
  memset_0(v15, 0, 0x44uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  KsepCacheLock((unsigned __int64 *)stru_140E66D40.SListFaultAddress, v10, v11, v12);
  v13 = KsepCacheLookup(stru_140E66D40.SListFaultAddress, v15);
  if ( v13 )
    DeviceData = KsepDbCacheQueryDeviceData(v13, a2, a3, a4, a5);
  KsepCacheUnlock((struct _KTHREAD *)stru_140E66D40.SListFaultAddress);
  return DeviceData;
}
