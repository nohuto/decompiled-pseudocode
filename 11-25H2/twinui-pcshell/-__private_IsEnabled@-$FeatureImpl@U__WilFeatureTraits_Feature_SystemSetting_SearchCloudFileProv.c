/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSettings@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1803B2AA4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_56370341@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1803AACD4 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_56370341@@@details@wil@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSettings@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803A9B08 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemSetting_SearchClou.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSettings@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803AFA48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSett.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSettings>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSettings>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemSetting_SearchCloudFileProviderSettings>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
