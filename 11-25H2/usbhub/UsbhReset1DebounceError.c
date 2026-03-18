/*
 * XREFs of UsbhReset1DebounceError @ 0x140058690
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAssertBusLock @ 0x140038DE4 (UsbhAssertBusLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhReset1DebounceError(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v5);
  }
  Log(a1, 1024, 1883393637, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhException(a1, *(_WORD *)(a2 + 4), 55, 0LL, 0, -1, -1, usbfile_busfunc_c, 795, 0);
  return 1LL;
}
