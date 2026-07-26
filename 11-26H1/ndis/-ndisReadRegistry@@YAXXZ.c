/*
 * XREFs of ?ndisReadRegistry@@YAXXZ @ 0x14009B014
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140091E70 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140092108 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline @ 0x140094BEC (Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ndisLoadNotifyRegister @ 0x14018EF40 (ndisLoadNotifyRegister.c)
 */

void ndisReadRegistry(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  unsigned int v1; // eax
  unsigned int v2; // edx
  PVOID Environment; // [rsp+20h] [rbp-E0h]
  __int64 v4; // [rsp+30h] [rbp-D0h]
  _DWORD VersionInformation[72]; // [rsp+40h] [rbp-C0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+160h] [rbp+60h] BYREF
  __int64 (__fastcall *v7)(wchar_t *, unsigned int, void *, unsigned int, void *, void *); // [rsp+198h] [rbp+98h]
  int v8; // [rsp+1A0h] [rbp+A0h]
  __int64 v9; // [rsp+1A8h] [rbp+A8h]
  __int64 v10; // [rsp+1B0h] [rbp+B0h]
  int v11; // [rsp+1B8h] [rbp+B8h]
  void *v12; // [rsp+1C0h] [rbp+C0h]
  int v13; // [rsp+1C8h] [rbp+C8h]
  __int128 v14; // [rsp+1D0h] [rbp+D0h]
  __int128 v15; // [rsp+1E0h] [rbp+E0h]
  __int128 v16; // [rsp+1F0h] [rbp+F0h]
  __int64 v17; // [rsp+200h] [rbp+100h]

  memset(&VersionInformation[1], 0, 0x118uLL);
  QueryTable.QueryRoutine = 0LL;
  v8 = 20;
  QueryTable.Name = L"MediaTypes";
  v9 = 0LL;
  v7 = ndisAddMediaTypeToArray;
  v10 = 0LL;
  v12 = &unk_14011ED34;
  QueryTable.Flags = 1;
  v17 = 0LL;
  memset(&QueryTable.EntryContext, 0, 32);
  v11 = 4;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  RtlQueryRegistryValuesEx(1u, L"NDIS", &QueryTable, 0LL, 0LL);
  ndisRegisterKnobs(&stru_1400F6460, 0x27uLL, v0, 0LL, Environment);
  ndisLoadNotifyRegister();
  if ( ndisAoAcTestOverride == 1 )
    ndisAoAcTest = 1;
  VersionInformation[0] = 284;
  RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( ndisNoPauseOnSuspend == 0xFFFFFF )
    ndisNoPauseOnSuspend = BYTE2(VersionInformation[70]) == 1;
  if ( ndisDebugLoggingMode >= 3 )
    ndisDebugLoggingMode = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
    ndisAllowFlowControl = 1;
  v1 = ndisMaxNumRssCpus;
  if ( !ndisMaxNumRssCpus )
  {
    v1 = 1;
    ndisMaxNumRssCpus = 1;
  }
  if ( v1 > ndisNumberOfActiveProcessorsAtBoot )
  {
    v1 = ndisNumberOfActiveProcessorsAtBoot;
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot;
  }
  if ( v1 > 0x800 )
  {
    v1 = 2048;
    ndisMaxNumRssCpus = 2048;
  }
  v2 = ndisRssBaseCpu;
  if ( ndisRssBaseCpu >= ndisNumberOfActiveProcessorsAtBoot )
  {
    v2 = ndisNumberOfActiveProcessorsAtBoot - 1;
    ndisRssBaseCpu = ndisNumberOfActiveProcessorsAtBoot - 1;
  }
  if ( v2 + v1 > ndisNumberOfActiveProcessorsAtBoot )
    ndisMaxNumRssCpus = ndisNumberOfActiveProcessorsAtBoot - v2;
  if ( (unsigned int)(dword_14011D408 - 1) > 0x1E )
    dword_14011D408 = 8;
  if ( ndisDatapathVerifierMode > 2u )
  {
    if ( ndisDatapathVerifierMode == 3 )
    {
      v4 = (unsigned int)Feature_NdisDatapathVerifier__private_featureState;
      if ( (Feature_NdisDatapathVerifier__private_featureState & 0x10) == 0 )
      {
        LODWORD(v4) = Feature_NdisDatapathVerifier__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_NdisDatapathVerifier__private_descriptor,
          v4,
          3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v4,
          3,
          (__int64)&Feature_NdisDatapathVerifier__private_descriptor);
      }
      ndisDatapathVerifierMode = 1;
    }
    else
    {
      ndisDatapathVerifierMode = 0;
    }
  }
  if ( ndisNblContextVerifierMode && (unsigned int)(ndisNblContextVerifierMode - 1) >= 2 )
    ndisNblContextVerifierMode = 0;
  if ( (unsigned int)Feature_NDPQualityWinter26__private_IsEnabledDeviceUsageNoInline() )
    ndisNDPQualityWinter26IsEnabled = 1;
}
