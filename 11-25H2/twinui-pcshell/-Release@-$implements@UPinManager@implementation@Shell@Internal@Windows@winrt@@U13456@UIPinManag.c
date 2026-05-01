/*
 * XREFs of ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@UEAAKXZ @ 0x180221270
 * Callers:
 *     ?Release@?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@W7EAAKXZ @ 0x180567E50 (-Release@-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindow.c)
 *     ?Release@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WBA@EAAKXZ @ 0x180567E60 (-Release@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Ui.c)
 *     ?Release@?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop3@@Uimmersive_shell_component@6@@winrt@@WBI@EAAKXZ @ 0x180567E70 (-Release@-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U134_ea_180567E70.c)
 *     ?Release@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAKXZ @ 0x180567E80 (-Release@-$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@win_ea_180567E80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release((volatile signed __int64 *)(a1 + 48));
}
