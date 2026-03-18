/*
 * XREFs of GetSavedCursorPosition @ 0x1401A1C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSavedCursorPosition(int a1, int a2, int a3)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19632) + 12LL);
}
