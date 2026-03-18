/*
 * XREFs of UsbhPCE_QueueDriverReset @ 0x1400443C0
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x1400068F0 (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueDriverReset(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 result; // rax
  int v10; // [rsp+28h] [rbp-20h]

  v6 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x51u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v10);
  }
  Log(a1, 512, 1953452114, 0LL, v6);
  result = UsbhGetPortData(a1, v6);
  if ( result )
    return UsbhDispatch_PortChangeQueueEvent(a1, result, 15, a4, a3, 1, a5);
  return result;
}
