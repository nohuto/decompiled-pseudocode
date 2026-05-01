/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1802C87B4
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180614AEC (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizationsInApplistB.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180124EBC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180200CD0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MercuryADEPTAppBackup@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MercuryADEPTAppBackup>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MercuryADEPTAppBackup>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MercuryADEPTAppBackup>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
