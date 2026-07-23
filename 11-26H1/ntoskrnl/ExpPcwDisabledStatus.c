/*
 * XREFs of ExpPcwDisabledStatus @ 0x140A768D4
 * Callers:
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     FsRtlAddDiskIOCounterInstance @ 0x140A74C68 (FsRtlAddDiskIOCounterInstance.c)
 *     KiSynchCounterSetCallback @ 0x140A74D70 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A74EC0 (KiSynchNumaCounterSetCallback.c)
 *     ExProcessorCounterSetCallback @ 0x140A75530 (ExProcessorCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140A76390 (EtwpEventTracingCounterSetCallback.c)
 *     PcwAddInstance @ 0x140A76640 (PcwAddInstance.c)
 *     PcwCreateInstance @ 0x140A767E0 (PcwCreateInstance.c)
 *     PcwRegister @ 0x140A76870 (PcwRegister.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 */

__int64 ExpPcwDisabledStatus()
{
  int WaitBlockList_high; // eax
  int RegistryValues; // eax
  int v2; // ecx
  ULONG v4; // [rsp+20h] [rbp-29h]
  int v5[2]; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h]
  const wchar_t *v7; // [rsp+40h] [rbp-9h]
  int *v8; // [rsp+48h] [rbp-1h]
  int v9; // [rsp+50h] [rbp+7h]
  int *v10; // [rsp+58h] [rbp+Fh]
  int v11; // [rsp+60h] [rbp+17h]
  __int128 v12; // [rsp+68h] [rbp+1Fh]
  __int128 v13; // [rsp+78h] [rbp+2Fh]
  __int128 v14; // [rsp+88h] [rbp+3Fh]
  __int64 v15; // [rsp+98h] [rbp+4Fh]
  int v16; // [rsp+B0h] [rbp+67h] BYREF
  int v17; // [rsp+B8h] [rbp+6Fh] BYREF

  WaitBlockList_high = HIDWORD(ExpPlatformBinaryLock.WaitBlockList);
  v16 = 0;
  if ( HIDWORD(ExpPlatformBinaryLock.WaitBlockList) )
    return WaitBlockList_high != 1 ? 0xC0000002 : 0;
  v17 = -1;
  *(_QWORD *)v5 = 0LL;
  v7 = L"Start";
  v6 = 288;
  v8 = &v16;
  v9 = 67108868;
  v10 = &v17;
  v11 = 4;
  v12 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  RegistryValues = RtlpQueryRegistryValues(1LL, (const WCHAR *)L"pcw", (__int64)v5, 0LL, v4, 1);
  v2 = 0;
  if ( RegistryValues != -1073741772 )
    v2 = RegistryValues;
  if ( v2 >= 0 )
  {
    WaitBlockList_high = 2 - (v16 != 0);
    HIDWORD(ExpPlatformBinaryLock.WaitBlockList) = WaitBlockList_high;
    return WaitBlockList_high != 1 ? 0xC0000002 : 0;
  }
  return (unsigned int)v2;
}
