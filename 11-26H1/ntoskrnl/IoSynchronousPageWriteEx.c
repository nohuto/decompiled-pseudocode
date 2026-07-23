/*
 * XREFs of IoSynchronousPageWriteEx @ 0x14026AF60
 * Callers:
 *     MiZeroPageWrite @ 0x140466EC8 (MiZeroPageWrite.c)
 *     IoSynchronousPageWrite @ 0x1404A6180 (IoSynchronousPageWrite.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     MmIsFileObjectAPagingFile @ 0x14026B890 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1404613A0 (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 Irp; // rbx
  __int64 v14; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdi
  _WORD *v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  _WORD *v27; // rax
  struct _KTHREAD *v28; // rcx
  __int64 Pool2; // rax
  char v30; // al
  __int64 v31; // [rsp+40h] [rbp+8h] BYREF

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8974u);
    __addgsdword(0x8978u, (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = IopAllocateIrpExReturn(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( Irp )
  {
LABEL_5:
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
      if ( (int)v16 >= v18 )
        v16 = (unsigned int)v18;
    }
    if ( (int)v16 < 2 )
    {
      if ( CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
      {
        v16 = 2LL;
      }
      else
      {
        v28 = KeGetCurrentThread();
        if ( (v28->MiscFlags & 0x400) != 0
          || v28->PreviousMode == 1
          || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0
          || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
        {
          ++IoPagingWriteLowPriorityCount;
        }
        else
        {
          ++IoPagingWriteLowPriorityBumpedCount;
          v16 = 2LL;
        }
      }
    }
    v19 = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF;
    *(_BYTE *)(Irp + 64) = 0;
    *(_QWORD *)(Irp + 80) = a4;
    *(_QWORD *)(Irp + 72) = a7;
    *(_DWORD *)(Irp + 16) = v19 | (((_DWORD)v16 + 1) << 17);
    *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
    *(_QWORD *)(Irp + 192) = a1;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(v14 - 72) = 4;
    *(_DWORD *)(v14 - 64) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(v14 - 48) = *a3;
    *(_BYTE *)(v14 - 70) |= a5;
    v20 = a6;
    *(_QWORD *)(v14 - 24) = a1;
    v21 = *(_QWORD *)(Irp + 152);
    if ( !v20 )
    {
      IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
LABEL_11:
      IopQueueThreadIrp(Irp);
      return IofCallDriver(RelatedDeviceObject, (PIRP)Irp);
    }
    v23 = *(_WORD **)(Irp + 200);
    v24 = *(_QWORD *)(v20 + 24);
    v31 = v24;
    if ( v23 )
    {
      if ( *(char *)(Irp + 71) >= 0 )
      {
        v23[1] |= 0x40u;
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(0x40uLL);
      v23 = (_WORD *)Pool2;
      if ( Pool2 )
      {
        *(_WORD *)(Pool2 + 2) = 68;
        *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(Irp + 200);
        v30 = *(_BYTE *)(Irp + 71);
        *(_QWORD *)(Irp + 200) = v23;
        *(_BYTE *)(Irp + 71) = v30 & 0x3F | 0x40;
        *v23 |= 1u;
        goto LABEL_16;
      }
    }
    else
    {
      v27 = (_WORD *)ExAllocatePool2(0x40uLL);
      v23 = v27;
      if ( v27 )
      {
        v27[1] = 64;
        *(_BYTE *)(Irp + 71) |= 0x40u;
        *(_QWORD *)(Irp + 200) = v27;
        *v27 |= 1u;
        goto LABEL_16;
      }
    }
    if ( !v23 )
      goto LABEL_11;
LABEL_16:
    v25 = *(_QWORD *)(v21 + 544);
    if ( (*(_DWORD *)(v25 + 1532) & 0x1000) != 0 && *(_QWORD *)(v25 + 672) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v25 + 672) + 1584LL) )
      {
        LOBYTE(v16) = 1;
        IopReferenceIoAttributionFromProcess(v25, v16, &v31);
        v24 = v31;
      }
    }
    *((_QWORD *)v23 + 2) = v24;
    goto LABEL_11;
  }
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
    Irp = IopAllocateReserveIrp(v26, (unsigned __int8)RelatedDeviceObject->StackSize, 1LL);
    if ( Irp )
      goto LABEL_5;
  }
  else
  {
    _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
    Irp = IopAllocateBackpocketIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
    if ( Irp )
      goto LABEL_5;
  }
  return -1073741670;
}
