/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18045D948
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18045AB8C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_60149580@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18045A36C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18045CDC8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54629273@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54629273>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
