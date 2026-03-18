/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x14001C340
 * Callers:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x14001C2EC (DeviceSlot_DisableAllDeviceSlots.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x140025ADC (XilDeviceSlot_SetDeviceContext.c)
 *     Interrupter_DeferredWorkProcessor @ 0x14002A518 (Interrupter_DeferredWorkProcessor.c)
 *     Controller_InitiateRecovery @ 0x14004130C (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1400469B8 (DeviceSlot_ControllerResetPostReset.c)
 *     DeviceSlot_LocateDeviceByPortPath @ 0x140046A4C (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x14007804C (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
