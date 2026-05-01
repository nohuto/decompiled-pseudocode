/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix@@@details@wil@@QEAA_NXZ @ 0x1805F8A68
 * Callers:
 *     ?unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805F9090 (-unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805F672C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHa.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805F853C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bu.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
