/*
 * XREFs of XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x140039014
 * Callers:
 *     UsbDevice_UcxEvtReset @ 0x1400244A0 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddressCompletion @ 0x140026300 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003B660 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  _UNKNOWN **v10; // rdx
  _UNKNOWN **v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-19h] BYREF
  __int128 v13; // [rsp+38h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-1h]
  __int64 v15; // [rsp+50h] [rbp+7h]
  __int64 v16; // [rsp+58h] [rbp+Fh]
  __int64 v17; // [rsp+60h] [rbp+17h] BYREF
  int v18; // [rsp+68h] [rbp+1Fh]

  v7 = *(_QWORD *)(a1[9] + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v17 = 0LL;
  v18 = 0;
  v14 = *a1;
  v16 = *(_QWORD *)(a2 + 616);
  v12 = 0LL;
  v13 = 0LL;
  v15 = 28LL;
  v9 = SecureChannel_SendRequestSynchronously(v8, (GUID *)&v12, 48, (__int64)&v17, 12);
  if ( v9 >= 0 )
  {
    if ( (int)v17 >= 0 )
    {
      if ( a3 )
        *a3 = HIDWORD(v17);
      if ( a4 )
        *a4 = v18;
    }
    else
    {
      v11 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v7 + 72),
          (_DWORD)v11,
          10,
          29,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v17);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromSlotContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        901);
    }
  }
  else
  {
    v10 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 72),
        (_DWORD)v10,
        10,
        28,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v9);
    }
  }
}
