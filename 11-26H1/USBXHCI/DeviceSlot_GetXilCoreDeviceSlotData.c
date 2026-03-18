/*
 * XREFs of DeviceSlot_GetXilCoreDeviceSlotData @ 0x14001CA10
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x140025ADC (XilDeviceSlot_SetDeviceContext.c)
 *     XilDeviceSlot_Create @ 0x140046C34 (XilDeviceSlot_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 */

__int64 __fastcall DeviceSlot_GetXilCoreDeviceSlotData(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 16;
  if ( *(_BYTE *)(a1 + 80) )
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\deviceslot.c",
      123);
    return 0LL;
  }
  return result;
}
