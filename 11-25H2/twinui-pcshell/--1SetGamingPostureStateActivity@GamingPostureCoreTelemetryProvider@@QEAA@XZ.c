/*
 * XREFs of ??1SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAA@XZ @ 0x18032BDF0
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync_::_67_::_parameters_::__parameters_ @ 0x18032B940 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::EnterGamingPostureAsync$_ResumeCoro$1 @ 0x18032D390 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D390.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1 @ 0x18032D7D0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032D7D0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032E5A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032E5A0.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     ?SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@67@_NVSetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@@Z @ 0x180330354 (-SetGamingPostureStateAsync@GamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 *     ?perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAXXZ @ 0x180332DD0 (-perform_delayed_initialization@GamingPostureController@implementation@Posture@GamingExperiences.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::ExitGamingPostureAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806BACDF (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BACDF.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::InitializeGamingPostureStateAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806BAEC1 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BAEC1.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync_::_1_::dtor$0 @ 0x1806BB4A6 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB4A6.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::dtor$1 @ 0x1806BB9D5 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB9D5.c)
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::perform_delayed_initialization_::_1_::dtor$2 @ 0x1806BB9E7 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806BB9E7.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032D1E4 (-Destroy@-$ActivityBase@VGamingPostureCoreTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_Tl.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::~SetGamingPostureStateActivity(
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *this)
{
  *(_QWORD *)this = &GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::`vftable';
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureCoreTelemetryProvider,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
