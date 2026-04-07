/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x1800C5234
 * Callers:
 *     ?StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800C0E20 (-StartFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800BEA40 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C04AC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAAX_NW4Report.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::ReportUsage((__int64)a1, v6 & 1, v3, v4);
  return v2;
}
