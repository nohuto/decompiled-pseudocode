/*
 * XREFs of XilDeviceSlot_FreeSecureResources @ 0x140046DFC
 * Callers:
 *     XilDeviceSlot_ReleaseHardware @ 0x14004726C (XilDeviceSlot_ReleaseHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_FreeSecureResources(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  _UNKNOWN **v5; // rdx
  _UNKNOWN **v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  v1 = *(_QWORD *)(a1[9] + 8);
  v2 = *a1;
  v3 = *(_QWORD *)(v1 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v11 = 23LL;
  v10 = v2;
  v7 = 0LL;
  v4 = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v8, 40, (__int64)&v7, 8);
  if ( v4 >= 0 )
  {
    if ( (int)v7 < 0 )
    {
      v6 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          (_DWORD)v6,
          10,
          18,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v7);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotFreeResources failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        350);
    }
  }
  else
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 72),
        (_DWORD)v5,
        10,
        17,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v4);
    }
  }
}
