/*
 * XREFs of UsbhDropDevice @ 0x140011F44
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1DropDevice @ 0x140011DF0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x140058770 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset2DropDevice @ 0x140058C70 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x140058D60 (UsbhReset2DropDeviceTimeout.c)
 * Callees:
 *     Usbh_Disconnect_PdoEvent @ 0x140010548 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x14003744C (UsbhSignalDriverResetEvent.c)
 *     UsbhAssertBusLock @ 0x140038DE4 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhDropDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhAssertBusLock(a1);
  UsbhSignalDriverResetEvent(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
  UsbhBusUnlatchPdo(a1, a3, a2, v6, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
}
