/*
 * XREFs of RaSendIrpSynchronous @ 0x140037340
 * Callers:
 *     RaForwardIrpSynchronous @ 0x1400372E8 (RaForwardIrpSynchronous.c)
 *     RaQueryInterface @ 0x140049534 (RaQueryInterface.c)
 *     RaUnitAtaPassThroughIoctl @ 0x140055654 (RaUnitAtaPassThroughIoctl.c)
 *     TcglibEalExecuteCommandSync @ 0x14008CF08 (TcglibEalExecuteCommandSync.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitSmartDataIoctl @ 0x1400A1658 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1400A1EE4 (RaUnitSmartReturnStatus.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1400A863C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1400A8D98 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1400A90F8 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1400A94CC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     NvmeNamespaceDeviceUsageNotificationIrp @ 0x1401033E8 (NvmeNamespaceDeviceUsageNotificationIrp.c)
 *     NvmeNamespaceStorageQueryAdapterPropertyIoctl @ 0x1401BACC8 (NvmeNamespaceStorageQueryAdapterPropertyIoctl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(DeviceObject, Irp);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return 0;
  }
  return result;
}
