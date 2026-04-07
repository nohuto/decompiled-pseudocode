/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AD198
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AB0B4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2507@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AA6B0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ACA00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2506@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2506>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2506>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2506>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
