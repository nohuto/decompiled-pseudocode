/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAA_NXZ @ 0x1805DAAE4
 * Callers:
 *     _anonymous_namespace_::GetDashboardExtensionName @ 0x1805D21D8 (_anonymous_namespace_--GetDashboardExtensionName.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1805D027C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805D5E34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_55368383@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_55368383>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
