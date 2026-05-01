/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180071FDC
 * Callers:
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x18026DE90 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_details_FeatureReportingCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180072DF0 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEAUwil_detail.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1801F5EDC (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     wil_details_FeatureReporting_RecordUsageInCache @ 0x180287020 (wil_details_FeatureReporting_RecordUsageInCache.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18055D534 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::__private_IsEnabledPreCheck(
        unsigned int *a1,
        char a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // r9d
  char v10[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h]
  _BYTE v12[24]; // [rsp+68h] [rbp-18h] BYREF
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  __int16 v14; // [rsp+A4h] [rbp+24h]
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+30h] BYREF

  LOBYTE(v15) = a2;
  v2 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCachedFeatureEnabledState(
                       a1,
                       &v16);
    v2 = v16;
  }
  v14 = 3;
  v13 = 0;
  v15 = 3;
  v4 = wil_details_FeatureReporting_RecordUsageInCache(v12, a1 + 2, 2LL, 0LL);
  v5 = *(_QWORD *)(v4 + 16);
  *(_OWORD *)v10 = *(_OWORD *)v4;
  v11 = v5;
  wil::details::RecordFeatureUsageCallback(26769179LL, 2LL, v6, a1 + 2);
  if ( (v2 & 0x400) != 0 )
    wil::details::WilApi_RecordFeatureUsage((wil::details *)0x198771B, (v2 >> 11 << 31) + 2, 0, v8, v10);
  if ( !(_DWORD)v11 )
  {
    if ( g_wil_details_realtimeFeatureUsageHook )
    {
      LOBYTE(v7) = 3;
      g_wil_details_realtimeFeatureUsageHook(26769179LL, 2LL, v7);
    }
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(26769179LL, &v13, 0LL, 1LL, &v15, 0LL, 0, 1LL);
  }
  return 1;
}
