/*
 * XREFs of Usbh_SSH_Event @ 0x14001B400
 * Callers:
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhAcquireEnumBusLock @ 0x14000A5D8 (UsbhAcquireEnumBusLock.c)
 *     UsbhFdoReturnPortStatus @ 0x140017DD0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     Usbh_SSH_HubSuspended @ 0x140028CA4 (Usbh_SSH_HubSuspended.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhInternalIoctlPropagateResume @ 0x140033A08 (UsbhInternalIoctlPropagateResume.c)
 *     UsbhQueryBusRelations @ 0x140034C9C (UsbhQueryBusRelations.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhHubSSH_Worker @ 0x140036970 (UsbhHubSSH_Worker.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhAsyncStop @ 0x14004FC58 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1400506F0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051E30 (Usbh_FDO_WaitPnpStop.c)
 *     UsbhSShResumeWorker @ 0x14005EE50 (UsbhSShResumeWorker.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_HubActive @ 0x14001B5C0 (Usbh_SSH_HubActive.c)
 *     Usbh_SSH_HubSuspended @ 0x140028CA4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x140028E08 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResume @ 0x140028F5C (Usbh_SSH_HubPendingResume.c)
 *     UsbhUnlockSSH @ 0x140029140 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     Usbh_SSH_HubFailedResume @ 0x14005F334 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005F3B0 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall Usbh_SSH_Event(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v6; // rbp
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids,
      a2);
  v6 = FdoExt(*(_QWORD *)(a3 + 8));
  KeWaitForSingleObject(v6 + 782, Executive, 0, 0, 0LL);
  *((_QWORD *)v6 + 399) = a3;
  *(_DWORD *)(a3 + 120) = 2018005843;
  *(_DWORD *)(a3 + 124) = a2;
  *(_QWORD *)(a3 + 24) = KeGetCurrentThread();
  v7 = v6[864];
  v8 = 8LL * (v7 & 7);
  if ( v6[v8 + 865] != a2 || v6[v8 + 866] != v6[781] )
  {
    v11 = ((_BYTE)v7 + 1) & 7;
    v6[864] = v11;
    v11 *= 32LL;
    *(_DWORD *)((char *)v6 + v11 + 3460) = a2;
    *(_DWORD *)((char *)v6 + v11 + 3464) = v6[781];
  }
  v9 = (unsigned int)v6[781];
  switch ( (_DWORD)v9 )
  {
    case 1:
      return Usbh_SSH_HubActive(a1, a2, a3);
    case 2:
      return Usbh_SSH_HubPendingSuspend(a1, a2, a3);
    case 3:
      return Usbh_SSH_HubPendingResumeAfterSuspend(a1, a2, a3);
    case 4:
      return Usbh_SSH_HubSuspended(a1, a2, a3);
    case 5:
      return Usbh_SSH_HubPendingResume(a1, a2, a3);
    case 6:
      return Usbh_SSH_HubFailedResume(a1, v9, a3);
  }
  UsbhUnlockSSH(a3);
  return 3221225473LL;
}
