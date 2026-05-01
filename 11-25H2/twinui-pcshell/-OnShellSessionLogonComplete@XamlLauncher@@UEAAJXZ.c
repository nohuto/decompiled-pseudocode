/*
 * XREFs of ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x18044FD00
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18044D9F8 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?ShellLogonCompleteObserved@StartWindowTelemetry@@SAXXZ @ 0x180450654 (-ShellLogonCompleteObserved@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellSessionLogonComplete(XamlLauncher *this)
{
  StartWindowTelemetry::ShellLogonCompleteObserved();
  *((_BYTE *)XamlLauncher::s_pLauncher + 358) = 1;
  XamlLauncher::ConsiderShowStartAutomatically((XamlLauncher *)((char *)this - 88));
  return 0LL;
}
