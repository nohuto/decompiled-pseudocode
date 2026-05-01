/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18067754C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1806762CC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56880023@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1806751A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806753B8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55536872@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r9
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55536872>::ReportUsage(a1, v5 & 1, 0, v3);
  return v2;
}
