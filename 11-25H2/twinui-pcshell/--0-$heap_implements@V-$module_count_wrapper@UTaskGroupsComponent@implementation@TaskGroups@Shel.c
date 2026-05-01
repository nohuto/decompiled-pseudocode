/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x180150EC0
 * Callers:
 *     ??$make@V?$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1802BE2F0 (--$make@V-$module_count_wrapper@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Wi.c)
 * Callees:
 *     ??0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180150F80 (--0TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *a1)
{
  winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)a1 + 5) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 6) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 7) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 9) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,void>'};
  *((_QWORD *)a1 + 5) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 6) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 7) = &winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 9) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent>>::`vftable';
  return a1;
}
