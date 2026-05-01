/*
 * XREFs of ??1?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x18063ACC0
 * Callers:
 *     ??_G?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x18063AD90 (--_G-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this)
{
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,std::tuple<IImeContextMenuExperienceManager>>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::~ImeContextMenuManager(this);
}
