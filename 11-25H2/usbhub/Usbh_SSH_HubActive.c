/*
 * XREFs of Usbh_SSH_HubActive @ 0x14002B6D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhUnlockSSH @ 0x14002B510 (UsbhUnlockSSH.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x14002BA88 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubActive(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbp
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  struct _KSEMAPHORE *v14; // rcx
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v6 = FdoExt((__int64)a1);
  v7 = v6;
  if ( a2 == 6 )
  {
    *((_BYTE *)v6 + 3408) = 1;
    v8 = FdoExt(*(_QWORD *)(a3 + 8));
    v9 = 0;
    v10 = 8LL * (unsigned int)v8[864];
    v8[781] = 1;
    v8[v10 + 867] = 1;
    *(_DWORD *)(a3 + 120) = 1734964085;
    *((_QWORD *)v8 + 399) = 0LL;
    KeReleaseSemaphore((PRKSEMAPHORE)(v8 + 782), 16, 1, 0);
  }
  else
  {
    if ( a2 == 2 )
    {
      v12 = FdoExt(*(_QWORD *)(a3 + 8));
      v13 = 8LL * (unsigned int)v12[864];
      v12[781] = 1;
      v12[v13 + 867] = 1;
      v14 = (struct _KSEMAPHORE *)(v12 + 782);
      *(_DWORD *)(a3 + 120) = 1734964085;
      *((_QWORD *)v12 + 399) = 0LL;
    }
    else
    {
      switch ( a2 )
      {
        case 1:
          v15 = FdoExt((__int64)a1);
          v16 = v15;
          if ( !*((_BYTE *)v15 + 3408)
            && *((_DWORD **)v15 + 388) == v15 + 776
            && !v15[780]
            && *((_DWORD **)v15 + 603) == v15 + 1206
            && (v15[640] & 0x10) == 0
            && (int)v15[685] <= 1
            && (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) >= 0 )
          {
            *((_BYTE *)v16 + 3408) = 0;
            v9 = 0;
            KeResetEvent((PRKEVENT)v7 + 141);
            *((_BYTE *)v7 + 3416) = 0;
            v17 = FdoExt(*(_QWORD *)(a3 + 8));
            v18 = 8LL * (unsigned int)v17[864];
            v17[781] = 2;
            v17[v18 + 867] = 2;
            *(_DWORD *)(a3 + 120) = 1734964085;
            *((_QWORD *)v17 + 399) = 0LL;
            KeReleaseSemaphore((PRKSEMAPHORE)(v17 + 782), 16, 1, 0);
            UsbhSshSuspendHub(a1, a3);
            return v9;
          }
          *((_BYTE *)v16 + 3408) = 0;
          UsbhUnlockSSH(a3, 1);
          KeWaitForSingleObject(v7 + 790, Executive, 0, 0, 0LL);
          if ( !*((_QWORD *)v7 + 414) && !*((_QWORD *)v7 + 413) && !*((_QWORD *)v7 + 412) )
          {
            v19 = FdoExt((__int64)a1);
            UsbhEnableTimerObject((_DWORD)a1, (_DWORD)v7 + 3200, v7[1314], 0, (__int64)(v19 + 478), 2001228627);
          }
          v14 = (struct _KSEMAPHORE *)(v7 + 790);
          break;
        case 4:
          v20 = *((_QWORD *)v6 + 413);
          UsbhUnlockSSH(a3, 1);
          return v20 != 0 ? 0xC0000001 : 0;
        case 5:
          UsbhUnlockSSH(a3, 1);
          return 0;
        default:
          UsbhUnlockSSH(a3, 1);
          return (unsigned int)-1073741823;
      }
    }
    KeReleaseSemaphore(v14, 16, 1, 0);
    return (unsigned int)-1073741823;
  }
  return v9;
}
