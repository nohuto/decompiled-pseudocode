/*
 * XREFs of ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801757C0
 * Callers:
 *     ?QueryInterface@?$implements@VTouchGestureComponent@@Uimmersive_shell_component@winrt@@UIGlobalRudeWindowNotifications@@UIInputHostLayoutChanges@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18058BCC0 (-QueryInterface@-$implements@VTouchGestureComponent@@Uimmersive_shell_component@win_ea_18058BCC0.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18058BCD0 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIP.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18058BCE0 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_18058BCE0.c)
 *     ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18058BCF0 (-QueryInterface@-$implements@UPinManager@implementation@Shell@Internal@Windows@winr_ea_18058BCF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<TouchGestureComponent,winrt::immersive_shell_component,IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a1 + 48);
}
