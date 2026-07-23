/*
 * XREFs of FsRtlQueryKernelEaFile @ 0x140A23B80
 * Callers:
 *     sub_140A23D94 @ 0x140A23D94 (sub_140A23D94.c)
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

__int64 __fastcall FsRtlQueryKernelEaFile(
        PFILE_OBJECT FileObject,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        char a8,
        _DWORD *a9)
{
  __int64 v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v15; // rdx
  __int64 Irp; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edi
  NTSTATUS v21; // eax
  struct _MDL *v22; // rcx
  struct _KEVENT Object; // [rsp+40h] [rbp-38h] BYREF

  v13 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    v20 = -1073741808;
  }
  else
  {
    RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v15) = RelatedDeviceObject->StackSize;
    Irp = IoAllocateIrpEx((__int64)RelatedDeviceObject, v15, 0LL);
    v13 = Irp;
    if ( Irp )
    {
      v17 = *(_QWORD *)(Irp + 184);
      *(_BYTE *)(v17 - 72) = 7;
      *(_QWORD *)(v17 - 24) = FileObject;
      *(_QWORD *)(Irp + 112) = a2;
      *(_DWORD *)(v17 - 64) = a3;
      *(_QWORD *)(v17 - 56) = a5;
      *(_DWORD *)(v17 - 48) = a6;
      v18 = (_BYTE *)(v17 - 70);
      if ( a7 )
      {
        *(_DWORD *)(v17 - 40) = *a7;
        *v18 |= 4u;
      }
      else
      {
        *(_DWORD *)(v17 - 40) = 0;
      }
      if ( a8 )
        *v18 |= 1u;
      if ( a4 )
        *v18 |= 2u;
      *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
      *(_DWORD *)(Irp + 16) = 4;
      *(_BYTE *)(Irp + 64) = 0;
      v19 = *(_QWORD *)(Irp + 184);
      *(_QWORD *)(v19 - 16) = CmpCompleteFlushAndPurgeIrp;
      *(_QWORD *)(v19 - 8) = &Object;
      *(_BYTE *)(v19 - 69) = 0;
      *(_BYTE *)(v19 - 69) = 64;
      *(_BYTE *)(v19 - 69) = -64;
      *(_BYTE *)(v19 - 69) = -32;
      if ( IofCallDriver(RelatedDeviceObject, (PIRP)v13) == 259 )
      {
        while ( 1 )
        {
          v21 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
          if ( v21 != 257 )
            break;
          if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
            goto LABEL_13;
        }
        if ( v21 != -1073741749 )
          goto LABEL_10;
LABEL_13:
        IoCancelIrp((PIRP)v13);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
LABEL_10:
      v20 = *(_DWORD *)(v13 + 48);
      *a9 = *(_DWORD *)(v13 + 56);
    }
    else
    {
      v20 = -1073741670;
    }
  }
  if ( v13 )
  {
    v22 = *(struct _MDL **)(v13 + 8);
    if ( v22 )
    {
      FsRtlpFreeMdlChain(v22);
      *(_QWORD *)(v13 + 8) = 0LL;
    }
    IoFreeIrp((PIRP)v13);
  }
  return v20;
}
