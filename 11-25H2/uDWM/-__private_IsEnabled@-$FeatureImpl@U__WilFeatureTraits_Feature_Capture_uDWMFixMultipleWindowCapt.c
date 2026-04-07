/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@QEAA_NXZ @ 0x1800C5180
 * Callers:
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800C4470 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C47D0 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800C4B10 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@M@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BE6BC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleW.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C0318 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures@@@d.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_uDWMFixMultipleWindowCaptures>::ReportUsage(
    (__int64)a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
