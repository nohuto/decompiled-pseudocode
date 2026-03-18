/*
 * XREFs of UsbhFdoCheckUpstreamConnectionState @ 0x140006600
 * Callers:
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhCheckHubPowerStatus @ 0x14004A07C (UsbhCheckHubPowerStatus.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhFdoPnp_QueryStop @ 0x1400506F0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051E30 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhFdoCheckUpstreamConnectionState(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  PIRP v7; // rax
  IRP *v8; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // r9d
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v6 = FdoExt(a1, a2, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v7 = IoBuildDeviceIoControlRequest(
         0x220013u,
         *(PDEVICE_OBJECT *)(v6 + 1208),
         0LL,
         0,
         0LL,
         0,
         1u,
         &Event,
         &IoStatusBlock);
  v8 = v7;
  if ( v7 )
  {
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)a2;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), v8);
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
  v11 = *a2;
  if ( (UsbhLogMask & 8) == 0 || !a1 )
    return Status;
  v12 = *(_QWORD *)(a1 + 64);
  result = Status;
  if ( v12 )
  {
    v14 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884);
    v15 = *(_QWORD *)(v12 + 888);
    v14 *= 32LL;
    *(_DWORD *)(v14 + v15) = 1400074357;
    *(_QWORD *)(v14 + v15 + 24) = (int)Status;
    *(_QWORD *)(v14 + v15 + 8) = 0LL;
    *(_QWORD *)(v14 + v15 + 16) = v11;
  }
  return result;
}
