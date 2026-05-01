/*
 * XREFs of ?find_interface@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180203DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@67@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180605580 (--$find@U-$find_iid_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Wind_ea_180605580.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 64;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>(v3);
}
