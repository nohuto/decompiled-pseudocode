/*
 * XREFs of IopGetFileInformation @ 0x1409FC6D0
 * Callers:
 *     IopGetRelatedFileName @ 0x140794A10 (IopGetRelatedFileName.c)
 *     IopGraftName @ 0x140904274 (IopGraftName.c)
 *     IopGetBasicInformationFile @ 0x1409B4538 (IopGetBasicInformationFile.c)
 *     IopQueryNameInternal @ 0x1409FC134 (IopQueryNameInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
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
