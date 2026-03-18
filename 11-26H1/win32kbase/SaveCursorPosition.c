/*
 * XREFs of SaveCursorPosition @ 0x14021C030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SaveCursorPosition(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(*(_QWORD *)(result + 19632) + 12LL) = a1;
  return result;
}
