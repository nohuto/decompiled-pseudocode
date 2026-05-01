/*
 * XREFs of ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAX_N@Z @ 0x180335844
 * Callers:
 *     ?put_EnabledAtStartup@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAH_N@Z @ 0x180337100 (-put_EnabledAtStartup@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@Gamin.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     _anonymous_namespace_::SetConfigurationValue_unsigned_long_ @ 0x1803340A4 (_anonymous_namespace_--SetConfigurationValue_unsigned_long_.c)
 *     ??$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x180334584 (--$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803351A0 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335488 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803367C8 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::EnabledAtStartup(
        unsigned __int8 a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  int lpData; // [rsp+20h] [rbp-188h]
  unsigned int Data[4]; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v5[42]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v1 = a1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    anonymous_namespace_::SetConfigurationValue_unsigned_long_(c_enabledAtStartupValueName, v1, 0LL);
  }
  else
  {
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v5,
      (__int64)"SetConfigurationValueActivity");
    v5[0] = &GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::`vftable';
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::StartActivity<bool>(
      (__int64)v5,
      c_enabledAtStartupValueName,
      v1);
    Data[0] = v1;
    v2 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
           c_enabledAtStartupValueName,
           4u,
           Data,
           4u);
    if ( v2 > 0 )
      v2 = (unsigned __int16)v2 | 0x80070000;
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v2,
        lpData);
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v5);
  }
}
