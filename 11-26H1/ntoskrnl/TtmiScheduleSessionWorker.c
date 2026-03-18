/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1407E67A4
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407E4B20 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407E4E10 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1407E5054 (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1407E5490 (TtmiSetInputWakeCapability.c)
 *     TtmiSetDisplayPowerRequest @ 0x1407E68A0 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1407E772C (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407E7F68 (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407EC370 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1407EC424 (TtmiTerminalMonitorControl.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407EC504 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpExitProximity @ 0x1407EC738 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407EC860 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1407EC8C0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A39E40 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B65774 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
