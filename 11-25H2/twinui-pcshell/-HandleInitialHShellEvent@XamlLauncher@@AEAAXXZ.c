/*
 * XREFs of ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x1802C7260
 * Callers:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D6234 (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180108940 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180197398 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1801D62F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18021FD50 (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x1804518CC (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 */

void __fastcall XamlLauncher::HandleInitialHShellEvent(XamlLauncher *this, enum _TABLETMODESTATE *a2)
{
  char IsTabletMode; // bl
  PerSessionState *v4; // rcx
  enum _TABLETMODESTATE *v5; // rdx
  PerSessionState *v6; // rcx
  unsigned __int8 v7; // al

  IsTabletMode = TabletModeHelpers::IsTabletMode(this, a2);
  if ( PerSessionState::HasLoginCompleted(v4) )
  {
    LOBYTE(v6) = IsTabletMode;
    if ( !PerSessionState::IsLauncherVisible(v6, (bool)v5) )
      return;
    XamlLauncher::PublishLauncherVisibilityState((ImmersiveMonitorHelper **)this, 0);
  }
  else if ( !IsTabletMode )
  {
    return;
  }
  v7 = TabletModeHelpers::IsTabletMode(v6, v5);
  XamlLauncher::ShowStartView((__int64)this + 24, 1u, 4 * v7);
}
