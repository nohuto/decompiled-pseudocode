/*
 * XREFs of DrvSetMonitorPowerState @ 0x140181340
 * Callers:
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1400293B0 (UserIsWddmConnectedSession.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x140181390 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  unsigned int v6; // esi
  __int64 v7; // r8

  v5 = a3;
  v6 = a2;
  if ( !(unsigned int)UserIsWddmConnectedSession(a1, a2, a3, a4) )
    return 3221225473LL;
  LOBYTE(v7) = v5;
  DrvSetWddmDeviceMonitorPowerState(0LL, v6, v7, a4);
  return 0LL;
}
