/*
 * XREFs of ?OnShellSessionLogonComplete@XamlLauncher@@UEAAJXZ @ 0x18045C730
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ @ 0x18045A040 (-ConsiderShowStartAutomatically@XamlLauncher@@AEAAXXZ.c)
 *     ?ShellLogonCompleteObserved@StartWindowTelemetry@@SAXXZ @ 0x18045D194 (-ShellLogonCompleteObserved@StartWindowTelemetry@@SAXXZ.c)
 */

__int64 __fastcall XamlLauncher::OnShellSessionLogonComplete(XamlLauncher *this)
{
  StartWindowTelemetry::ShellLogonCompleteObserved();
  *((_BYTE *)XamlLauncher::s_pLauncher + 358) = 1;
  XamlLauncher::ConsiderShowStartAutomatically((XamlLauncher *)((char *)this - 88));
  return 0LL;
}
