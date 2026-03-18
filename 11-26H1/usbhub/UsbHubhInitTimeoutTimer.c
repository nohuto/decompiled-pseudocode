/*
 * XREFs of UsbHubhInitTimeoutTimer @ 0x14004F480
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x1400367D4 (Usbh__TestPoint__Ulong.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     Usbh_HubRootHubInitNotification @ 0x14004B738 (Usbh_HubRootHubInitNotification.c)
 */

__int64 __fastcall UsbHubhInitTimeoutTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbp
  _DWORD *v7; // rsi

  v4 = a3;
  v7 = FdoExt(a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_e515ed24217c325a0d538c98f1498d1a_Traceguids);
  Log(a2, 2, 1667388495, a4, v4);
  Usbh__TestPoint__Ulong(a2, 9u, 0, v4);
  if ( (unsigned int)Usbh_HubRootHubInitNotification(a2, 0LL, 0LL) == -1073741536 )
    UsbhQueueWorkItemWithRetry(a2, *((_QWORD *)v7 + 347), (__int64)UsbhInitCallbackWorker, 1LL, a4, 0, 0x49577473u);
  return 0LL;
}
