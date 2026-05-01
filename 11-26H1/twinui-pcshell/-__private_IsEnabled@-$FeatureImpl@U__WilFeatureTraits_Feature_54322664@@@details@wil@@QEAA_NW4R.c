/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803BAD5C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803B314C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B1934 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B7810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_54322664@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_54322664>::ReportUsage(a1, v4 & 1, 0);
  return v2;
}
