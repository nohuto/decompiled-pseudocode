/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800AD33C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayManagerFail@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x1800AB770 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_HandleEnsureDDisplayMan.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800AACB4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800ACD9C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisplayBugBundle_2602@@@details@wil@@QEAA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2602>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2602>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisplayBugBundle_2602>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
