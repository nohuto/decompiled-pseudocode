/*
 * XREFs of IopGetFileInformation @ 0x1409212D0
 * Callers:
 *     IopGetRelatedFileName @ 0x140797540 (IopGetRelatedFileName.c)
 *     IopQueryNameInternal @ 0x140920D34 (IopQueryNameInternal.c)
 *     IopGraftName @ 0x140934204 (IopGraftName.c)
 *     IopGetBasicInformationFile @ 0x1409855F8 (IopGetBasicInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  IRP *Irp; // rax
  __int64 v11; // rdx
  IRP *v12; // rbx
  __int64 v13; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v15; // edx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v17 = 0LL;
  PsReferenceSiloContext(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL);
  v12 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = Object;
    v13 = (__int64)Irp;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->UserEvent = &Event;
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v17;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12->Flags = 4100;
    v12->RequestorMode = 0;
    v12->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v12->Flags |= 0x10u;
    v12->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v13, v11);
    v15 = IofCallDriver(RelatedDeviceObject, v12);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v17;
    }
    *a5 = DWORD2(v17);
    return v15;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
