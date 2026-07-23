/*
 * XREFs of MiSynchronousPageWrite @ 0x14026AA34
 * Callers:
 *     MiZeroPageFileFirstPage @ 0x140872E7C (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x14026B890 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetBaseIoPriorityThread @ 0x14026C7A0 (PsGetBaseIoPriorityThread.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 */

NTSTATUS __fastcall MiSynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 Irp; // rbx
  int BaseIoPriorityThread; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 ReserveIrp; // rax
  struct _KTHREAD *CurrentThread; // rcx

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn(RelatedDeviceObject, v13, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
    {
      _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateReserveIrp(v22, v21, 1LL);
    }
    else
    {
      _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
      LOBYTE(v21) = RelatedDeviceObject->StackSize;
      ReserveIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v21, 0LL);
    }
    Irp = ReserveIrp;
    if ( !ReserveIrp )
      return -1073741670;
  }
  *(_BYTE *)(Irp + 71) |= 0x20u;
  *(_QWORD *)(Irp + 8) = a2;
  *(_DWORD *)(Irp + 16) = 67;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), v14);
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (struct _KTHREAD *)v17 == KeGetCurrentThread() && *(_DWORD *)(v17 + 1504) )
    {
      BaseIoPriorityThread = 2;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->MiscFlags & 0x400) != 0
        || CurrentThread->PreviousMode == 1
        || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0
        || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
      {
        ++IoPagingWriteLowPriorityCount;
      }
      else
      {
        ++IoPagingWriteLowPriorityBumpedCount;
        BaseIoPriorityThread = 2;
      }
    }
  }
  v19 = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = a4;
  *(_QWORD *)(Irp + 72) = a7;
  *(_DWORD *)(Irp + 16) = v19 | ((BaseIoPriorityThread + 1) << 17);
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = a1;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v18 - 72) = 4;
  *(_DWORD *)(v18 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v18 - 48) = *a3;
  *(_BYTE *)(v18 - 70) |= a5;
  *(_QWORD *)(v18 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), *(_QWORD *)(Irp + 152), 0);
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  IopQueueThreadIrp(Irp);
  return IofCallDriver(RelatedDeviceObject, (PIRP)Irp);
}
