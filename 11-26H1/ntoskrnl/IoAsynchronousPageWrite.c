/*
 * XREFs of IoAsynchronousPageWrite @ 0x14026E454
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1403C1974 (MiIssueAsynchronousFlush.c)
 *     MiModwriterIssueWrite @ 0x140408928 (MiModwriterIssueWrite.c)
 *     MiGatherMappedPages @ 0x140496CD8 (MiGatherMappedPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x140269D74 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x14026C320 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateIrpExReturn @ 0x14026C640 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026CA30 (IoGetRelatedDeviceObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026CD00 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateReserveIrp @ 0x14027006C (IopAllocateReserveIrp.c)
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateBackpocketIrp @ 0x140531A0C (IopAllocateBackpocketIrp.c)
 *     StRtlIoStorInfoSetNvCachePriority @ 0x14071C7DC (StRtlIoStorInfoSetNvCachePriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall IoAsynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        LARGE_INTEGER a4,
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 a9,
        struct _IO_STATUS_BLOCK *a10,
        IRP **a11)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  NTSTATUS result; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 ReserveIrp; // rax
  unsigned __int8 CurrentIrql; // bl

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v17) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v17, 0LL);
  if ( !Irp )
  {
    if ( MmIsFileObjectAPagingFile((unsigned __int64)a1, v18) )
    {
      _InterlockedAdd(&IoAsynchronousPageWriteIrpAllocationFailure, 1u);
      LOBYTE(v24) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v25, v24, 1LL);
    }
    else
    {
      _InterlockedAdd(&IoAsynchronousPageWriteNonPagefileIrpAllocationFailure, 1u);
      LOBYTE(v24) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v24, 0LL);
    }
    Irp = (IRP *)ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  if ( a11 )
    *a11 = Irp;
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = 3;
  Irp->Flags = ((a6 + 1) << 17) | 3;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a10;
  Irp->Overlay.AllocationSize = a4;
  Irp->Overlay.AsynchronousParameters.UserApcContext = a5;
  CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.Length = a2->ByteCount;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Flags |= a8;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentThread = KeGetCurrentThread();
  if ( a9 )
    IopSetDiskIoAttributionExtension((__int64)Irp, *(_QWORD *)(a9 + 24), (__int64)CurrentThread, 0);
  else
    IoSetDiskIoAttributionFromThread((__int64)Irp, CurrentThread);
  IopQueueThreadIrp(Irp);
  if ( a7 )
    StRtlIoStorInfoSetNvCachePriority(Irp);
  result = IofCallDriver(RelatedDeviceObject, Irp);
  v23 = result & 0xC0000000;
  if ( (_DWORD)v23 == -1073741824 )
  {
    a10->Status = result;
    a10->Information = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v23) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v23, 1LL);
    }
    guard_dispatch_icall_no_overrides(a5, a10, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 259;
  }
  return result;
}
