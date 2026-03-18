/*
 * XREFs of IsSessionSwitchBlocked @ 0x1401B6D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSessionSwitchBlocked(__int64 a1, __int64 a2)
{
  return *(unsigned int *)(W32GetUserSessionState(a1, a2) + 68852);
}
