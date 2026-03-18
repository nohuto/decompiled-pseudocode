/*
 * XREFs of UserGetTerminalLuid @ 0x1401414D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetTerminalLuid(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 68688);
}
