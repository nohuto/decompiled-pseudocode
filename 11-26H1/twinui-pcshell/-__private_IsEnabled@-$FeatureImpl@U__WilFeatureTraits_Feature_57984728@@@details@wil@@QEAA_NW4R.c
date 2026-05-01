/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18039CB64
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18039B410 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_58642880@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18039AED4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18039C5A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57984728@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57984728>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
