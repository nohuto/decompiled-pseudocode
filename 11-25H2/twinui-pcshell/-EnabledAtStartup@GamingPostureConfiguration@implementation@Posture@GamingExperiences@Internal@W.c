/*
 * XREFs of ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335F6C
 * Callers:
 *     ?put_EnabledAtStartup@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAH_N@Z @ 0x180337670 (-put_EnabledAtStartup@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@Gamin.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x180331758 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x1803348B0 (_anonymous_namespace_--SetConfigurationValue_unsigned_long_.c)
 *     ??$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x180334D58 (--$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_.c)
 *     ??$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z @ 0x180335704 (--$set_value@I@reg@wil@@YAXPEAUHKEY__@@PEBG1AEBI@Z.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803359A8 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335C88 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180336D44 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::EnabledAtStartup(
        unsigned __int8 a1)
{
  unsigned int v1; // ebx
  unsigned int v2[4]; // [rsp+20h] [rbp-178h] BYREF
  _QWORD v3[42]; // [rsp+30h] [rbp-168h] BYREF

  v1 = a1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    anonymous_namespace_::SetConfigurationValue_unsigned_long_(*(__int64 *)&c_enabledAtStartupValueName, v1, 0LL);
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v3,
      (__int64)"SetConfigurationValueActivity");
    v3[0] = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<bool>(
      (__int64)v3,
      *(const WCHAR **)&c_enabledAtStartupValueName,
      v1);
    v2[0] = v1;
    wil::reg::set_value<unsigned int>(
      HKEY_CURRENT_USER,
      L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
      *(const WCHAR **)&c_enabledAtStartupValueName,
      v2);
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v3);
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v3);
  }
}
