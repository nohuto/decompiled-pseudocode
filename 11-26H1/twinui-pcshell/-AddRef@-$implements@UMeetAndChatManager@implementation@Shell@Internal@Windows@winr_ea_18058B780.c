/*
 * XREFs of ?AddRef@?$implements@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@@winrt@@WCA@EAAKXZ @ 0x18058B780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::MeetAndChatManager,winrt::Windows::Internal::Shell::MeetAndChatManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification>::AddRef(
        __int64 a1)
{
  return winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::AddRef(a1 - 32);
}
