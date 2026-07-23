/*
 * XREFs of CmpFileFlushAndPurge @ 0x140AA84FC
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x140AA7DD4 (HvWriteLogFile.c)
 *     HvWriteHivePrimaryFile @ 0x140AA80BC (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140AA83C0 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140B5D918 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpFileFlush @ 0x140AA8F74 (CmpFileFlush.c)
 */

__int64 __fastcall CmpFileFlushAndPurge(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PIRP v4; // rdi
  void *v5; // rcx
  NTSTATUS v6; // eax
  struct _FILE_OBJECT *v7; // rsi
  unsigned int Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v12; // rax
  struct _KEVENT v14; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  memset(&v14, 0, sizeof(v14));
  KeInitializeEvent(&v14, SynchronizationEvent, 0);
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 && !(_DWORD)v2 )
  {
    return (unsigned int)CmpFileFlush(a1, 0LL);
  }
  else
  {
    v5 = *(void **)(a1 + 8 * v2 + 1544);
    if ( v5 )
    {
      if ( BYTE1(NlsMbOemCodePageTag) )
      {
        return (unsigned int)-1073741823;
      }
      else
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(
               v5,
               2u,
               (POBJECT_TYPE)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink,
               0,
               &Object,
               0LL);
        v7 = (struct _FILE_OBJECT *)Object;
        Status = v6;
        if ( v6 >= 0 )
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
          Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
          v4 = Irp;
          if ( Irp )
          {
            Irp->Tail.Overlay.OriginalFileObject = v7;
            Irp->Tail.Overlay.Thread = KeGetCurrentThread();
            CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
            v4->Tail.Overlay.AuxiliaryBuffer = 0LL;
            *(_WORD *)&v4->RequestorMode = 0;
            v4->Overlay.AllocationSize.QuadPart = 0LL;
            v4->Cancel = 0;
            v4->CancelRoutine = 0LL;
            *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 265;
            CurrentStackLocation[-1].FileObject = v7;
            CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
            v12 = v4->Tail.Overlay.CurrentStackLocation;
            v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)CmpCompleteFlushAndPurgeIrp;
            v12[-1].Context = &v14;
            v12[-1].Control = -32;
            Status = IofCallDriver(RelatedDeviceObject, v4);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&v14, Executive, 0, 0, 0LL);
              Status = v4->IoStatus.Status;
            }
          }
          else
          {
            Status = -1073741670;
          }
        }
        if ( v7 )
          ObfDereferenceObject(v7);
        if ( v4 )
          IoFreeIrp(v4);
      }
    }
    else
    {
      return 0;
    }
  }
  return Status;
}
