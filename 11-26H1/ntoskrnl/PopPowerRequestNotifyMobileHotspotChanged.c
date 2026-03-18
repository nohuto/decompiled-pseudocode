/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1407C95DC
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x140603EA0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404F4938 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AECCA4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotifyMobileHotspotChanged(__int64 a1)
{
  char v1; // bl

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  if ( BYTE1(stru_140F12D20.StateSaveArea) != v1 )
  {
    BYTE1(stru_140F12D20.StateSaveArea) = v1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, v1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock(&stru_140F12D20);
}
