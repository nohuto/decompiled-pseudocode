/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180504E24
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60153759@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1804FC800 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60153759@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1804FB69C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180502BDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59980251@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59980251>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
