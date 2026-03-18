/*
 * XREFs of Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005ED68
 * Callers:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhLockSSH @ 0x140009D60 (UsbhLockSSH.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhUnlockSSH @ 0x14002B510 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResumeAfterSuspend(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  _DWORD *v6; // rbp
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 result; // rax
  int v11; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v6 = FdoExt((__int64)a1);
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
      UsbhSshResumeDownstream(a1, a3, 0);
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
