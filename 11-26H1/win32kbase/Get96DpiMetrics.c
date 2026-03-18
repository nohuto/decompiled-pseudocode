/*
 * XREFs of Get96DpiMetrics @ 0x14016CA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Get96DpiMetrics(int a1, int a2, int a3)
{
  return W32GetUserSessionState(a1, a2, a3) + 66096;
}
