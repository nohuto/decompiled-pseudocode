/*
 * XREFs of IsLogonConnected @ 0x140111CC0
 * Callers:
 *     UserPowerStateCallout @ 0x1401118A8 (UserPowerStateCallout.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsLogonConnected(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 69112) != 0LL;
}
