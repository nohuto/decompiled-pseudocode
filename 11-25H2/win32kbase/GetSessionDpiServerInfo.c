/*
 * XREFs of GetSessionDpiServerInfo @ 0x140115DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiServerInfo(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 5096LL;
}
