/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006D3DC
 * Callers:
 *     ?IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ @ 0x18006D2B4 (-IsWindowManagementInProcEnabled@WindowManagement@ApplicationModel@Internal@Windows@@YA_NXZ.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18006DD80 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801EC0A8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180219670 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementInProc@@.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x18027E58C (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementInProc>::__private_IsEnabledPreCheck(
        int *a1,
        char a2)
{
  int v2; // edi
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // r9d
  unsigned int v10; // edx
  char v11[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  _BYTE v13[24]; // [rsp+68h] [rbp-18h] BYREF
  int v14; // [rsp+A0h] [rbp+20h] BYREF
  __int16 v15; // [rsp+A4h] [rbp+24h]
  int v16; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+30h] BYREF

  LOBYTE(v16) = a2;
  v2 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v17 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementInProc>::GetCachedFeatureEnabledState(
                       a1,
                       &v17);
    LOWORD(v2) = v17;
  }
  v15 = 3;
  v14 = 0;
  v16 = 3;
  v4 = wil_details_FeatureReporting_RecordUsageInCache(v13, a1 + 2, 2LL, 0LL);
  v5 = *(_QWORD *)(v4 + 16);
  *(_OWORD *)v11 = *(_OWORD *)v4;
  v12 = v5;
  wil::details::RecordFeatureUsageCallback(24406318LL, 2LL, v6, a1 + 2);
  if ( (v2 & 0x400) != 0 )
  {
    v10 = 2;
    if ( (v2 & 0x800) != 0 )
      v10 = -2147483646;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x174692E, v10, 0, v8, v11);
  }
  if ( !(_DWORD)v12 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v7) = 3;
      g_wil_details_realtimeFeatureUsageHook(24406318LL, 2LL, v7);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(24406318LL, &v14, 0LL, 1LL, &v16, 0LL, 0, 1LL);
  }
  return 1;
}
