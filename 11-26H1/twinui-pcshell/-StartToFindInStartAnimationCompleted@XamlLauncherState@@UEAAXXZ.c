/*
 * XREFs of ?StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ @ 0x180462FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802489C0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 */

void __fastcall XamlLauncherState::StartToFindInStartAnimationCompleted(XamlLauncherState *this)
{
  XamlLauncherState *v1; // rcx

  v1 = (XamlLauncherState *)((char *)this - 24);
  if ( *((_DWORD *)v1 + 16) == 12 )
    XamlLauncherState::OnCortanaTransitionRequested(v1, 0LL, 0LL);
}
