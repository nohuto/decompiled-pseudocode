/*
 * XREFs of PopPowerRequestHandleExecutionEnablementUpdate @ 0x1409C2150
 * Callers:
 *     PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1407CC5B0 (PopPowerRequestExecutionRequiredTimeoutWorker.c)
 *     PopPowerRequestNotifyMobileHotspotChanged @ 0x1407CC67C (PopPowerRequestNotifyMobileHotspotChanged.c)
 *     PopPowerRequestExecutionRequiredSettingCallback @ 0x1409C1C20 (PopPowerRequestExecutionRequiredSettingCallback.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x1409C2104 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopPowerRequestNotifySystemIdleStateChanged @ 0x1409F7C58 (PopPowerRequestNotifySystemIdleStateChanged.c)
 * Callees:
 *     PopPowerRequestRevokeRequests @ 0x14049F650 (PopPowerRequestRevokeRequests.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404E8960 (PopPowerRequestUnrevokeRequests.c)
 */

void PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( HIDWORD(ExpPlatformBinaryLock.KernelStack) )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!BYTE3(stru_140F12EA0.Spare35[1])
     || LODWORD(ExpPlatformBinaryLock.Queue) && BYTE2(stru_140F12EA0.Spare35[1])
     || BYTE1(stru_140F12EA0.Spare35[1])
     || MEMORY[0xFFFFF78000000008] - *(_QWORD *)&stru_140F12EA0.Spare36 < 10000000
                                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    PopPowerRequestRevokeRequests(v0, 0);
  }
}
