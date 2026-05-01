/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAA_NXZ @ 0x180330770
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ @ 0x180330FC4 (-evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032B2E0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032DA88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59783520@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59783520>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59783520>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59783520>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
