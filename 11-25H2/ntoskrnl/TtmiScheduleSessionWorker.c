/*
 * XREFs of TtmiScheduleSessionWorker @ 0x14075A564
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407588D0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140758BD0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x140758E1C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x140759264 (TtmiSetInputWakeCapability.c)
 *     TtmiSetDisplayPowerRequest @ 0x14075A65C (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x14075B504 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x14075BD28 (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x140760454 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x140760508 (TtmiTerminalMonitorControl.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407605E4 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpExitProximity @ 0x140760818 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x140760940 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1407609A4 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A2CFA4 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140A2D020 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
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
