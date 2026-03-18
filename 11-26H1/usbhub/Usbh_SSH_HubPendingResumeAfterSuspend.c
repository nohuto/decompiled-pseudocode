/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005F3B0
 * Callers:
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x140029140 (UsbhUnlockSSH.c)
 *     UsbhLockSSH @ 0x1400291C0 (UsbhLockSSH.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResumeAfterSuspend(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v6; // rbp
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 result; // rax
  int v11; // ebx
  __int64 v12; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v6 = FdoExt(a1);
  v7 = a2 - 1;
  if ( !v7 )
  {
    UsbhUnlockSSH(a3, 3);
    return 0LL;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    UsbhUnlockSSH(a3, 5);
    UsbhSshResumeUpstream(a1, a3);
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    UsbhUnlockSSH(a3, 1);
    if ( !*((_BYTE *)v6 + 3416) )
      UsbhSshResumeDownstream(a1, a3, 0LL, v12);
    return 0LL;
  }
  if ( v9 == 3 )
  {
    UsbhUnlockSSH(a3, 3);
    KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
    v11 = UsbhLockSSH(a3, 6);
    UsbhUnlockSSH(a3, v11);
    result = 3221225473LL;
    if ( v11 != 6 )
      return 0LL;
  }
  else
  {
    UsbhUnlockSSH(a3, 3);
    return 3221225473LL;
  }
  return result;
}
