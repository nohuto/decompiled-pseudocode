/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18021FD50
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180250190 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180251E10 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C7260 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18044E708 (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18044FCA0 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x1802050C0 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802D1D34 (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_18089C4DD;
  if ( !byte_18089C4DD )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_18089C4DD = result;
  }
  return result;
}
