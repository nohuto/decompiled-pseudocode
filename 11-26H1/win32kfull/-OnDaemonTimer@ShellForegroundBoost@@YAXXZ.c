/*
 * XREFs of ?OnDaemonTimer@ShellForegroundBoost@@YAXXZ @ 0x1400FA1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z @ 0x1400FA230 (-DeBoostIfTime@CShellForegroundBoost@@QEAAX_J@Z.c)
 */

void __fastcall ShellForegroundBoost::OnDaemonTimer(ShellForegroundBoost *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax

  v2 = MEMORY[0xFFFFF78000000014];
  UserSessionState = W32GetUserSessionState(this, a2);
  CShellForegroundBoost::DeBoostIfTime(*(CShellForegroundBoost **)(UserSessionState + 18920), v2 - 50000000);
}
