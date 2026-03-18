/*
 * XREFs of CcSetValidData @ 0x14048FE94
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140384CD4 (CcWriteBehindPostProcess.c)
 * Callees:
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoAllocateIrp @ 0x14026C4D0 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140B5F268 (CcSetTelemetryPeriodicTimer.c)
 */

__int64 __fastcall CcSetValidData(PFILE_OBJECT FileObject, __int64 *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v7; // ecx
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v11; // [rsp+42h] [rbp-1Eh]
  char v12; // [rsp+43h] [rbp-1Dh]
  int v13; // [rsp+44h] [rbp-1Ch]
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+18h] BYREF

  ++*(_QWORD *)&EmpParseLock.WaitBlockFill11[16];
  v12 = 0;
  v9 = 0LL;
  if ( !BYTE1(EmpParseLock.Timer.DueTime.LowPart)
    && !HIDWORD(EmpParseLock.AffinityVersion)
    && LOBYTE(EmpParseLock.WaitListEntry.Flink)
    && !LODWORD(EmpParseLock.AffinityVersion) )
  {
    CcSetTelemetryPeriodicTimer((LARGE_INTEGER)EmpParseLock.RelativeTimerBias);
  }
  v15 = *a2;
  v14[1] = v14;
  v14[0] = v14;
  Object = 0;
  v11 = 6;
  v13 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Flags = 66;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)&v9;
  Irp->UserEvent = (PKEVENT)&Object;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v15;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
  CurrentStackLocation[-1].Parameters.SetFile.AdvanceOnly = 1;
  v7 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return (unsigned int)v9;
  }
  else
  {
    result = (unsigned int)v9;
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  return result;
}
