/*
 * XREFs of UsbhPortResumeFailed @ 0x140058240
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSignalResumeEvent @ 0x1400138D4 (UsbhSignalResumeEvent.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     UsbhSS_SignalPdoWake @ 0x1400169D0 (UsbhSS_SignalPdoWake.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeFailed(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x26u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884443425, a2, 0LL);
  UsbhException(a1, *(_WORD *)(a2 + 4), 129, 0LL, 0, 0, 0, usbfile_busfunc_c, 2448, 0);
  UsbhWait(a1, 0xAu);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
