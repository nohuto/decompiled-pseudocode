/*
 * XREFs of UsbhHubSSH_PnpStart @ 0x14005EAD0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x14002BB10 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusBusy @ 0x140041448 (UsbhSshBusBusy.c)
 *     UsbhQuerySSstate @ 0x140057D88 (UsbhQuerySSstate.c)
 *     UsbhSshEnableDisable @ 0x14005EF90 (UsbhSshEnableDisable.c)
 */

__int64 __fastcall UsbhHubSSH_PnpStart(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // rdx
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0;
  Log(a1, 0x10000, 1936937844, 0LL, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v4 = FdoExt(*(_QWORD *)(a2 + 8));
  *((_BYTE *)v4 + 3409) = 1;
  if ( v4[820] == 5 )
    UsbhSshEnableDisable(a1, 5LL);
  if ( (int)UsbhQuerySSstate(a1, &v7) >= 0 )
  {
    v5 = 6LL;
    if ( v7 )
      v5 = 1LL;
    UsbhSshEnableDisable(a1, v5);
  }
  UsbhSshBusBusy(a1, a2);
  *((_BYTE *)v4 + 3408) = 1;
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v4 + 800), 2000, 0, a2, 0x77485353u);
  return 0LL;
}
