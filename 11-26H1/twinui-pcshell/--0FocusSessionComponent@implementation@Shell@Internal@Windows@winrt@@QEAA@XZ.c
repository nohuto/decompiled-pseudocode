/*
 * XREFs of ??0FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18018877C
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1801886E8 (--0-$heap_implements@V-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Interna.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180188854 (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??0?$producers_base@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIFocusSessionComponent@Shell@Internal@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x1801889B8 (--0-$producers_base@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@V-$tuple.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x180188A40 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *__fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::FocusSessionComponent(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this)
{
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,std::tuple<winrt::Windows::Internal::Shell::IFocusSessionComponent>>::producers_base<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,std::tuple<winrt::Windows::Internal::Shell::IFocusSessionComponent>>((char *)this + 88);
  winrt::immersive_shell_component::immersive_shell_component(this);
  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardTaskbarButtonSettingsManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::CloudPCComponent::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(this, &unk_180787BE0);
  return this;
}
