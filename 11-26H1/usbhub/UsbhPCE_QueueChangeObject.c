/*
 * XREFs of UsbhPCE_QueueChangeObject @ 0x140043DD8
 * Callers:
 *     UsbhResetPortTimerDpc @ 0x140048050 (UsbhResetPortTimerDpc.c)
 * Callees:
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x14001E94C (UsbhDispatch_PortChangeQueueEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChangeObject(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v7; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+28h] [rbp-30h]

  v7 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Du,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v14);
  }
  result = UsbhGetPortData(a1, (unsigned __int16)v7, v10, v11);
  if ( result )
    result = UsbhDispatch_PortChangeQueueEvent(a1, result, 4, a4, a3, 2, a6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v13) = v7;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x4Eu,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v13);
    }
  }
  return result;
}
