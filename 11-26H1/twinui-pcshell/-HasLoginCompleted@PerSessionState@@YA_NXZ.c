/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x180211470
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180244780 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180246410 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802BE160 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ @ 0x18045B19C (-InitializeAutomaticInvokeTrackingInformation@XamlLauncher@@AEAAJXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18045C6D0 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x1801F92B0 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1802C89CC (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_1808DCB95;
  if ( !byte_1808DCB95 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_1808DCB95 = result;
  }
  return result;
}
