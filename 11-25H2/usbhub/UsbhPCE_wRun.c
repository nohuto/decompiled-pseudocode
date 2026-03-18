/*
 * XREFs of UsbhPCE_wRun @ 0x140004C18
 * Callers:
 *     UsbhHubProcessChangeWorker @ 0x140004850 (UsbhHubProcessChangeWorker.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140028E50 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhPCE_wRun(__int64 a1, __int64 a2, __int64 a3)
{
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a3 + 4));
  UsbhDispatch_PortChangeQueueNullEvent(a1, a3, 5LL, a2);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
