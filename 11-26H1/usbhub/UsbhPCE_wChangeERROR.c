/*
 * XREFs of UsbhPCE_wChangeERROR @ 0x1400442FC
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x14001DE80 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_wChangeERROR(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  int v13; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      v11,
      0x48u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v13,
      a4);
  }
  Log(a1, 512, 1346712115, 0LL, *(unsigned __int16 *)(a2 + 4));
  return UsbhDispatch_PortChangeQueueEvent(a1, a2, 23, a4, a3, a5, a6);
}
