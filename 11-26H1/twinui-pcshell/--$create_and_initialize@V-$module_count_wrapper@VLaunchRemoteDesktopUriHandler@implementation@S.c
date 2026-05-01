/*
 * XREFs of ??$create_and_initialize@V?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@impl@winrt@@YAPEAV?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@XZ @ 0x18063B498
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18063B7C0 (-CreateInstance@-$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0?$producers_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIInspectable@Foundation@Windows@winrt@@UIExecuteCommand@@@std@@@impl@winrt@@QEAA@XZ @ 0x18063B638 (--0-$producers_base@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *winrt::impl::create_and_initialize<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>,>()
{
  _OWORD *v0; // rbx

  v0 = operator new(0x20uLL);
  *v0 = 0LL;
  v0[1] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>(v0);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)v0 + 24, 1LL);
  *(_QWORD *)v0 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>'};
  *((_QWORD *)v0 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v0 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,std::tuple<winrt::Windows::Foundation::IInspectable,IExecuteCommand>>'};
  *((_QWORD *)v0 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>>::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler,winrt::Windows::Foundation::IInspectable,IExecuteCommand>'};
  return v0;
}
