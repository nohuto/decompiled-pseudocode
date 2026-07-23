/*
 * XREFs of KseQueryDeviceDataList @ 0x140B2E430
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x140B2E22C (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepShimDbChanged @ 0x1404DCBA4 (KsepShimDbChanged.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KsepDbCacheInsertDevice @ 0x1407BF87C (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x1407BF9CC (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407BFCB8 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1409D6B70 (KsepCacheDeviceFree.c)
 *     KsepCacheLookup @ 0x1409D7F70 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x1409D8054 (KsepCacheUnlock.c)
 *     KseResetDeviceCache @ 0x1409D808C (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceDataList(PCWSTR SourceString, char *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int RegistryDeviceDataList; // ebx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  void **v20; // rax
  void **v21; // rsi
  void **v22; // rsi
  void **v24; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v25[4]; // [rsp+30h] [rbp-68h] BYREF
  int v26; // [rsp+34h] [rbp-64h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v26 = 0;
  memset_0(v25, 0, 0x44uLL);
  v24 = 0LL;
  if ( dword_140E66D14 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList((__int64)SourceString, a2, a3, a4);
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged(v9, v8, v11, v12) )
    {
      KseResetDeviceCache(v14, v13, v15, v16);
LABEL_11:
      RegistryDeviceDataList = KsepDbCacheReadDevice((__int64)SourceString, (__int64 *)&v24);
      if ( RegistryDeviceDataList >= 0 )
      {
        v22 = v24;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList((__int64)v24, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v22) < 0 )
          KsepCacheDeviceFree(v22);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    KsepCacheLock((unsigned __int64 *)stru_140E66D40.SListFaultAddress, v17, v18, v19);
    v20 = (void **)KsepCacheLookup((__int64)stru_140E66D40.SListFaultAddress, (__int64)v25);
    v24 = v20;
    v21 = v20;
    if ( v20 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList((__int64)v20, a2, a3, a4);
    KsepCacheUnlock((struct _KTHREAD *)stru_140E66D40.SListFaultAddress);
    if ( !v21 )
      goto LABEL_11;
  }
  return (unsigned int)RegistryDeviceDataList;
}
