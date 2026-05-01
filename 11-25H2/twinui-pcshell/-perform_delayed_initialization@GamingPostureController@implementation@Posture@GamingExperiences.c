/*
 * XREFs of ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x180332DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?value@?$optional@_N@std@@QEGAAAEA_NXZ @ 0x1802CF7AC (-value@-$optional@_N@std@@QEGAAAEA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802ED918 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??$InitializedGamingPostureController@AEA_N@GamingPostureCoreTelemetryProvider@@SAXAEA_N@Z @ 0x180329388 (--$InitializedGamingPostureController@AEA_N@GamingPostureCoreTelemetryProvider@@SAXAEA_N@Z.c)
 *     ??$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEA_N$$QEA_N@Z @ 0x180329518 (--$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@AEA_N.c)
 *     ??$wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18032AFA0 (--$wnf_query@K@wil@@YA_NAEBU_WNF_STATE_NAME@@PEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18032B1CC (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAA_ea_18032B1CC.c)
 *     ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18032BDF0 (--1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ.c)
 *     ?InitializeGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_N@Z @ 0x18032E974 (-InitializeGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperien.c)
 *     ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x180330354 (-SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 *     ?Stop@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180330634 (-Stop@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgRe.c)
 *     ?EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA_NXZ @ 0x180336038 (-EnabledAtStartup@GamingPostureConfiguration@implementation@Posture@GamingExperienc_ea_180336038.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *this,
        __int64 a2,
        __int64 a3)
{
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *v3; // rbx
  wil *v4; // rcx
  char *v5; // rax
  bool *v6; // rax
  char *v7; // rax
  char *v8; // rax
  _WORD v9[2]; // [rsp+20h] [rbp-2C8h] BYREF
  char v10; // [rsp+24h] [rbp-2C4h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-2C0h] BYREF
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *v12; // [rsp+30h] [rbp-2B8h] BYREF
  _QWORD v13[41]; // [rsp+38h] [rbp-2B0h] BYREF
  __int64 v14[42]; // [rsp+180h] [rbp-168h] BYREF

  try
  {
    v3 = this;
    v12 = this;
    HIBYTE(v9[0]) = 0;
    LODWORD(v11) = 0;
    if ( wil::wnf_query<unsigned long>((__int64)this, (__int64)&v11, a3) )
    {
      LOBYTE(v9[0]) = (_DWORD)v11 != 0;
      HIBYTE(v9[0]) = 1;
    }
    if ( !HIBYTE(v9[0]) )
    {
      LOBYTE(v9[0]) = winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::EnabledAtStartup();
      HIBYTE(v9[0]) = 1;
    }
  }
  catch ( ... )
  {
    v9[0] = 256;
    LODWORD(v11) = wil::ResultFromCaughtException(v4);
    GamingPostureCoreTelemetryProvider::HandledUnexpectedException<unsigned short const (&)[58],long>();
    v3 = v12;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    v5 = (char *)std::optional<bool>::value((__int64)v9);
    winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync(
      (__int64)v3,
      (__int64 *)&v12,
      *v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    v10 = 1;
    v6 = (bool *)std::optional<bool>::value((__int64)v9);
    GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::Start<bool &,bool>(
      (GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)v14,
      v6,
      (bool *)&v10);
    v11 = v13;
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v13,
      (__int64)v14);
    v13[0] = &GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::`vftable';
    v7 = (char *)std::optional<bool>::value((__int64)v9);
    winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync(
      (__int64)v3,
      (__int64 *)&v12,
      *v7,
      (GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)v13);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
    wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
    GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)v14);
  }
  *((_BYTE *)v3 + 112) = 1;
  v8 = (char *)std::optional<bool>::value((__int64)v9);
  GamingPostureCoreTelemetryProvider::InitializedGamingPostureController<bool &>(v8);
}
