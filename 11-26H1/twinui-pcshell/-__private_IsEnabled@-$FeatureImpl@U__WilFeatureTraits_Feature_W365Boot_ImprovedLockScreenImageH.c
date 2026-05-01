/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@QEAA_NXZ @ 0x180669A5C
 * Callers:
 *     ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180668E40 (-GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180668B8C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180669898 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling@.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_ImprovedLockScreenImageHandling>::ReportUsage(
    a1,
    v5 & 1,
    v3);
  return v2;
}
