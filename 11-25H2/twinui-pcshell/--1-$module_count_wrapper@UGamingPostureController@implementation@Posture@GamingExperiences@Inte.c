/*
 * XREFs of ??1?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18032BBA4
 * Callers:
 *     ??_G?$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x18032C25C (--_G-$module_count_wrapper@UGamingPostureController@implementation@Posture@GamingExperiences@Int.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>::~module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>(
        winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController *this)
{
  *(_QWORD *)this = &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::~GamingPostureController(this);
}
