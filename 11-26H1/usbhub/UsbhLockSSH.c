/*
 * XREFs of UsbhLockSSH @ 0x1400291C0
 * Callers:
 *     Usbh_SSH_HubPendingSuspend @ 0x140028E08 (Usbh_SSH_HubPendingSuspend.c)
 *     Usbh_SSH_HubPendingResume @ 0x140028F5C (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x14005F3B0 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhLockSSH(__int64 a1, int a2)
{
  _DWORD *v4; // rdi
  int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v9; // rdx

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  KeWaitForSingleObject(v4 + 782, Executive, 0, 0, 0LL);
  *((_QWORD *)v4 + 399) = a1;
  *(_DWORD *)(a1 + 120) = 2018005843;
  *(_DWORD *)(a1 + 124) = a2;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  v5 = v4[864];
  v6 = 8LL * (v5 & 7);
  if ( v4[v6 + 865] == a2 )
  {
    v7 = v4[781];
    if ( v4[v6 + 866] == v7 )
      return v7;
  }
  v9 = ((_BYTE)v5 + 1) & 7;
  v4[864] = v9;
  v9 *= 32LL;
  *(_DWORD *)((char *)v4 + v9 + 3460) = a2;
  *(_DWORD *)((char *)v4 + v9 + 3464) = v4[781];
  return (unsigned int)v4[781];
}
