/*
 * XREFs of UsbhInitCallbackWorker @ 0x140051070
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     Usbh_FDO_Pnp_State @ 0x1400518D4 (Usbh_FDO_Pnp_State.c)
 */

__int64 __fastcall UsbhInitCallbackWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = a2;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids);
  Log(a1, 2, 1766015607, a1, v4);
  UsbhDisableTimerObject(a1, *((_QWORD *)v6 + 346), v7, v8);
  return Usbh_FDO_Pnp_State(a3, 8LL);
}
