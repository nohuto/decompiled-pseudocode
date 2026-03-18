/*
 * XREFs of RIMHandlePowerDeviceArrival @ 0x14012E098
 * Callers:
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 * Callees:
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     RIMUpdateDeviceForInputMode @ 0x14007A364 (RIMUpdateDeviceForInputMode.c)
 *     RIMGetCurrentPowerInputMode @ 0x14012E11C (RIMGetCurrentPowerInputMode.c)
 *     ?RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z @ 0x14012E254 (-RIMQueryWakeCapableProperty@@YAXPEAURIMDEV@@@Z.c)
 *     RIMSetDeviceIdleTimeout @ 0x14012E2EC (RIMSetDeviceIdleTimeout.c)
 *     RIMHandleTTMDeviceArrival @ 0x1401F662C (RIMHandleTTMDeviceArrival.c)
 */

__int64 __fastcall RIMHandlePowerDeviceArrival(struct RIMDEV *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx

  if ( isChildPartition((__int64)a1, a2) )
  {
    *((_DWORD *)a1 + 325) = -1;
    *((_DWORD *)a1 + 326) = 0;
    return 0LL;
  }
  RIMQueryWakeCapableProperty(a1);
  *((_DWORD *)a1 + 325) = -1;
  v3 = RIMGetCurrentPowerInputMode();
  *((_DWORD *)a1 + 326) = v3;
  RIMUpdateDeviceForInputMode(a1, v3);
  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
    RIMSetDeviceIdleTimeout(a1);
  if ( !*(_BYTE *)W32GetUserGdiSessionState(v4) )
    return 0LL;
  return RIMHandleTTMDeviceArrival(a1);
}
