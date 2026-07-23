/*
 * XREFs of PopPowerRequestNotifyMobileHotspotChanged @ 0x1407CC67C
 * Callers:
 *     PopWnfMobileHotspotCallback @ 0x1406069A0 (PopWnfMobileHotspotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopPowerRequestStatsNotifyScenarioStateChange @ 0x1404EDF18 (PopPowerRequestStatsNotifyScenarioStateChange.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 *     PopAcquirePowerRequestPushLock @ 0x140AEFCB4 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopPowerRequestNotifyMobileHotspotChanged(__int64 a1)
{
  char v1; // bl

  v1 = a1;
  LOBYTE(a1) = 1;
  PopAcquirePowerRequestPushLock(a1);
  if ( BYTE1(stru_140F12EA0.Spare35[1]) != v1 )
  {
    BYTE1(stru_140F12EA0.Spare35[1]) = v1;
    PopPowerRequestStatsNotifyScenarioStateChange(1, v1);
  }
  PopPowerRequestHandleExecutionEnablementUpdate();
  return PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
}
