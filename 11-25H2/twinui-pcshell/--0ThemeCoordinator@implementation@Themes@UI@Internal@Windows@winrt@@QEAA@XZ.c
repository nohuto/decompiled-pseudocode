/*
 * XREFs of ??0ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@QEAA@XZ @ 0x180150B48
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1802B9884 (--0-$heap_implements@V-$module_count_wrapper@UThemeCoordinator@implementation@Themes@UI@Internal.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x180151C9C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1801522D0 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0?$producers_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@V?$tuple@UIThemeCoordinator@Themes@UI@Internal@Windows@winrt@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@std@@@impl@winrt@@QEAA@XZ @ 0x18029C520 (--0-$producers_base@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@V-$tuple@.c)
 */

// Hidden C++ exception states: #wind=13
winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *__fastcall winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator(
        winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  winrt::impl::producers_base<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,std::tuple<winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>>::producers_base<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,std::tuple<winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>>();
  winrt::immersive_shell_component::immersive_shell_component((winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator *)((char *)this + 32));
  *(_QWORD *)this = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveMonitorNotification,void>'};
  *((_QWORD *)this + 1) = &wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveSessionIdleNotification,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>::`vftable'{for `winrt::impl::producer_convert<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 5) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 6) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 8) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable';
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((GUID *)this + 12) = GUID_NULL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 28) = v2;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 30) = v3;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 312) = 0;
  winrt::immersive_shell_component::register_service_information<_GUID const>(
    (char *)this + 32,
    &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::UI::Themes::IThemeCoordinator>>::value);
  return this;
}
