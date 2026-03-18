/*
 * XREFs of ?SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D180
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 */

__int64 __fastcall ForegroundBoost::SetForegroundPriority(__int64 a1, unsigned int a2, unsigned int a3)
{
  return ForegroundBoost::_SetForegroundPriority(a1, 0LL, a2, a3);
}
