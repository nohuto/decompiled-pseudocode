/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_KVS_BugFixes_60068485@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180079B9C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x180078750 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_SerializedQuiesceFix@@@.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_KVS_BugFixes_60068485@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180077DE8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_KVS_BugFixes_60068485@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KVS_BugFixes_60068485@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800797E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KVS_BugFixes_60068485@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_KVS_BugFixes_60068485>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KVS_BugFixes_60068485>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_KVS_BugFixes_60068485>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
