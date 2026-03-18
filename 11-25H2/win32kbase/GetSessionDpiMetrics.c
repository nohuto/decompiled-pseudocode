/*
 * XREFs of GetSessionDpiMetrics @ 0x140115E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiMetrics(__int64 a1, __int64 a2)
{
  return W32GetUserSessionState(a1, a2) + 66176;
}
