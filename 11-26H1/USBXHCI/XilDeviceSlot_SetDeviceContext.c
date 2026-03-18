/*
 * XREFs of XilDeviceSlot_SetDeviceContext @ 0x140025ADC
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x140025600 (UsbDevice_EnableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x14001C340 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 *     DeviceSlot_GetXilCoreDeviceSlotData @ 0x14001CA10 (DeviceSlot_GetXilCoreDeviceSlotData.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x140025248 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x140047410 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 */

__int64 __fastcall XilDeviceSlot_SetDeviceContext(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // ebx
  _QWORD *XilCoreDeviceSlotData; // rax
  int v10; // edx

  v3 = a1 + 16;
  v4 = a3;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL);
  if ( Controller_IsControllerAccessible(v6) )
  {
    if ( *(_BYTE *)(v3 + 64) )
    {
      v7 = XilDeviceSlot_SendSetDeviceContextRequest(v3, a2, (unsigned int)v4);
      if ( v7 >= 0 )
        *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(*(_QWORD *)(v3 + 72)) + 8 * v4) = a2;
    }
    else
    {
      XilCoreDeviceSlotData = (_QWORD *)DeviceSlot_GetXilCoreDeviceSlotData(*(_QWORD *)(v3 + 72));
      v7 = XilCoreDeviceSlot_SetDeviceContext(XilCoreDeviceSlotData, a2, v4, 0LL);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v6 + 72),
            v10,
            10,
            25,
            (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
            v7);
        }
        Debug_FreAssertMsg(
          (__int64)"XilCoreDeviceSlot_SetDeviceContext failed",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
          722);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
