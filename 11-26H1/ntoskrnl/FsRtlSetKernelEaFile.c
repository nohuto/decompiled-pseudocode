/*
 * XREFs of FsRtlSetKernelEaFile @ 0x140A23020
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x1404E3E08 (CmpAdjustFileCFSafety.c)
 *     sub_140A231CC @ 0x140A231CC (sub_140A231CC.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrpEx @ 0x14026BAA0 (IoAllocateIrpEx.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     FsRtlpFreeMdlChain @ 0x140A22BB8 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlSetKernelEaFile(PFILE_OBJECT FileObject, void *a2, int a3)
{
  IRP *v6; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v8; // rdx
  __int64 Irp; // rax
  __int64 v10; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // edi
  NTSTATUS v13; // eax
  struct _MDL *MdlAddress; // rcx
  struct _KEVENT Object[2]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0LL;
  memset(Object, 0, 24);
  KeInitializeEvent(Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v8) = RelatedDeviceObject->StackSize;
    Irp = IoAllocateIrpEx((__int64)RelatedDeviceObject, v8, 0LL);
    v6 = (IRP *)Irp;
    if ( Irp )
    {
      v10 = *(_QWORD *)(Irp + 184);
      *(_WORD *)(v10 - 72) = 1032;
      *(_QWORD *)(v10 - 24) = FileObject;
      v6->UserBuffer = a2;
      *(_DWORD *)(v10 - 64) = a3;
      v6->Tail.Overlay.Thread = KeGetCurrentThread();
      v6->Flags = 4;
      v6->RequestorMode = 0;
      CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)CmpCompleteFlushAndPurgeIrp;
      CurrentStackLocation[-1].Context = Object;
      CurrentStackLocation[-1].Control = 0;
      CurrentStackLocation[-1].Control = 64;
      CurrentStackLocation[-1].Control = -64;
      CurrentStackLocation[-1].Control = -32;
      if ( IofCallDriver(RelatedDeviceObject, v6) == 259 )
      {
        while ( 1 )
        {
          v13 = KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
          if ( v13 != 257 )
            break;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
            goto LABEL_7;
        }
        if ( v13 != -1073741749 )
          goto LABEL_4;
LABEL_7:
        IoCancelIrp(v6);
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      }
LABEL_4:
      Status = v6->IoStatus.Status;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v6 )
  {
    MdlAddress = v6->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v6->MdlAddress = 0LL;
    }
    IoFreeIrp(v6);
  }
  return Status;
}
