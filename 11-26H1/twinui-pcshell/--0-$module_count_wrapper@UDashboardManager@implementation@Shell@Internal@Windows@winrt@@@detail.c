/*
 * XREFs of ??0?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180211B30
 * Callers:
 *     ??$make@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180211A94 (--$make@V-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 * Callees:
 *     ??0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180211BB0 (--0DashboardManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::implementation::DashboardManager *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *a1)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager::DashboardManager(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::DashboardManager,IEdgeUiTouchInvocation,void>'};
  *((_QWORD *)a1 + 3) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 5) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 7) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
