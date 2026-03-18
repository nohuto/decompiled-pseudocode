/*
 * XREFs of GetSessionDpiMetrics @ 0x140156DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSessionDpiMetrics(int a1, int a2, int a3)
{
  return W32GetUserSessionState(a1, a2, a3) + 66168;
}
