/*
 * XREFs of KseQueryDeviceData @ 0x1409D6F80
 * Callers:
 *     KseQueryDeviceFlags @ 0x1409D7790 (KseQueryDeviceFlags.c)
 *     ExpGetDeviceDataInformation @ 0x140B2E22C (ExpGetDeviceDataInformation.c)
 * Callees:
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepShimDbChanged @ 0x1404DCBA4 (KsepShimDbChanged.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     KsepDbCacheInsertDevice @ 0x1407BF87C (KsepDbCacheInsertDevice.c)
 *     KsepDbCacheQueryDeviceData @ 0x1407BF914 (KsepDbCacheQueryDeviceData.c)
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x1409D6B70 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409D70DC (KsepDbQueryRegistryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x1409D7EA8 (KsepDbCacheQueryDevice.c)
 *     KseResetDeviceCache @ 0x1409D808C (KseResetDeviceCache.c)
 */

__int64 __fastcall KseQueryDeviceData(
        PCWSTR SourceString,
        const WCHAR *a2,
        _DWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        void *a5)
{
  bool v9; // zf
  int Device; // ebx
  _DWORD *v12; // r8
  void **v13; // rdi
  void *v14; // [rsp+20h] [rbp-38h]
  int v15[2]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)v15 = 0LL;
  if ( dword_140E66D14 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !a2 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  v9 = (*a3 & 0x20000000) == 0;
  *a3 = 0;
  if ( !v9 || (HIDWORD(v14) = HIDWORD(a5), Device = KsepDbQueryRegistryDeviceData(SourceString), Device == -1073741275) )
  {
    if ( (unsigned int)KsepShimDbChanged((__int64)SourceString, (__int64)a2, (__int64)a3, a4) )
    {
      KseResetDeviceCache();
    }
    else
    {
      Device = KsepDbCacheQueryDevice(SourceString, (int)a2, (int)a3, (int)a4, a5);
      if ( Device != -1073741275 )
        goto LABEL_9;
    }
    Device = KsepDbCacheReadDevice((__int64)SourceString, (__int64 *)v15);
    if ( Device < 0 )
      return (unsigned int)Device;
    v12 = a3;
    v13 = *(void ***)v15;
    Device = KsepDbCacheQueryDeviceData(*(__int64 *)v15, a2, v12, (unsigned int *)a4, a5);
    if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v13) < 0 )
      KsepCacheDeviceFree(v13);
  }
LABEL_9:
  if ( Device >= 0 )
  {
    if ( !LODWORD(a4->Thread) )
      Device = -1073741275;
    *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                      * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                             &KsepHistoryMessagesIndex,
                                                                             1u)
                                                        + 1) & 0x3F)] = 592093LL;
    if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    {
      LODWORD(v14) = Device;
      KsepDebugPrint(0LL, (int)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
    }
    LODWORD(v14) = Device;
    KsepLogInfo(0LL, (__int64)"KSE: Query device [%ws, %ws]: found in cache %08x\n", a2, SourceString, v14);
  }
  return (unsigned int)Device;
}
