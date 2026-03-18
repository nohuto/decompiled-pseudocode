/*
 * XREFs of UsbhPortResumeFailed @ 0x1400587A0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhSS_SignalPdoWake @ 0x14000FA88 (UsbhSS_SignalPdoWake.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortResumeFailed(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x26u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884443425, a2, 0LL);
  UsbhException(a1, *(_WORD *)(a2 + 4), 129, 0LL, 0, 0, 0, usbfile_busfunc_c, 2448, 0);
  UsbhWait(a1, 0xAu);
  UsbhSignalResumeEvent(a1, a2, v6, v7);
  UsbhSS_SignalPdoWake(a1, a3);
  return 0LL;
}
