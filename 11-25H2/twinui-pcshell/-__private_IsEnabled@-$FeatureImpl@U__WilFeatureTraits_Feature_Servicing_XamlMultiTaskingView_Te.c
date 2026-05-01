/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert@@@details@wil@@QEAA_NXZ @ 0x180680FB4
 * Callers:
 *     ?CreateFrames@TaskViewHost@@AEAAJXZ @ 0x180108C7C (-CreateFrames@TaskViewHost@@AEAAJXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18067F40C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_X_ea_18067F40C.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806800D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryA.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_XamlMultiTaskingView_TelemetryAssert>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
