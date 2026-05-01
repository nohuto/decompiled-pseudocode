/*
 * XREFs of ?GamingAppAumid@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SAXAEBUhstring@7@@Z @ 0x180335AF8
 * Callers:
 *     ?put_GamingAppAumid@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAX@Z @ 0x180337130 (-put_GamingAppAumid@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingE.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ @ 0x1803306B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57721926@@@details@wil@@QEAA_NXZ.c)
 *     _anonymous_namespace_::SetConfigurationValue_winrt::hstring_ @ 0x180334204 (_anonymous_namespace_--SetConfigurationValue_winrt--hstring_.c)
 *     ??$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEAPEBG$$QEAPEBG@Z @ 0x180334398 (--$Start@AEAPEBGPEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@A.c)
 *     ??1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x180335488 (--1SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803367C8 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::GamingAppAumid(
        const struct winrt::hstring *a1)
{
  unsigned int v2; // r8d
  winrt::hstring *v3; // rax
  const unsigned __int16 *v4; // rcx
  DWORD cbData; // eax
  __int64 v6; // rax
  int v7; // eax
  int lpData; // [rsp+20h] [rbp-188h]
  _QWORD v9[2]; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v10[336]; // [rsp+40h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57721926>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57721926>::GetImpl'::`2'::impl) )
  {
    v3 = winrt::hstring::hstring((winrt::hstring *)v9, a1, v2);
    anonymous_namespace_::SetConfigurationValue_winrt::hstring_(c_gamingAppAumidValueName, v3);
  }
  else
  {
    v9[0] = winrt::hstring::c_str(a1);
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::Start<unsigned short const * &,unsigned short const *>(
      (struct wil::details::IFailureCallback *)v10,
      &c_gamingAppAumidValueName,
      v9);
    v4 = winrt::hstring::c_str(a1);
    if ( v4 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v4[v6] );
      cbData = 2 * v6 + 2;
    }
    else
    {
      cbData = 0;
    }
    v7 = RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\GamingConfiguration",
           c_gamingAppAumidValueName,
           1u,
           v4,
           cbData);
    if ( v7 > 0 )
      v7 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C89,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v7,
        lpData);
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10);
    GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity::~SetConfigurationValueActivity((GamingPostureCoreTelemetryProvider::SetConfigurationValueActivity *)v10);
  }
}
