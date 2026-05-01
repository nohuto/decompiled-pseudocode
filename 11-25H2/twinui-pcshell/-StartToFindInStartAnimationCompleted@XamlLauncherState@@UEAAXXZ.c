/*
 * XREFs of ?StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ @ 0x1804567A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802542D0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 */

void __fastcall XamlLauncherState::StartToFindInStartAnimationCompleted(XamlLauncherState *this)
{
  if ( *((_DWORD *)this + 10) == 12 )
    XamlLauncherState::OnCortanaTransitionRequested((XamlLauncherState *)((char *)this - 24), 0LL, 0LL);
}
