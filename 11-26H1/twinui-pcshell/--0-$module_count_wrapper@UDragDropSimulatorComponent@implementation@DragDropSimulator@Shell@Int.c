/*
 * XREFs of ??0?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x180292B38
 * Callers:
 *     ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180579240 (-CreateInstance@-$wrl_factory_for_winrt_com_class@UDragDropSimulatorComponent@implementation@Dra.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0?$producers_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@V?$tuple@UIDragDropSimulator@DragDropSimulator@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x180292BFC (--0-$producers_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
winrt::immersive_shell_component *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>(
        winrt::immersive_shell_component *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,std::tuple<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>>::producers_base<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,std::tuple<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>>((char *)this + 88);
  winrt::immersive_shell_component::immersive_shell_component(this, v2, v3);
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 52) = 0;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (RTL_SRWLOCK *)this,
    (__int128 *)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>);
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return this;
}
