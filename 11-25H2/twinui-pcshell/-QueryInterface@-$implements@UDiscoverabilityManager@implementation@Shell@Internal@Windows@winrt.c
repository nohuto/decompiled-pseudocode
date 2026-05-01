/*
 * XREFs of ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802972A0
 * Callers:
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805B17B0 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U134.c)
 *     ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805B17C0 (-QueryInterface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@_ea_1805B17C0.c)
 *     ?QueryInterface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805B17D0 (-QueryInterface@-$implements@UDashboardManager@implementation@Shell@Internal@Window_ea_1805B17D0.c)
 *     ?QueryInterface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805B17E0 (-QueryInterface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@_ea_1805B17E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager,winrt::Windows::Internal::Shell::DiscoverabilityManager,IApplicationViewChangeListener,IWindowSnappingEvents,winrt::immersive_shell_component>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
           a1 + 56,
           a2,
           a3);
}
