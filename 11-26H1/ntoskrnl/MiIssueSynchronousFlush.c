/*
 * XREFs of MiIssueSynchronousFlush @ 0x14026ACAC
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x14026B890 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 */

int __fastcall MiIssueSynchronousFlush(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3, char a4, __int64 a5, int *a6)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v12; // rdx
  __int64 Irp; // rbx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v16; // edx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int result; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 BackpocketIrp; // rax
  struct _KTHREAD *v25; // rcx
  __int64 Object; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-30h] BYREF

  Object = 393216LL;
  v27[1] = v27;
  v27[0] = v27;
  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn(RelatedDeviceObject, v12, 0LL);
  if ( Irp
    || (!(unsigned int)MmIsFileObjectAPagingFile(a1)
      ? (_InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure),
         LOBYTE(v22) = RelatedDeviceObject->StackSize,
         BackpocketIrp = IopAllocateBackpocketIrp(RelatedDeviceObject, v22, 0LL))
      : (_InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure),
         LOBYTE(v22) = RelatedDeviceObject->StackSize,
         BackpocketIrp = IopAllocateReserveIrp(v23, v22, 1LL)),
        (Irp = BackpocketIrp) != 0) )
  {
    *(_BYTE *)(Irp + 71) |= 0x20u;
    v14 = *(_QWORD *)(Irp + 184);
    *(_QWORD *)(Irp + 8) = a2;
    *(_DWORD *)(Irp + 16) = 67;
    CurrentThread = KeGetCurrentThread();
    v16 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v17 = CurrentThread->Process[1].Padding[3];
    if ( v17 )
    {
      v18 = *(_DWORD *)(v17 + 1084);
      if ( v16 >= v18 )
        v16 = v18;
    }
    if ( v16 < 2 )
    {
      if ( CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      {
        v16 = 2;
      }
      else
      {
        v25 = KeGetCurrentThread();
        if ( (v25->MiscFlags & 0x400) != 0
          || v25->PreviousMode == 1
          || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0
          || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
        {
          ++IoPagingWriteLowPriorityCount;
        }
        else
        {
          ++IoPagingWriteLowPriorityBumpedCount;
          v16 = 2;
        }
      }
    }
    v19 = *(_DWORD *)(Irp + 16);
    *(_BYTE *)(Irp + 64) = 0;
    *(_QWORD *)(Irp + 72) = a6;
    *(_QWORD *)(Irp + 80) = &Object;
    *(_DWORD *)(Irp + 16) = v19 & 0xFFF1FFFF | ((v16 + 1) << 17);
    *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
    *(_QWORD *)(Irp + 192) = a1;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(v14 - 72) = 4;
    v20 = *(_DWORD *)(a2 + 40);
    *(_BYTE *)(v14 - 70) |= a4;
    *(_DWORD *)(v14 - 64) = v20;
    *(_QWORD *)(v14 - 48) = a3;
    *(_QWORD *)(v14 - 24) = a1;
    if ( a5 )
      IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a5 + 24), *(_QWORD *)(Irp + 152), 0);
    else
      IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
    IopQueueThreadIrp(Irp);
    result = IofCallDriver(RelatedDeviceObject, (PIRP)Irp);
    if ( result >= 0 )
      return KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
  }
  else
  {
    result = -1073741670;
  }
  *a6 = result;
  return result;
}
