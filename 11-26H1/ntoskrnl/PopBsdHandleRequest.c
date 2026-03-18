/*
 * XREFs of PopBsdHandleRequest @ 0x1404E5A30
 * Callers:
 *     PdcPoRecordButton @ 0x1407729D0 (PdcPoRecordButton.c)
 *     PopRecordSuppressionStates @ 0x14077C208 (PopRecordSuppressionStates.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1407C8BD0 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordBatteryLevel @ 0x1407C8F74 (PopRecordBatteryLevel.c)
 *     PopRecordPhysicalPowerButton @ 0x1407C9068 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1407C91D8 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1407C9228 (PopSetCleanShutdownMarker.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1407D14E0 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopRecordAcDcState @ 0x14094625C (PopRecordAcDcState.c)
 *     PopRecordBatteryPercentage @ 0x140946660 (PopRecordBatteryPercentage.c)
 *     NtInitiatePowerAction @ 0x140A37400 (NtInitiatePowerAction.c)
 *     PopRecordDisplayState @ 0x140A3C308 (PopRecordDisplayState.c)
 *     PopRecordSleepCheckpoint @ 0x140B2E82C (PopRecordSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x140B2ECDC (PopSetSleepMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x140B31790 (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140B337C0 (PopClearConnectedStandbyMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140B4489C (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140B4EEC4 (PopClearSleepMarker.c)
 *     PopRecordLidStateWorker @ 0x140B544B0 (PopRecordLidStateWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140B55E70 (PopSetUserShutdownMarkerWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopBsdFlush @ 0x140B00AD4 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140B31A48 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

void __fastcall PopBsdHandleRequest(unsigned int a1)
{
  if ( (a1 & 1) != 0 )
    PopUpdateBsdPowerTransitionReferenceTime();
  if ( (a1 & 8) != 0 )
  {
    PopBsdFlush(a1);
  }
  else
  {
    stru_140F12D20.SuspendEvent.Header.SignalState |= a1;
    if ( _InterlockedIncrement((volatile signed __int32 *)stru_140F12D20.TracingPrivate) == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F12D20.WriteTransferCount, DelayedWorkQueue);
  }
}
