/*
 * XREFs of Usbh_SSH_HubPendingResume @ 0x140028F5C
 * Callers:
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x140007684 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x140029140 (UsbhUnlockSSH.c)
 *     UsbhLockSSH @ 0x1400291C0 (UsbhLockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingResume(__int64 a1, int a2, __int64 a3)
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
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v6 = FdoExt(a1);
  v7 = a2 - 1;
  if ( !v7 )
    goto LABEL_23;
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
        UsbhUnlockSSH(a3);
        LOBYTE(v20) = 1;
        UsbhSshResumeDownstream(a1, a3, v20, v21);
        return 0LL;
      }
      if ( v19 == 1 )
      {
        UsbhUnlockSSH(a3);
        UsbhDisarmHubForWakeDetect(a1, v22, v23, v24);
        return 0LL;
      }
LABEL_20:
      UsbhUnlockSSH(v18);
      return 3221225473LL;
    }
LABEL_23:
    UsbhUnlockSSH(a3);
    return 0LL;
  }
  UsbhUnlockSSH(a3);
  KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
  v16 = UsbhLockSSH(a3, 6LL);
  UsbhUnlockSSH(a3);
  result = 3221225473LL;
  if ( v16 != 6 )
    return 0LL;
  return result;
}
