/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18063653C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180624D3C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806250D4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID57755134@@@details@wi.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180624130 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180633D40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
