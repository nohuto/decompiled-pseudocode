/*
 * XREFs of UserGetMonitorPowerWaiterEvent @ 0x1401EA6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetMonitorPowerWaiterEvent(__int64 a1)
{
  return *(_QWORD *)(W32GetUserGdiSessionState(a1) + 8);
}
