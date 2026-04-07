/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800A690C
 * Callers:
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureProxyWindows@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009FE18 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCapture.c)
 *     ?GetCurrentFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_FilteredCaptureWindowDataCheck@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@PEAH@Z @ 0x18009FF20 (-GetCurrentFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_Fi_ea_18009FF20.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009F868 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@w.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1260 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestLoc1Perf@@@details@wil@@QEAAX_NW4Repo.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestLoc1Perf>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
