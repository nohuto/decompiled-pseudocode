/*
 * XREFs of sub_1401AD558 @ 0x1401AD558
 * Callers:
 *     sub_14019C090 @ 0x14019C090 (sub_14019C090.c)
 *     sub_1401ACC34 @ 0x1401ACC34 (sub_1401ACC34.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1401AD558(PDEVICE_OBJECT DeviceObject, _DWORD *Dst)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v5; // rax
  IRP *v6; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v8; // rbx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset_0(Dst, 0, 0x40uLL);
  *Dst = 65600;
  Dst[3] = -1;
  Dst[2] = -1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v6 = v5;
  if ( v5 )
  {
    v5->IoStatus.Information = 0LL;
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Status = -1073741637;
    v8 = CurrentStackLocation - 1;
    if ( v8 )
    {
      memset_0(v8, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&v8->MajorFunction = 2331;
      v8->Parameters.WMI.ProviderId = (ULONG_PTR)Dst;
      Status = IofCallDriver(AttachedDeviceReference, v6);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
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
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
