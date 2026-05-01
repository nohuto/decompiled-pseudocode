/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803BB12C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803B314C (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_53852258@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803B24CC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803B7F84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master@@@detai.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master>::GetCachedFeatureEnabledState(
    a1,
    &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullTrustUndockedSearchApp_Master>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
