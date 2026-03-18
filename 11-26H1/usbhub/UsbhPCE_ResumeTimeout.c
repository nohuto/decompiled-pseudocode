/*
 * XREFs of UsbhPCE_ResumeTimeout @ 0x14004408C
 * Callers:
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     UsbhWaitForPortResume @ 0x140011070 (UsbhWaitForPortResume.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_ResumeTimeout(__int64 a1, int a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-10h]

  v3 = a3;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Du,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9);
  }
  Log(a1, 512, 1346711860, 0LL, v3);
  result = UsbhGetPortData(a1, (unsigned __int16)v3, v6, v7);
  if ( result )
    return UsbhDispatch_PortChangeQueueNullEvent(a1, result, 14, a2);
  return result;
}
