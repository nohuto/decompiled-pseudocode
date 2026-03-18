/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x14002C2CC
 * Callers:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhLockSSH @ 0x140009D60 (UsbhLockSSH.c)
 *     UsbhDisarmHubForWakeDetect @ 0x14002A2D8 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhUnlockSSH @ 0x14002B510 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  _DWORD *v6; // rbp
  int v7; // ebx
  int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v6 = FdoExt((__int64)a1);
  v7 = a2 - 1;
  if ( !v7 )
  {
    v20 = 5;
    goto LABEL_25;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = FdoExt(*(_QWORD *)(a3 + 8));
    v10 = 8LL * (unsigned int)v9[864];
    v9[781] = 5;
    v9[v10 + 867] = 5;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *((_QWORD *)v9 + 399) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v9 + 782), 16, 1, 0);
    return 3221225473LL;
  }
  v12 = v8 - 1;
  if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 )
  {
    v18 = a3;
    goto LABEL_20;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v17 = v15 - 1;
    if ( v17 )
    {
      v18 = a3;
      v19 = v17 - 1;
      if ( !v19 )
      {
        UsbhUnlockSSH(a3, 5);
        UsbhSshResumeDownstream(a1, a3, 1);
        return 0LL;
      }
      if ( v19 == 1 )
      {
        UsbhUnlockSSH(a3, 6);
        UsbhDisarmHubForWakeDetect((__int64)a1);
        return 0LL;
      }
LABEL_20:
      UsbhUnlockSSH(v18, 5);
      return 3221225473LL;
    }
    v20 = 1;
LABEL_25:
    UsbhUnlockSSH(a3, v20);
    return 0LL;
  }
  UsbhUnlockSSH(a3, 5);
  KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
  v16 = UsbhLockSSH(a3, 6);
  UsbhUnlockSSH(a3, v16);
  result = 3221225473LL;
  if ( v16 != 6 )
    return 0LL;
  return result;
}
