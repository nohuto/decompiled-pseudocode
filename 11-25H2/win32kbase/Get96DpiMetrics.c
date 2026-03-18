/*
 * XREFs of Get96DpiMetrics @ 0x140134140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Get96DpiMetrics(__int64 a1, __int64 a2)
{
  return W32GetUserSessionState(a1, a2) + 66104;
}
