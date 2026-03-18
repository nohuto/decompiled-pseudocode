/*
 * XREFs of UsbhCancelEnumeration @ 0x140035C04
 * Callers:
 *     UsbhPCE_Disable @ 0x140003E98 (UsbhPCE_Disable.c)
 *     UsbhEnumerate1 @ 0x140036138 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x140036794 (UsbhEnumerate2.c)
 *     UsbhHandleOvercurrent @ 0x140057ABC (UsbhHandleOvercurrent.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhAssertBusLock @ 0x140038DE4 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     Usbh_BusPause_PdoEvent @ 0x140049174 (Usbh_BusPause_PdoEvent.c)
 */

__int64 __fastcall UsbhCancelEnumeration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      42,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(unsigned __int16 *)(a3 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1313175651;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( a2 != 1 && a2 != 2 )
    return a2;
  FdoExt(a1);
  UsbhCancelResetTimeout(a1, a3, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a3 + 376), *(_WORD *)(a3 + 4));
  UsbhBusUnlatchPdo(a1, a4, a3, v11, 0LL);
  Usbh_BusPause_PdoEvent(a1, a4, a3, *(_QWORD *)(a3 + 376));
  return 4LL;
}
