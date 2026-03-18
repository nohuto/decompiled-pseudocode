/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x14005EBF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhSshBusIdle @ 0x140037004 (UsbhSshBusIdle.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusBusy @ 0x140041448 (UsbhSshBusBusy.c)
 *     UsbhFreeBusyList @ 0x14005E7F0 (UsbhFreeBusyList.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9

  Log(a1, 0x10000, 1936937840, 0LL, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v5 = FdoExt(*(_QWORD *)(a2 + 8));
  UsbhSshBusBusy(a1, a2);
  UsbhDisableTimerObject(a1, (__int64)(v5 + 800), v6, v7);
  UsbhSshBusIdle(a1);
  return UsbhFreeBusyList(a1);
}
