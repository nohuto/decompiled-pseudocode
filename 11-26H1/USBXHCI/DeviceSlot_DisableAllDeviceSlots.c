/*
 * XREFs of DeviceSlot_DisableAllDeviceSlots @ 0x14001C2EC
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x14001C248 (DeviceSlot_D0EntryCleanupState.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x140037790 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1400469B8 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x14001C340 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 */

void __fastcall DeviceSlot_DisableAllDeviceSlots(__int64 a1)
{
  unsigned int i; // ebx

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(a1) + 8LL * i) )
      UsbDevice_SetDeviceDisabled();
  }
}
