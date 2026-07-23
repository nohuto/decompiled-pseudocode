/*
 * XREFs of IopFilterResourceRequirementsCall @ 0x140AA0E80
 * Callers:
 *     IopQueryDeviceResources @ 0x140AA0860 (IopQueryDeviceResources.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IovUtilWatermarkIrp @ 0x1404B853C (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall IopFilterResourceRequirementsCall(struct _DEVICE_OBJECT *a1, ULONG_PTR a2, _QWORD *a3)
{
  PDEVICE_OBJECT AttachedDeviceReference; // rsi
  PIRP Irp; // rax
  IRP *v7; // rbx
  __int64 v8; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v12 = 0LL;
  AttachedDeviceReference = IoGetAttachedDeviceReference(a1);
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  v7 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a2 )
    {
      v7->IoStatus.Status = 0;
      *((_QWORD *)&v12 + 1) = a2;
      v7->IoStatus.Information = a2;
    }
    else
    {
      LODWORD(v12) = -1073741637;
      v7->IoStatus.Status = -1073741637;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v7->UserIosb = (PIO_STATUS_BLOCK)&v12;
    v7->UserEvent = &Event;
    v7->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v7, v8);
    CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 3355;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    v10 = IofCallDriver(AttachedDeviceReference, v7);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v12;
    }
    *a3 = *((_QWORD *)&v12 + 1);
  }
  else
  {
    v10 = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return v10;
}
