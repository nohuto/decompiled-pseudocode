/*
 * XREFs of ?Release@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@WBA@EAAKXZ @ 0x1803E0F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<NPSMDesktopShellComponent,winrt::immersive_shell_component,IApplicationViewChangeListener>::Release(
        __int64 a1)
{
  return winrt::implements<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,winrt::immersive_shell_component,IImeContextMenuExperienceManager>::Release(a1 - 16);
}
