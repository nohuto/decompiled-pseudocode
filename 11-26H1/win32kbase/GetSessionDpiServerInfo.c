/*
 * XREFs of GetSessionDpiServerInfo @ 0x140156500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiServerInfo(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19904) + 5096LL;
}
