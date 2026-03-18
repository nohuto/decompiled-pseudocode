/*
 * XREFs of ACPIInternalSendSynchronousIrp @ 0x1400C27F8
 * Callers:
 *     ACPIInternalQueryExtendedAddress @ 0x140048364 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIBusIrpQueryInterface @ 0x14005A800 (ACPIBusIrpQueryInterface.c)
 *     ACPIQueryGedDeviceInterface @ 0x140062040 (ACPIQueryGedDeviceInterface.c)
 *     ACPIWakeInitializePmeRouting @ 0x14006B128 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1400BC558 (PcisuppInitializePciRouting.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1400C1E54 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1400C1F40 (ACPIBusIrpDeviceUsageNotification.c)
 *     AcpiQueryPciBusInterface @ 0x1400C2130 (AcpiQueryPciBusInterface.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1400C2610 (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIMatchHardwareAddress @ 0x1400C268C (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1400C29C8 (ACPIMatchHardwareId.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ACPIInternalSendSynchronousIrp(PDEVICE_OBJECT DeviceObject, __int64 a2, unsigned __int64 *a3)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v7; // rax
  IRP *v8; // rdx
  __int64 v9; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v7 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  v8 = v7;
  if ( v7 )
  {
    v7->IoStatus.Status = -1073741637;
    v7->IoStatus.Information = 0LL;
    v9 = (__int64)&v7->Tail.Overlay.CurrentStackLocation[-1];
    if ( v9 )
    {
      *(_OWORD *)v9 = *(_OWORD *)a2;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v9 + 64) = *(_QWORD *)(a2 + 64);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = 0LL;
      CurrentStackLocation[-1].Context = 0LL;
      CurrentStackLocation[-1].Control = 0;
      Status = IofCallDriver(AttachedDeviceReference, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 && a3 )
        *a3 = IoStatusBlock.Information;
    }
    else
    {
      Status = -1073741811;
    }
  }
  else
  {
    Status = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      5,
      12,
      (__int64)&WPP_d6bb3916a2893b5fc21aa06e27a6e069_Traceguids,
      (char)DeviceObject,
      Status);
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
