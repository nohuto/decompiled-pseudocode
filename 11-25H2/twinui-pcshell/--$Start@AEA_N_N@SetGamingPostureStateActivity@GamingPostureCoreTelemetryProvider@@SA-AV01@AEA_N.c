/*
 * XREFs of ??$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEA_N$$QEA_N@Z @ 0x180329518
 * Callers:
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032E5A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032E5A0.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x180332DD0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 * Callees:
 *     ??0?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032B288 (--0-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAA_ea_18032B288.c)
 *     ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18033048C (-StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=1
GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *__fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::Start<bool &,bool>(
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *this,
        bool *a2,
        bool *a3)
{
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::`vftable';
  GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::StartActivity(this, *a2, *a3);
  return this;
}
