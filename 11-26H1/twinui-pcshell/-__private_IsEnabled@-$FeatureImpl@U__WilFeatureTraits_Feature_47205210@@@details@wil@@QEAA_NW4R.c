/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_47205210@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18038B2B8
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_49221331@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180388B08 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_49221331@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_47205210@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803886E4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_47205210@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_47205210@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18038AA7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_47205210@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_47205210>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_47205210>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_47205210>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
