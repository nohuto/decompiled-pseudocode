/*
 * XREFs of ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18022AC90
 * Callers:
 *     ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180567E00 (-QueryInterface@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@win_ea_180567E00.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180567E10 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIP.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180567E20 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_180567E20.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180567E30 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_180567E30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component,IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 48);
}
