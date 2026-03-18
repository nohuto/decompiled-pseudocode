/*
 * XREFs of XilDeviceSlot_SendClearDeviceContextRequest @ 0x14001C358
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x14001CA4C (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x14001DBB4 (UsbDevice_SetDeviceDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_SendClearDeviceContextRequest(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // eax
  _UNKNOWN **v6; // rdx
  _UNKNOWN **v7; // rdx
  int v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1[9] + 8);
  v3 = *a1;
  v4 = *(_QWORD *)(v2 + 112);
  v9 = 0LL;
  v10 = 0LL;
  v11 = v3;
  v13 = *(_QWORD *)(a2 + 616);
  v12 = 27LL;
  v8 = 0;
  v5 = SecureChannel_SendRequestSynchronously(v4, (GUID *)&v9, 48, (__int64)&v8, 4);
  if ( v5 >= 0 )
  {
    if ( v8 < 0 )
    {
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          (_DWORD)v7,
          10,
          27,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v8);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotClearDeviceContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        785);
    }
  }
  else
  {
    v6 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        (_DWORD)v6,
        10,
        26,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v5);
    }
  }
}
