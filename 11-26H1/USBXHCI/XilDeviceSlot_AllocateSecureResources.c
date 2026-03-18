/*
 * XREFs of XilDeviceSlot_AllocateSecureResources @ 0x140046AF8
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x140047158 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall XilDeviceSlot_AllocateSecureResources(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]

  v2 = *(_QWORD *)(a1[9] + 8);
  v3 = *a1;
  v4 = *(_QWORD *)(v2 + 112);
  v9 = 0LL;
  v10 = 0LL;
  v12 = 22LL;
  v11 = v3;
  v8 = 0LL;
  v6 = SecureChannel_SendRequestSynchronously(v4, (GUID *)&v9, 40, (__int64)&v8, 8);
  if ( v6 >= 0 )
  {
    v6 = v8;
    if ( (int)v8 >= 0 )
    {
      *((_DWORD *)a1 + 20) = HIDWORD(v8);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          v5,
          10,
          14,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v8);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotAllocateResources failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        222);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), v5, 10, 13, (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids, v6);
  }
  return (unsigned int)v6;
}
