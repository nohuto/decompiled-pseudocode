/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@QEAA_NXZ @ 0x180330734
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032C750 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--I.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x1803322B0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032B20C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032DA00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_59011247@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_59011247>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59011247>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_59011247>::ReportUsage(a1, v5 & 1, v3);
  return v2;
}
