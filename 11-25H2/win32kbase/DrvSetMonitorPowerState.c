/*
 * XREFs of DrvSetMonitorPowerState @ 0x14006A8A0
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 * Callees:
 *     DrvSetWddmDeviceMonitorPowerState @ 0x14006A8F0 (DrvSetWddmDeviceMonitorPowerState.c)
 *     UserIsWddmConnectedSession @ 0x14006BDB0 (UserIsWddmConnectedSession.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v7; // r8

  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return 3221225473LL;
  LOBYTE(v7) = a3;
  DrvSetWddmDeviceMonitorPowerState(0LL, a2, v7, a4);
  return 0LL;
}
