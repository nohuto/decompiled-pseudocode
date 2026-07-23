/*
 * XREFs of FsRtlKernelFsControlFile @ 0x140A23830
 * Callers:
 *     sub_140A22C00 @ 0x140A22C00 (sub_140A22C00.c)
 *     sub_140A231CC @ 0x140A231CC (sub_140A231CC.c)
 *     sub_140A23D94 @ 0x140A23D94 (sub_140A23D94.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrpEx @ 0x14026BAA0 (IoAllocateIrpEx.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MmProbeAndLockPages @ 0x1403A1980 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     FsRtlpFreeMdlChain @ 0x140A22BB8 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        int a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  char v9; // r13
  __int64 v11; // rbx
  int v12; // r13d
  __int64 v13; // rdx
  __int64 Irp; // rax
  __int64 v15; // rcx
  ULONG v16; // r14d
  __int64 v17; // rax
  int v18; // esi
  ULONG v19; // ecx
  NTSTATUS v20; // eax
  struct _MDL *Mdl; // rax
  struct _MDL *v22; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-38h]
  struct _KEVENT Object; // [rsp+48h] [rbp-30h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = v9 & 3;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    v18 = -1073741808;
    goto LABEL_35;
  }
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v13) = DeviceObject->StackSize;
  Irp = IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = Irp;
  if ( !Irp )
    goto LABEL_24;
  v15 = *(_QWORD *)(Irp + 184);
  *(_WORD *)(v15 - 72) = 1037;
  *(_QWORD *)(v15 - 24) = FileObject;
  v16 = Length;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v7;
  *(_DWORD *)(v15 - 48) = a2;
  if ( !v12 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        *(_QWORD *)(Irp + 24) = a3;
      }
      else
      {
        *(_QWORD *)(Irp + 24) = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
      }
      *(_DWORD *)(v11 + 16) = 16;
      *(_QWORD *)(v11 + 112) = VirtualAddress;
      if ( VirtualAddress )
        *(_DWORD *)(v11 + 16) = 80;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 0;
      *(_QWORD *)(Irp + 112) = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 == 1 || v12 == 2 )
  {
    if ( a3 )
    {
      *(_QWORD *)(Irp + 24) = a3;
      *(_DWORD *)(Irp + 16) = 16;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 0;
    }
    if ( !VirtualAddress )
      goto LABEL_10;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    *(_QWORD *)(v11 + 8) = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(v12 != 1));
      goto LABEL_10;
    }
LABEL_24:
    v18 = -1073741670;
    goto LABEL_35;
  }
  *(_QWORD *)(Irp + 112) = VirtualAddress;
  *(_QWORD *)(v15 - 40) = a3;
LABEL_10:
  *(_QWORD *)(v11 + 152) = KeGetCurrentThread();
  *(_DWORD *)(v11 + 16) |= 4u;
  *(_BYTE *)(v11 + 64) = 0;
  v17 = *(_QWORD *)(v11 + 184);
  *(_QWORD *)(v17 - 16) = CmpCompleteFlushAndPurgeIrp;
  *(_QWORD *)(v17 - 8) = &Object;
  *(_BYTE *)(v17 - 69) = 0;
  *(_BYTE *)(v17 - 69) = 64;
  *(_BYTE *)(v17 - 69) = -64;
  *(_BYTE *)(v17 - 69) = -32;
  if ( IofCallDriver(DeviceObject, (PIRP)v11) == 259 )
  {
    while ( 1 )
    {
      v20 = KeWaitForSingleObject(&Object, Executive, 0, 1u, 0LL);
      if ( v20 != 257 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
        goto LABEL_23;
    }
    if ( v20 != -1073741749 )
      goto LABEL_11;
LABEL_23:
    IoCancelIrp((PIRP)v11);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
LABEL_11:
  v18 = *(_DWORD *)(v11 + 48);
  v19 = *(_DWORD *)(v11 + 56);
  *a7 = v19;
  if ( v18 >= 0 && v19 && (unsigned int)v7 >= Length )
  {
    if ( v19 < Length )
      v16 = v19;
    memmove(VirtualAddress, a3, v16);
  }
LABEL_35:
  if ( v11 )
  {
    v22 = *(struct _MDL **)(v11 + 8);
    if ( v22 )
    {
      FsRtlpFreeMdlChain(v22);
      *(_QWORD *)(v11 + 8) = 0LL;
    }
    IoFreeIrp((PIRP)v11);
  }
  return (unsigned int)v18;
}
