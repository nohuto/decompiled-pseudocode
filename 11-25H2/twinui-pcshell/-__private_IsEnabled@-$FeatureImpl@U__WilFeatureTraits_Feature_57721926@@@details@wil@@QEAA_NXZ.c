/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180331758
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     ?subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180333CE0 (-subscribe_to_services@GamingPostureController@implementation@Posture@GamingExperiences@Internal.c)
 *     _anonymous_namespace_::GetConfigurationValue_unsigned_long_ @ 0x180334188 (_anonymous_namespace_--GetConfigurationValue_unsigned_long_.c)
 *     _anonymous_namespace_::GetConfigurationValue_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____ @ 0x1803343C0 (_anonymous_namespace_--GetConfigurationValue_std--basic_string_unsigned_short_std--char_traits_u.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335F6C (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@W.c)
 *     ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x1803361CC (-GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences_ea_1803361CC.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18032DB0C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18032F5B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAAX_NW4Reportin.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled(wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::GetCachedFeatureEnabledState(a1, &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::ReportUsage(a1, v6 & 1, v3, v4);
  return v2;
}
