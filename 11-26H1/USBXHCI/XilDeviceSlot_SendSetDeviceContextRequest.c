/*
 * XREFs of XilDeviceSlot_SendSetDeviceContextRequest @ 0x140047410
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x140025ADC (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x14005742C (XilCoreUsbDevice_GetDeviceContextBufferLA.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall XilDeviceSlot_SendSetDeviceContextRequest(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r14
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  int v12; // ebx
  int v14[4]; // [rsp+30h] [rbp-88h] BYREF
  GUID v15[4]; // [rsp+40h] [rbp-78h] BYREF

  v6 = *(_QWORD *)(a1[9] + 8LL);
  v7 = *(_QWORD *)(v6 + 112);
  memset(v15, 0, sizeof(v15));
  v8 = *(_BYTE *)(a2 + 665) == 0;
  v9 = a2 + 624;
  *(_QWORD *)v15[1].Data4 = *a1;
  v10 = *(_QWORD *)(a2 + 616);
  if ( v8 )
    v9 = a2 + 616;
  v14[0] = 0;
  v15[2].Data1 = 26;
  *(_QWORD *)v15[2].Data4 = v10;
  v15[3].Data1 = a3;
  *(_QWORD *)v15[3].Data4 = XilCoreUsbDevice_GetDeviceContextBufferLA(v9, a2 + 616);
  v12 = SecureChannel_SendRequestSynchronously(v7, v15, 64, (__int64)v14, 4);
  if ( v12 >= 0 )
  {
    v12 = v14[0];
    if ( v14[0] < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v11,
          10,
          24,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v14[0]);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotSetDeviceContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        643);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v11, 10, 23, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v12);
  }
  return (unsigned int)v12;
}
