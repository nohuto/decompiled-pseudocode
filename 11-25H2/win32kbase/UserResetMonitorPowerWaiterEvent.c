/*
 * XREFs of UserResetMonitorPowerWaiterEvent @ 0x140157A90
 * Callers:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 * Callees:
 *     <none>
 */

LONG __fastcall UserResetMonitorPowerWaiterEvent(__int64 a1)
{
  __int64 UserGdiSessionState; // rax

  UserGdiSessionState = W32GetUserGdiSessionState(a1);
  return KeResetEvent(*(PRKEVENT *)(UserGdiSessionState + 8));
}
