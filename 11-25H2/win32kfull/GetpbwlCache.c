/*
 * XREFs of GetpbwlCache @ 0x140273790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetpbwlCache(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2) + 63440;
  *a1 = result;
  return result;
}
