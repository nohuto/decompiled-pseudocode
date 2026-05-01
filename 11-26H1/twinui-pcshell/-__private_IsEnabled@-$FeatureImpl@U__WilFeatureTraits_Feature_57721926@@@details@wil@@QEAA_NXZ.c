/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180249650 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032A720 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--E.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032ABD0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032ABD0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ @ 0x180330FC4 (-evaluate@_tip_GamingPostureControllerStateChangeTest@@QEAAXXZ.c)
 *     ?subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180333430 (-subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal.c)
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180333A04 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x180333C28 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335844 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x180335AF8 (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_180335AF8.c)
 *     ?OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F484 (-OnViewCreatedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032B064 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032D8E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::GetCachedFeatureEnabledState(a1, &v4);
  v2 = v4 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::ReportUsage(a1, v4 & 1, 3u);
  return v2;
}
