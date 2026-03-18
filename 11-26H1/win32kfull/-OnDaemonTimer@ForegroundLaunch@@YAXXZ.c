/*
 * XREFs of ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1401F5650
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401F5678 (-OnDaemonTimer@CForegroundLaunch@@QEAAXXZ.c)
 */

void __fastcall ForegroundLaunch::OnDaemonTimer(ForegroundLaunch *this, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(this, a2);
  CForegroundLaunch::OnDaemonTimer(*(CForegroundLaunch **)(UserSessionState + 18912));
}
