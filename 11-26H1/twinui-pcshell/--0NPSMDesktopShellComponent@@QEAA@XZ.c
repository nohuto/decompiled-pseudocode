/*
 * XREFs of ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x18060FE58
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18060FDB0 (--0-$heap_implements@V-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@win.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0?$producers_base@VNPSMDesktopShellComponent@@V?$tuple@UIApplicationViewChangeListener@@@std@@@impl@winrt@@QEAA@XZ @ 0x180232770 (--0-$producers_base@VNPSMDesktopShellComponent@@V-$tuple@UIApplicationViewChangeListener@@@std@@.c)
 */

// Hidden C++ exception states: #wind=5
NPSMDesktopShellComponent *__fastcall NPSMDesktopShellComponent::NPSMDesktopShellComponent(
        NPSMDesktopShellComponent *this)
{
  RTL_SRWLOCK *v2; // rcx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>((__int64)this);
  v3 = v2 + 1;
  winrt::immersive_shell_component::immersive_shell_component((winrt::immersive_shell_component *)&v2[1], v4, v5);
  *(_QWORD *)this = &NPSMDesktopShellComponent::`vftable'{for `winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>'};
  v3->Ptr = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &NPSMDesktopShellComponent::`vftable'{for `winrt::immersive_shell_component'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v3, &xmmword_1807BFD80);
  return this;
}
