/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes@@@details@wil@@QEAA_NXZ @ 0x1803EA658
 * Callers:
 *     ?SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJE@Z @ 0x1803EA440 (-SetPenMenuVisibility@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803EA060 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInte.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803EA3B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes@@@detail.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PenWorkSpaceAutoHideInteropFixes>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
