/*
 * XREFs of ?QueryInterface@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180567E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::QueryInterface(
        __int64 a1)
{
  return winrt::implements<TouchGestureComponent,winrt::immersive_shell_component,IGlobalRudeWindowNotifications,IInputHostLayoutChanges>::QueryInterface(a1 - 32);
}
