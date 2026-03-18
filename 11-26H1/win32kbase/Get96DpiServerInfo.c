/*
 * XREFs of Get96DpiServerInfo @ 0x140147E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Get96DpiServerInfo(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904) + 5200LL;
}
