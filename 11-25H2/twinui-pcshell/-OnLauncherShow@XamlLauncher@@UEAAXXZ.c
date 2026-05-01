/*
 * XREFs of ?OnLauncherShow@XamlLauncher@@UEAAXXZ @ 0x180196CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180197398 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherShow(XamlLauncher *this)
{
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 1);
  *((_DWORD *)this + 72) = 0;
  wistd::unique_ptr<FocusHoldingTank,wistd::default_delete<FocusHoldingTank>>::reset(
    (FocusHoldingTank **)this + 10,
    0LL);
}
