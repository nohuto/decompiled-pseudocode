/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAA_NXZ @ 0x18000DDD4
 * Callers:
 *     IsGamingFullScreenExperienceSupported @ 0x18000E8A0 (IsGamingFullScreenExperienceSupported.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18000A338 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000CD54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_50902630@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_50902630>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
