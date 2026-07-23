/*
 * XREFs of FsRtlQueryInformationFile @ 0x140AB5E30
 * Callers:
 *     <none>
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

NTSTATUS __stdcall FsRtlQueryInformationFile(
        PFILE_OBJECT FileObject,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        PULONG RetFileInformationSize)
{
  __int64 v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v11; // rdx
  __int64 Irp; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  NTSTATUS v15; // eax
  NTSTATUS v16; // edi
  struct _MDL *v17; // rcx
  struct _KEVENT Object; // [rsp+40h] [rbp-38h] BYREF

  v9 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    v16 = -1073741808;
  }
  else
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v11) = RelatedDeviceObject->StackSize;
    Irp = IoAllocateIrpEx((__int64)RelatedDeviceObject, v11, 0LL);
    v9 = Irp;
    if ( Irp )
    {
      v13 = *(_QWORD *)(Irp + 184);
      *(_WORD *)(v13 - 72) = 1029;
      *(_QWORD *)(v13 - 24) = FileObject;
      *(_QWORD *)(v9 + 24) = FileInformation;
      *(_DWORD *)(v13 - 64) = Length;
      *(_DWORD *)(v13 - 56) = FileInformationClass;
      *(_QWORD *)(v9 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v9 + 16) |= 4u;
      *(_BYTE *)(v9 + 64) = 0;
      v14 = *(_QWORD *)(v9 + 184);
      *(_QWORD *)(v14 - 16) = CmpCompleteFlushAndPurgeIrp;
      *(_QWORD *)(v14 - 8) = &Object;
      *(_BYTE *)(v14 - 69) = 0;
      *(_BYTE *)(v14 - 69) = 64;
      *(_BYTE *)(v14 - 69) = -64;
      *(_BYTE *)(v14 - 69) = -32;
      if ( IofCallDriver(RelatedDeviceObject, (PIRP)v9) == 259 )
      {
        while ( 1 )
        {
          v15 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
          if ( v15 != 257 )
            break;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
            goto LABEL_9;
        }
        if ( v15 != -1073741749 )
          goto LABEL_6;
LABEL_9:
        IoCancelIrp((PIRP)v9);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
LABEL_6:
      v16 = *(_DWORD *)(v9 + 48);
      *RetFileInformationSize = *(_DWORD *)(v9 + 56);
    }
    else
    {
      v16 = -1073741670;
    }
  }
  if ( v9 )
  {
    v17 = *(struct _MDL **)(v9 + 8);
    if ( v17 )
    {
      FsRtlpFreeMdlChain(v17);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    IoFreeIrp((PIRP)v9);
  }
  return v16;
}
