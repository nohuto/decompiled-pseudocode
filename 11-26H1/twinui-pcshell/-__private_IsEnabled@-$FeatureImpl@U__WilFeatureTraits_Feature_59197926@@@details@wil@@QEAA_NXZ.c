/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@QEAA_NXZ @ 0x180504D34
 * Callers:
 *     ?IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804FEE84 (-IsGamingAppView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB34C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805029BC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59197926@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59197926>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59197926>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59197926>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
