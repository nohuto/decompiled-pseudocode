/*
 * XREFs of UsbhReset1TimeoutBadEnable @ 0x140058B00
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhAssertBusLock @ 0x140038DE4 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhReset1Timeout @ 0x1400588F0 (UsbhReset1Timeout.c)
 */

__int64 __fastcall UsbhReset1TimeoutBadEnable(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x18u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884447333, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhException(a1, *(_WORD *)(a2 + 4), 61, 0LL, 0, -1, -1, usbfile_busfunc_c, 1182, 0);
  UsbhDisablePort(a1, a2);
  return UsbhReset1Timeout(a1, a2, a3);
}
