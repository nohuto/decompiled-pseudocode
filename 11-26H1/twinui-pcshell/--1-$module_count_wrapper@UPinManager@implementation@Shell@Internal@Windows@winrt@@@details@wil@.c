/*
 * XREFs of ??1?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1805E3324
 * Callers:
 *     ??_E?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAAPEAXI@Z @ 0x1805E44A0 (--_E-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@_ea_1805E44A0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::~module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>(
        winrt::Windows::Internal::Shell::implementation::PinManager *this)
{
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::PinManager,std::tuple<winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3>>'};
  *((_QWORD *)this + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::impl::heap_implements<TouchGestureComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &TouchGestureComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  winrt::Windows::Internal::Shell::implementation::PinManager::~PinManager(this);
}
