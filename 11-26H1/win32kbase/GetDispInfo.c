/*
 * XREFs of GetDispInfo @ 0x140117720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDispInfo(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968);
}
