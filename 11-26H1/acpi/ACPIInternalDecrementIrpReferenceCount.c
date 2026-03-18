/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8
 * Callers:
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x140024E50 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x140025310 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x140026CE0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1400312D0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x140044E30 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1400486C0 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x140049B10 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x140060F80 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIThermalActivateConstraint @ 0x140069C2C (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x140069E88 (ACPIThermalGetSensorDevice.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1400C2DF0 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 728), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 752), 0, 0);
  return result;
}
