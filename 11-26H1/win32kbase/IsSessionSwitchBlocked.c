/*
 * XREFs of IsSessionSwitchBlocked @ 0x1401D9C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsSessionSwitchBlocked(int a1, int a2, int a3)
{
  return *(unsigned int *)(W32GetUserSessionState(a1, a2, a3) + 68844);
}
