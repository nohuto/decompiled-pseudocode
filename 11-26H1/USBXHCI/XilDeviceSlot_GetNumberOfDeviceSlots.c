/*
 * XREFs of XilDeviceSlot_GetNumberOfDeviceSlots @ 0x14003DB60
 * Callers:
 *     Controller_TelemetryAddControllerData @ 0x14007804C (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetNumberOfDeviceSlots(__int64 a1)
{
  return *(unsigned int *)(a1 + 96);
}
