/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAA_NXZ @ 0x1803DC9E4
 * Callers:
 *     ?IsDashboardTaskbarButtonSettingsManagerEnabled@@YA_NXZ @ 0x1803DC370 (-IsDashboardTaskbarButtonSettingsManagerEnabled@@YA_NXZ.c)
 *     ??0?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1805B9A34 (--0-$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803DBC90 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DC840 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
