/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1407EC304
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407EA970 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1407EABB4 (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1407EAFF0 (TtmiSetInputWakeCapability.c)
 *     TtmiSetDisplayPowerRequest @ 0x1407EC400 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1407ED28C (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1407EDAC8 (TtmpDispatchEvacuateDevices.c)
 *     TtmiSetPendingOnOffRequest @ 0x1407F1ED4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalMonitorControl @ 0x1407F1F88 (TtmiTerminalMonitorControl.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1407F2068 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpExitProximity @ 0x1407F2298 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407F23C0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1407F2420 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B68814 (TtmNotifySessionPowerStateChange.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
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
