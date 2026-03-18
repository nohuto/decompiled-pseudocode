/*
 * XREFs of KseQueryDeviceData @ 0x1409E5A00
 * Callers:
 *     KseQueryDeviceFlags @ 0x1409E5610 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x140B2C1AC (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x1404CCB84 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x1404E3604 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     KsepDbCacheInsertDevice @ 0x1407BC81C (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407BC8B4 (KsepDbCacheQueryDeviceData.c)
 *     KseResetDeviceCache @ 0x1409E4E40 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDevice @ 0x1409E4E84 (KsepDbCacheQueryDevice.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409E5B5C (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1409E6158 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1409E6270 (KsepCacheDeviceFree.c)
 */

__int64 __fastcall KseQueryDeviceData(PCWSTR SourceString, const WCHAR *a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  int Device; // ebx
  _DWORD *v16; // r8
  __int64 v17; // rdi
  void *v18; // [rsp+20h] [rbp-38h]
  int v19[2]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v19 = 0LL;
  if ( dword_140E66B04 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = (*a3 & 0x20000000) == 0;
  *a3 = 0;
  if ( !v9 || (HIDWORD(v18) = HIDWORD(a5), Device = KsepDbQueryRegistryDeviceData(SourceString), Device == -1073741275) )
  {
    if ( (unsigned int)KsepShimDbChanged((__int64)SourceString, (__int64)a2, (__int64)a3, (struct _KLOCK_ENTRIES *)a4) )
    {
      KseResetDeviceCache(v11, v10, v12, v13);
    }
    else
    {
      Device = KsepDbCacheQueryDevice(SourceString, a2, a3, a4, a5);
      if ( Device != -1073741275 )
        goto LABEL_9;
    }
    Device = KsepDbCacheReadDevice(SourceString, v19);
    if ( Device < 0 )
      return (unsigned int)Device;
    v16 = a3;
    v17 = *(_QWORD *)v19;
    Device = KsepDbCacheQueryDeviceData(*(__int64 *)v19, a2, v16, a4, a5);
    if ( (int)KsepDbCacheInsertDevice(SourceString, v17) < 0 )
      KsepCacheDeviceFree(v17);
  }
LABEL_9:
  if ( Device >= 0 )
  {
    if ( !*a4 )
      Device = -1073741275;
    *((_QWORD *)&AlpcpMessageLogLock.AbCompletedIoQoSBoostCount
    + (((unsigned __int8)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[12],
                           1u)
      + 1) & 0x3F)) = 592093LL;
    if ( ((__int64)stru_140E66B30.StackBase & 1) != 0 )
    {
      LODWORD(v18) = Device;
      KsepDebugPrint(0LL, (int)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v18);
    }
    LODWORD(v18) = Device;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v18);
  }
  return (unsigned int)Device;
}
