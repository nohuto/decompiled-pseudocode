/*
 * XREFs of ?OnDaemonTimerRateChanged@ShellForegroundBoost@@YAX_N@Z @ 0x1401DB190
 * Callers:
 *     <none>
 * Callees:
 *     ?DeBoostAll@CShellForegroundBoost@@QEAAXXZ @ 0x1402266F4 (-DeBoostAll@CShellForegroundBoost@@QEAAXXZ.c)
 */

void __fastcall ShellForegroundBoost::OnDaemonTimerRateChanged(ShellForegroundBoost *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  if ( !(_BYTE)this )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    CShellForegroundBoost::DeBoostAll(*(CShellForegroundBoost **)(UserSessionState + 18880));
  }
}
