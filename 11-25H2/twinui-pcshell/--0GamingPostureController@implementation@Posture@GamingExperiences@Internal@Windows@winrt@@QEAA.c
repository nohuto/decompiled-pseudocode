/*
 * XREFs of ??0GamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@QEAA@XZ @ 0x18032B708
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18032B434 (--0-$heap_implements@V-$module_count_wrapper@UGamingPostureController@implementation@Posture@Gam.c)
 * Callees:
 *     ??$?0W4EventOptions@wil@@@?$shared_any_t@V?$event_t@V?$shared_storage@V?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x1800A32A4 (--$-0W4EventOptions@wil@@@-$shared_any_t@V-$event_t@V-$shared_storage@V-$unique_any_t@V-$event_t.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??$?0W4EventOptions@wil@@$$V@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@$$QEAW4EventOptions@1@@Z @ 0x180328B04 (--$-0W4EventOptions@wil@@$$V@-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAX.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *__fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::GamingPostureController(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *this,
        __int64 a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)this + 11) = &winrt::impl::produce<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController,winrt::Windows::Internal::GamingExperiences::Posture::IGamingPostureController>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component(this, a2);
  *(_QWORD *)this = &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::`vftable';
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  v4 = 1;
  ____0W4EventOptions_wil____V___unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil__QEAA___QEAW4EventOptions_1__Z(
    (wil::details **)this + 15,
    &v4);
  v4 = 1;
  ____0W4EventOptions_wil_____shared_any_t_V__event_t_V__shared_storage_V__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_exception_policy_3__wil___wil___details_wil__Uerr_exception_policy_3__wil___wil__QEAA___QEAW4EventOptions_1__Z(
    (_QWORD *)this + 16,
    (unsigned int *)&v4);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (RTL_SRWLOCK *)this,
    (__int128 *)&SID_GamingPostureController);
  return this;
}
