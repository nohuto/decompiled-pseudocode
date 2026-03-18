/*
 * XREFs of UsbhPCE_BusReset @ 0x140043F9C
 * Callers:
 *     UsbhBusReset_Action @ 0x1400416F4 (UsbhBusReset_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x1400068C8 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_BusReset(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-10h]

  v3 = a3;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Fu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v7);
  }
  Log(a1, 512, 1346711609, 0LL, v3);
  result = UsbhGetPortData(a1, v3);
  if ( result )
    return UsbhDispatch_PortChangeQueueNullEvent(a1, result, 9, a2);
  return result;
}
