/*
 * XREFs of ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEAAKXZ @ 0x1801DEA00
 * Callers:
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x1805CE320 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x1805CE330 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1805CE330.c)
 *     ?AddRef@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCA@EAAKXZ @ 0x1805CE340 (-AddRef@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@_ea_1805CE340.c)
 *     ?AddRef@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WCI@EAAKXZ @ 0x1805CE350 (-AddRef@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@_ea_1805CE350.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DashboardManager,winrt::Windows::Internal::Shell::DashboardManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::AddRef(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1 + 56);
}
