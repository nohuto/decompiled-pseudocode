/*
 * XREFs of UsbhUnlockSSH @ 0x140029140
 * Callers:
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     Usbh_SSH_HubActive @ 0x14001B5C0 (Usbh_SSH_HubActive.c)
 *     Usbh_SSH_HubSuspended @ 0x140028CA4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x140028E08 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResume @ 0x140028F5C (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubFailedResume @ 0x14005F334 (Usbh_SSH_HubFailedResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005F3B0 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockSSH(__int64 a1, int a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r8

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  v5 = 8LL * (unsigned int)v4[864];
  v4[781] = a2;
  v4[v5 + 867] = a2;
  *(_DWORD *)(a1 + 120) = 1734964085;
  *((_QWORD *)v4 + 399) = 0LL;
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 782), 16, 1, 0);
}
