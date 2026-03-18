/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x1400EB09C
 * Callers:
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 * Callees:
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     RIMGetCurrentPowerInputMode @ 0x1400EB12C (RIMGetCurrentPowerInputMode.c)
 *     ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x1400EB304 (-RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z.c)
 *     RIMSetDeviceIdleTimeout @ 0x1400EB4DC (RIMSetDeviceIdleTimeout.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400F2534 (RIMUpdateDeviceForInputMode.c)
 *     RIMHandleTTMDeviceArrival @ 0x14021164C (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(struct RIMDEV *a1, int a2, int a3)
{
  if ( isChildPartition((int)a1, a2, a3) )
  {
    *((_DWORD *)a1 + 325) = -1;
    *((_DWORD *)a1 + 326) = 0;
    return 0LL;
  }
  RIMQueryWakeCapableProperty(a1);
  *((_DWORD *)a1 + 325) = -1;
  *((_DWORD *)a1 + 326) = RIMGetCurrentPowerInputMode();
  RIMUpdateDeviceForInputMode(a1);
  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !*(_BYTE *)W32GetUserGdiSessionState() )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
