/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409467E0
 * Callers:
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407C9510 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407C95DC (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1409462B0 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x140946794 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x140A3C238 (PopPowerRequestNotifySystemIdleStateChanged.c)
 * Callees:
 *     PopPowerRequestRevokeRequests @ 0x1404A5FC0 (PopPowerRequestRevokeRequests.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404EF380 (PopPowerRequestUnrevokeRequests.c)
 */

void PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( HIDWORD(ExpPlatformBinaryLock.KernelStack) )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!BYTE3(stru_140F12D20.StateSaveArea)
     || LODWORD(ExpPlatformBinaryLock.Queue) && BYTE2(stru_140F12D20.StateSaveArea)
     || BYTE1(stru_140F12D20.StateSaveArea)
     || MEMORY[0xFFFFF78000000008] - (unsigned __int64)stru_140F12D20.SchedulingGroup < 10000000
                                                                                      * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    PopPowerRequestRevokeRequests(v0, 0);
  }
}
