/*
 * XREFs of ??1GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAA@XZ @ 0x180329124
 * Callers:
 *     ??1?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180328F08 (--1-$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Inte.c)
 *     ??_GGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1803297EC (--_GGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UEA.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController____::_1_::dtor$1 @ 0x1806E1A9B (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--Internal--Gamin.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800CA0BC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1801FDA14 (--1-$shared_ptr@UConnectingState@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802C5B98 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 */

void __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::~GamingPostureController(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *this)
{
  void *v2; // rdx

  std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)this + 20);
  if ( *((_QWORD *)this + 19) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 19);
  if ( *((_QWORD *)this + 18) )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)this + 18);
  std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>::~shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectingState>((__int64)this + 128);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 15,
    v2);
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
