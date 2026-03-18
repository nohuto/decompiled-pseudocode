/*
 * XREFs of GetDispInfo @ 0x1400CCF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDispInfo(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
}
