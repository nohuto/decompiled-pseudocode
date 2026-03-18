/*
 * XREFs of IsLogonConnected @ 0x1401515F0
 * Callers:
 *     UserPowerStateCallout @ 0x1401B27F4 (UserPowerStateCallout.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsLogonConnected(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 69120) != 0LL;
}
