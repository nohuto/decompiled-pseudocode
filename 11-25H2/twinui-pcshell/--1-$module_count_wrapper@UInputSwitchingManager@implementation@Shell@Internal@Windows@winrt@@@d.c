/*
 * XREFs of ??1?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180202A80
 * Callers:
 *     ??_E?$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x180202A44 (--_E-$module_count_wrapper@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager,std::tuple<IInputSwitchExperienceManager>>'};
  *((_QWORD *)this + 1) = &winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::~InputSwitchingManager(this, a2);
}
