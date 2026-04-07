/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800A6894
 * Callers:
 *     ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A16B0 (-SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800A1F90 (-StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18009F22C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0FE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::ReportUsage(
    (volatile signed __int32 *)a1,
    v5 & 1,
    v3);
  return v2;
}
