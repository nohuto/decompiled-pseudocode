/*
 * XREFs of UsbhPCE_Close @ 0x140044124
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 *     Usbh_PCE_Close_Action @ 0x14004509C (Usbh_PCE_Close_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Close(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x43u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      a3);
  }
  Log(a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 22, a3);
  UsbhReleaseEnumBusLockEx(a1, a2 + 24, *(_WORD *)(a2 + 4));
}
