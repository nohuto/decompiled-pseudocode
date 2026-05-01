/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18064D594
 * Callers:
 *     ??$make@V?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18064D4B8 (--$make@V-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0RdpShellExtensionHost@@QEAA@XZ @ 0x18064D750 (--0RdpShellExtensionHost@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
RdpShellExtensionHost *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<RdpShellExtensionHost>>::heap_implements<wil::details::module_count_wrapper<RdpShellExtensionHost>>(
        RdpShellExtensionHost *a1)
{
  RdpShellExtensionHost::RdpShellExtensionHost(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<RdpShellExtensionHost>::`vftable';
  return a1;
}
