/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1409E4E84
 * Callers:
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407BC8B4 (KsepDbCacheQueryDeviceData.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x1409E4F4C (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409E5030 (KsepCacheUnlock.c)
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
  KsepCacheLock((unsigned __int64 *)stru_140E66B30.SListFaultAddress, v10, v11, v12);
  v13 = KsepCacheLookup(stru_140E66B30.SListFaultAddress, v15);
  if ( v13 )
    DeviceData = KsepDbCacheQueryDeviceData(v13, a2, a3, a4, a5);
  KsepCacheUnlock((struct _KTHREAD *)stru_140E66B30.SListFaultAddress);
  return DeviceData;
}
