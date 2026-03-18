/*
 * XREFs of UsbhPCE_HW_Stop @ 0x140043D08
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     UsbhHubProcessIsr @ 0x14001C3D0 (UsbhHubProcessIsr.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x14001E924 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     WPP_RECORDER_SF_dq @ 0x14003E7C4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_HW_Stop(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PortData; // rax
  int v11; // [rsp+28h] [rbp-20h]

  v4 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = v4;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x44u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v11,
      a3);
  }
  Log(a1, 512, 1346711863, 0LL, v4);
  PortData = UsbhGetPortData(a1, (unsigned __int16)v4, v8, v9);
  if ( PortData )
    UsbhDispatch_PortChangeQueueNullEvent(a1, PortData, 17, a3);
  UsbhReleaseEnumBusLockEx(a1, a3, v4);
}
