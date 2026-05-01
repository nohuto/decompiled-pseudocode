/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@QEAA_NXZ @ 0x1803B278C
 * Callers:
 *     ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800126F8 (-SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A8E88 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AF2F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_56470062@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_56470062>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56470062>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_56470062>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
