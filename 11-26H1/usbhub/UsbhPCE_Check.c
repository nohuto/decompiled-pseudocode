/*
 * XREFs of UsbhPCE_Check @ 0x140043B80
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x14001DE48 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_Check(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x49u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346712112, 0LL, *(unsigned __int16 *)(a2 + 4));
  UsbhDispatch_PortChangeQueueNullEventEx(a1, a2, 20, a3, (__int64)&v10);
  return v10;
}
