/*
 * XREFs of ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800EB3E0
 * Callers:
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x180265CB0 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800EB4C0 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18058173C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TabThumbnailsRefreshedOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::__private_IsEnabledPreCheck(
        unsigned int *a1,
        char a2)
{
  unsigned int v2; // r8d
  char v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int16 v7; // [rsp+64h] [rbp+Ch]
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v8) = a2;
  v2 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    v9 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabThumbnailsRefreshedOnDemand>::GetCachedFeatureEnabledState(
                      a1,
                      &v9);
    v2 = v9;
  }
  v6 = 0;
  v7 = 3;
  v8 = 3;
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(a1 + 2, 26769179LL, (v2 >> 10) & 1, (v2 >> 11) & 1, 2, 0)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    v5 = 0;
    g_wil_details_pfnFeatureLoggingHook(26769179LL, &v6, 0LL, 1LL, &v8, 0LL, v5, 1LL);
  }
  return 1;
}
