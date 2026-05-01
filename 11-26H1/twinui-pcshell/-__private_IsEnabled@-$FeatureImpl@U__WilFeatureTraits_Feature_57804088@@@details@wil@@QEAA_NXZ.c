/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x1803306F8
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034AD98 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1 @ 0x18034C420 (GamingOverlayExperienceManager--LaunchForResultsAsyncInternal$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1_::_1_::catch$149 @ 0x1806E25A7 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E25A7.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032B138 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032D978 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
