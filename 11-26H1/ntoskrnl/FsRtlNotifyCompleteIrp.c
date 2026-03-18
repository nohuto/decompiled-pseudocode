/*
 * XREFs of FsRtlNotifyCompleteIrp @ 0x140A85F54
 * Callers:
 *     FsRtlNotifyFilterChangeDirectory @ 0x140A85310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x140A856F4 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140A85820 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrpList @ 0x140A85EB8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140A860F0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403BCF90 (PsReturnProcessPagedPoolQuota.c)
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1404A3ED0 (FsRtlNotifySetCancelRoutine.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlNotifyCompleteIrp(PIRP Irp, __int64 a2, unsigned int a3, NTSTATUS a4, int a5)
{
  size_t v6; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IRP **v10; // r15
  struct _IRP *v11; // rdx
  struct _IRP *MasterIrp; // rcx
  PMDL MdlAddress; // rcx
  struct _IRP *MappedSystemVa; // rax
  struct _IRP *v15; // rcx

  v6 = a3;
  if ( FsRtlNotifySetCancelRoutine((__int64)Irp, a2) || !a5 )
  {
    if ( a4 )
    {
LABEL_21:
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      Irp->IoStatus.Status = a4;
      IofCompleteRequest(Irp, 1);
      return;
    }
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( !(_DWORD)v6 || CurrentStackLocation->Parameters.Read.Length < (unsigned int)v6 )
    {
      a4 = 268;
      goto LABEL_21;
    }
    v10 = (struct _IRP **)(a2 + 80);
    v11 = *(struct _IRP **)(a2 + 80);
    if ( !v11 )
    {
LABEL_20:
      Irp->IoStatus.Information = (unsigned int)v6;
      *(_QWORD *)(a2 + 88) = 0LL;
      goto LABEL_21;
    }
    MasterIrp = Irp->AssociatedIrp.MasterIrp;
    if ( !MasterIrp )
    {
      MdlAddress = Irp->MdlAddress;
      if ( !MdlAddress )
      {
        if ( (CurrentStackLocation->Control & 1) != 0 )
        {
          Irp->Flags |= 0x70u;
          Irp->AssociatedIrp.MasterIrp = *v10;
        }
        else
        {
          RtlCopyToUser(Irp->UserBuffer, v11, v6);
        }
        goto LABEL_18;
      }
      if ( (MdlAddress->MdlFlags & 5) != 0 )
        MappedSystemVa = (struct _IRP *)MdlAddress->MappedSystemVa;
      else
        MappedSystemVa = (struct _IRP *)MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !MappedSystemVa )
      {
        a4 = 268;
        LODWORD(v6) = 0;
        goto LABEL_18;
      }
      v11 = *v10;
      MasterIrp = MappedSystemVa;
    }
    memmove(MasterIrp, v11, v6);
LABEL_18:
    PsReturnProcessPagedPoolQuota(*(_QWORD *)(a2 + 120), *(unsigned int *)(a2 + 100));
    v15 = *v10;
    if ( *v10 != Irp->AssociatedIrp.MasterIrp )
    {
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
    }
    *v10 = 0LL;
    *(_DWORD *)(a2 + 100) = 0;
    goto LABEL_20;
  }
}
