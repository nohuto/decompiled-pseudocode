/*
 * XREFs of ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@UEAAKXZ @ 0x1801DE9D0
 * Callers:
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@W7EAAKXZ @ 0x180606020 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_180606020.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAKXZ @ 0x180606030 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_180606030.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAKXZ @ 0x180606040 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_180606040.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WCI@EAAKXZ @ 0x180606050 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_180606050.c)
 *     ?AddRef@?$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIThemeCoordinator@34567@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@@winrt@@WDA@EAAKXZ @ 0x180606060 (-AddRef@-$implements@UThemeCoordinator@implementation@Themes@UI@Internal@Windows@wi_ea_180606060.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator,winrt::immersive_shell_component,winrt::Windows::Internal::UI::Themes::IThemeCoordinator,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 64);
}
