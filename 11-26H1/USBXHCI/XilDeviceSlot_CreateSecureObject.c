/*
 * XREFs of XilDeviceSlot_CreateSecureObject @ 0x140046CA4
 * Callers:
 *     XilDeviceSlot_Create @ 0x140046C34 (XilDeviceSlot_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall XilDeviceSlot_CreateSecureObject(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // edx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+38h] [rbp-48h]
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]

  LODWORD(v8) = 0;
  v7 = 0LL;
  v2 = *(_QWORD **)(a1[9] + 8LL);
  v3 = v2[14];
  v9 = 0LL;
  v10 = 0LL;
  v12 = 21LL;
  v11 = 0LL;
  v13 = v2[127];
  v5 = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v9, 48, (__int64)&v7, 16);
  if ( v5 >= 0 )
  {
    v5 = v7;
    if ( (int)v7 >= 0 )
    {
      *a1 = v8;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 2;
        WPP_RECORDER_SF_d(v2[9], v4, 10, 11, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v7);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        98);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(v2[9], v4, 10, 10, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v5);
  }
  return (unsigned int)v5;
}
