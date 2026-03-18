/*
 * XREFs of UsbhInitCallback @ 0x140050FA0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallback(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = FdoExt(v1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xCu,
      (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids);
  Log(v1, 2, 1766015537, v1, 0LL);
  return UsbhQueueWorkItemWithRetry(v1, *((_QWORD *)v3 + 347), (__int64)UsbhInitCallbackWorker, 1LL, a1, 0, 0x49577473u);
}
