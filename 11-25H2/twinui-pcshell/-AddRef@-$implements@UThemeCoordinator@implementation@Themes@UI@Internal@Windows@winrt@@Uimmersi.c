/*
 * XREFs of ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAKXZ @ 0x180236E40
 * Callers:
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@W7EAAKXZ @ 0x1805E1400 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_1805E1400.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAKXZ @ 0x1805E1410 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_1805E1410.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAKXZ @ 0x1805E1420 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_1805E1420.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WCI@EAAKXZ @ 0x1805E1430 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_1805E1430.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WDA@EAAKXZ @ 0x1805E1440 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_1805E1440.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 64);
}
