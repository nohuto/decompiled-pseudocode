/*
 * XREFs of PopBsdHandleRequest @ 0x1404DEFD0
 * Callers:
 *     PdcPoRecordButton @ 0x1407759D0 (PdcPoRecordButton.c)
 *     PopRecordSuppressionStates @ 0x14077ECFC (PopRecordSuppressionStates.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1407CBC70 (PopClearUserShutdownMarkerWorker.c)
 *     PopRecordBatteryLevel @ 0x1407CC014 (PopRecordBatteryLevel.c)
 *     PopRecordPhysicalPowerButton @ 0x1407CC108 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1407CC278 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1407CC2C8 (PopSetCleanShutdownMarker.c)
 *     PdcPoLidReliabilityUpdateCallback @ 0x1407D4580 (PdcPoLidReliabilityUpdateCallback.c)
 *     PopRecordAcDcState @ 0x1409C1BCC (PopRecordAcDcState.c)
 *     PopRecordBatteryPercentage @ 0x1409C1FD0 (PopRecordBatteryPercentage.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     PopRecordDisplayState @ 0x1409F7D28 (PopRecordDisplayState.c)
 *     PopRecordSleepCheckpoint @ 0x140B3077C (PopRecordSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x140B30AB8 (PopSetSleepMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x140B33990 (PopSetConnectedStandbyMarker.c)
 *     PopClearConnectedStandbyMarker @ 0x140B35C10 (PopClearConnectedStandbyMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140B4665C (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140B51754 (PopClearSleepMarker.c)
 *     PopRecordLidStateWorker @ 0x140B56D50 (PopRecordLidStateWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140B58B70 (PopSetUserShutdownMarkerWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopBsdFlush @ 0x140B02804 (PopBsdFlush.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x140B33C48 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
    PopBsdUpdateRequests |= a1;
    if ( _InterlockedIncrement(&dword_140F13400) == 1 )
      ExQueueWorkItem(&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
