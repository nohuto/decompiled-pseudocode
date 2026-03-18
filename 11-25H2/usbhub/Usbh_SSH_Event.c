/*
 * XREFs of Usbh_SSH_Event @ 0x140009870
 * Callers:
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     UsbhFdoReturnPortStatus @ 0x140009E40 (UsbhFdoReturnPortStatus.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_HubSuspended @ 0x14002B258 (Usbh_SSH_HubSuspended.c)
 *     UsbhQueryBusRelations @ 0x14002D43C (UsbhQueryBusRelations.c)
 *     UsbhInternalIoctlPropagateResume @ 0x1400357D4 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140037F80 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhHubSSH_Worker @ 0x1400384B0 (UsbhHubSSH_Worker.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x14004F794 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x140050220 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x14005E810 (UsbhSShResumeWorker.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     Usbh_SSH_HubSuspended @ 0x14002B258 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x14002B3BC (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhUnlockSSH @ 0x14002B510 (UsbhUnlockSSH.c)
 *     UsbhSsh_CheckPortChangeQueuesIdle @ 0x14002BA88 (UsbhSsh_CheckPortChangeQueuesIdle.c)
 *     Usbh_SSH_HubPendingResume @ 0x14002C2CC (Usbh_SSH_HubPendingResume.c)
 *     UsbhEnableTimerObject @ 0x14002EA20 (UsbhEnableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x14005ECEC (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005ED68 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // edi
  _DWORD *v7; // r14
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  struct _KSEMAPHORE *v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rax
  _DWORD *v21; // rbx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids,
      a2);
  v6 = 0;
  v7 = FdoExt(*(_QWORD *)(a3 + 8));
  KeWaitForSingleObject(v7 + 782, Executive, 0, 0, 0LL);
  *((_QWORD *)v7 + 399) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v8 = v7[864];
  v9 = 8LL * (v8 & 7);
  if ( v7[v9 + 865] != a2 || v7[v9 + 866] != v7[781] )
  {
    v19 = ((_BYTE)v8 + 1) & 7;
    v7[864] = v19;
    v19 *= 32LL;
    *(_DWORD *)((char *)v7 + v19 + 3460) = a2;
    *(_DWORD *)((char *)v7 + v19 + 3464) = v7[781];
  }
  v10 = (unsigned int)v7[781];
  switch ( (_DWORD)v10 )
  {
    case 1:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
      v11 = FdoExt((__int64)a1);
      v12 = v11;
      if ( a2 == 6 )
      {
        *((_BYTE *)v11 + 3408) = 1;
        v13 = FdoExt(*(_QWORD *)(a3 + 8));
        v14 = 8LL * (unsigned int)v13[864];
        v13[781] = 1;
        v13[v14 + 867] = 1;
        *(_DWORD *)(a3 + 120) = 1734964085;
        *((_QWORD *)v13 + 399) = 0LL;
        KeReleaseSemaphore((PRKSEMAPHORE)(v13 + 782), 16, 1, 0);
      }
      else
      {
        if ( a2 == 2 )
        {
          v16 = FdoExt(*(_QWORD *)(a3 + 8));
          v17 = 8LL * (unsigned int)v16[864];
          v16[781] = 1;
          v16[v17 + 867] = 1;
          v18 = (struct _KSEMAPHORE *)(v16 + 782);
          *(_DWORD *)(a3 + 120) = 1734964085;
          *((_QWORD *)v16 + 399) = 0LL;
        }
        else
        {
          switch ( a2 )
          {
            case 1u:
              v20 = FdoExt((__int64)a1);
              v21 = v20;
              if ( !*((_BYTE *)v20 + 3408)
                && *((_DWORD **)v20 + 388) == v20 + 776
                && !v20[780]
                && *((_DWORD **)v20 + 603) == v20 + 1206
                && (v20[640] & 0x10) == 0
                && (int)v20[685] <= 1
                && (int)UsbhSsh_CheckPortChangeQueuesIdle(a1) >= 0 )
              {
                *((_BYTE *)v21 + 3408) = 0;
                KeResetEvent((PRKEVENT)v12 + 141);
                *((_BYTE *)v12 + 3416) = 0;
                v22 = FdoExt(*(_QWORD *)(a3 + 8));
                v23 = 8LL * (unsigned int)v22[864];
                v22[781] = 2;
                v22[v23 + 867] = 2;
                *(_DWORD *)(a3 + 120) = 1734964085;
                *((_QWORD *)v22 + 399) = 0LL;
                KeReleaseSemaphore((PRKSEMAPHORE)(v22 + 782), 16, 1, 0);
                UsbhSshSuspendHub(a1);
                return v6;
              }
              *((_BYTE *)v21 + 3408) = 0;
              UsbhUnlockSSH(a3);
              KeWaitForSingleObject(v12 + 790, Executive, 0, 0, 0LL);
              if ( !*((_QWORD *)v12 + 414) && !*((_QWORD *)v12 + 413) && !*((_QWORD *)v12 + 412) )
              {
                v24 = FdoExt((__int64)a1);
                UsbhEnableTimerObject((_DWORD)a1, (_DWORD)v12 + 3200, v12[1314], 0, (__int64)(v24 + 478), 2001228627);
              }
              v18 = (struct _KSEMAPHORE *)(v12 + 790);
              break;
            case 4u:
              v25 = *((_QWORD *)v11 + 413);
              UsbhUnlockSSH(a3);
              return v25 != 0 ? 0xC0000001 : 0;
            case 5u:
              UsbhUnlockSSH(a3);
              return v6;
            default:
              UsbhUnlockSSH(a3);
              return (unsigned int)-1073741823;
          }
        }
        KeReleaseSemaphore(v18, 16, 1, 0);
        return (unsigned int)-1073741823;
      }
      return v6;
    case 2:
      return Usbh_SSH_HubPendingSuspend(a1, a2, a3);
    case 3:
      return Usbh_SSH_HubPendingResumeAfterSuspend(a1, a2, a3);
    case 4:
      return Usbh_SSH_HubSuspended(a1, a2, a3);
    case 5:
      return Usbh_SSH_HubPendingResume(a1, a2, a3);
    case 6:
      return Usbh_SSH_HubFailedResume(a1, v10, a3);
    default:
      UsbhUnlockSSH(a3);
      return 3221225473LL;
  }
}
