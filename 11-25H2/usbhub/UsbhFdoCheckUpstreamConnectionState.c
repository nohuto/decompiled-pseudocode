/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x140029630
 * Callers:
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhSshResumePort @ 0x140028064 (UsbhSshResumePort.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhCheckHubPowerStatus @ 0x14004A4CC (UsbhCheckHubPowerStatus.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x140050220 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, unsigned int *a2)
{
  PDEVICE_OBJECT *v4; // rsi
  PIRP v5; // rax
  IRP *v6; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // r9d
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(0x220013u, v4[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  v6 = v5;
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(v4[151], v6);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v9 = *a2;
  if ( (UsbhLogMask & 8) == 0 || !a1 )
    return Status;
  v10 = *(_QWORD *)(a1 + 64);
  result = Status;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
    *(_DWORD *)v12 = 1400074357;
    *(_QWORD *)(v12 + 24) = (int)Status;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_QWORD *)(v12 + 16) = v9;
  }
  return result;
}
