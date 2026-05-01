/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180619988
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18061A940 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDiscoverabilityManager@implementation@Shell@I.c)
 * Callees:
 *     ??0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180619D24 (--0DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *a1)
{
  winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 1) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IWindowSnappingEvents,void>'};
  *((_QWORD *)a1 + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 7) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 1) = &winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,IWindowSnappingEvents,void>'};
  *((_QWORD *)a1 + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 7) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>::`vftable';
  return a1;
}
