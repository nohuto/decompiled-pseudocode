/*
 * XREFs of ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x1800508D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800505E8 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherShow(XamlLauncher *this)
{
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 1u);
  *((_DWORD *)this + 72) = 0;
  wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset((char *)this + 80, 0LL);
}
