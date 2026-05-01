/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MDW@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1805B7478
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1805AD02C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MDW@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805AC9E8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MDW@@@details@wil@@AEAA-.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MDW@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805B24AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MDW@@@details@wil@@QEAAX_NW4ReportingKind.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MDW>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MDW>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MDW>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
