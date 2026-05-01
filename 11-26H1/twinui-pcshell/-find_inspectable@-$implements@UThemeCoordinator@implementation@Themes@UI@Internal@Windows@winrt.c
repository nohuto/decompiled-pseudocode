/*
 * XREFs of ?find_inspectable@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x180607BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_inspectable_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIThemeCoordinator@Themes@UI@Internal@67@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@impl@winrt@@SA?A_PAEBU?$find_inspectable_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@@12@@Z @ 0x180605634 (--$find@U-$find_inspectable_traits@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@w.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find_inspectable(
        __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 64;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::find<winrt::impl::find_inspectable_traits<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator>>(&v2);
}
