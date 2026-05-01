/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAA_NXZ @ 0x1803E585C
 * Callers:
 *     ?IsDashboardTaskbarButtonSettingsManagerEnabled@@YA_NXZ @ 0x1803E51F0 (-IsDashboardTaskbarButtonSettingsManagerEnabled@@YA_NXZ.c)
 *     ??0?$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x1805DD578 (--0-$module_count_wrapper@UDashboardTaskbarButtonSettingsManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803E4CF0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803E56A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57840822@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57840822>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
