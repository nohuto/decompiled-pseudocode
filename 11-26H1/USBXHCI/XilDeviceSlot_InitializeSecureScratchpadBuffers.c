/*
 * XREFs of XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x140047040
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x14001C248 (DeviceSlot_D0EntryCleanupState.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1400469B8 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_InitializeSecureScratchpadBuffers(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  _UNKNOWN **v5; // rdx
  _UNKNOWN **v6; // rdx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  v1 = *(_QWORD *)(a1[9] + 8);
  v2 = *a1;
  v3 = *(_QWORD *)(v1 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v11 = 25LL;
  v10 = v2;
  v7 = 0;
  v4 = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v8, 40, (__int64)&v7, 4);
  if ( v4 >= 0 )
  {
    if ( v7 < 0 )
    {
      v6 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          (_DWORD)v6,
          10,
          22,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v7);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotInitializeScratchpadBuffers failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        551);
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
        21,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v4);
    }
  }
}
