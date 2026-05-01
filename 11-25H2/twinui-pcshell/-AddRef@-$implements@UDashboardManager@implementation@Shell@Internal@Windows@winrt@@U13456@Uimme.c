/*
 * XREFs of ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAKXZ @ 0x180295B60
 * Callers:
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x1805AA020 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x1805AA030 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1805AA030.c)
 *     ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCA@EAAKXZ @ 0x1805AA040 (-AddRef@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@_ea_1805AA040.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WCI@EAAKXZ @ 0x1805AA050 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1805AA050.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 56);
}
