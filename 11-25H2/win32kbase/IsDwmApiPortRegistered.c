/*
 * XREFs of IsDwmApiPortRegistered @ 0x140153270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDwmApiPortRegistered(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 70568) != 0LL;
}
