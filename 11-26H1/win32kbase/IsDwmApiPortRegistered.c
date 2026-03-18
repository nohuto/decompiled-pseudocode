/*
 * XREFs of IsDwmApiPortRegistered @ 0x140191070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDwmApiPortRegistered(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 70560) != 0LL;
}
