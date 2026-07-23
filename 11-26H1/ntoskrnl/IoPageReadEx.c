/*
 * XREFs of IoPageReadEx @ 0x14026B300
 * Callers:
 *     MiPageRead @ 0x14026AC78 (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1404C5220 (MiPfIssueCoalescedSupport.c)
 *     IoPageRead @ 0x1404F2190 (IoPageRead.c)
 *     MiReadPagefilePage @ 0x1406E9750 (MiReadPagefilePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     MmIsFileObjectAPagingFile @ 0x14026B890 (MmIsFileObjectAPagingFile.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14026E310 (IopSetDiskIoAttributionFromProcess.c)
 *     IopAllocateReserveIrp @ 0x14026F5DC (IopAllocateReserveIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140533EB4 (IopAllocateBackpocketIrp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  int v13; // r14d
  __int64 v14; // r13
  __int64 Irp; // rbx
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // edx
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // eax
  struct _KTHREAD *v22; // rsi
  _QWORD *Object; // r14
  __int64 v24; // r12
  int v25; // r15d
  _KPROCESS *Process; // rsi
  __int64 Pool2; // rax
  struct _KTHREAD *v28; // rax
  struct _KTHREAD *v29; // rcx
  unsigned __int64 UserWaitTime; // rax
  KIRQL v32; // al
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // cl
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-48h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]
  KIRQL v40[8]; // [rsp+98h] [rbp+30h]
  KIRQL v41; // [rsp+98h] [rbp+30h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  v11 = v10 | 2;
  if ( (a6 & 8) == 0 )
    v11 = v10;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  v13 = 1027;
  v14 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v13 = 67;
  if ( v11 >= 4u )
    v14 = -1LL;
  Irp = IopAllocateIrpExReturn(v14, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
      Irp = IopAllocateReserveIrp(v33, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
      if ( Irp )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
      if ( (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v13 & 0x40) != 0 )
      {
        LOBYTE(v34) = 1;
        Irp = IopAllocateBackpocketIrp(v14, (unsigned __int8)RelatedDeviceObject->StackSize, v34);
        if ( Irp )
          goto LABEL_10;
      }
    }
    return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v13 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  v16 = *(_QWORD *)(Irp + 184);
  *(_DWORD *)(Irp + 16) = v13;
  CurrentThread = KeGetCurrentThread();
  v18 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v19 = CurrentThread->Process[1].Padding[3];
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 1084);
    if ( v18 >= v20 )
      v18 = v20;
  }
  if ( v18 < 2 )
  {
    if ( CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    {
      v18 = 2;
    }
    else if ( (v11 & 1) == 0
           || (a6 & 1) == 1
           || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x2000000) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      v18 = 2;
    }
  }
  if ( (v11 & 2) != 0 && v18 == 2 )
    v18 = 3;
  v21 = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF;
  *(_QWORD *)(Irp + 8) = a2;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 80) = a4;
  *(_DWORD *)(Irp + 16) = v21 | ((v18 + 1) << 17);
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = FileObject;
  *(_DWORD *)(v16 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v16 - 48) = *a3;
  v22 = *(struct _KTHREAD **)(Irp + 152);
  if ( a7 )
  {
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0);
    goto LABEL_27;
  }
  Object = v22[1].WaitBlock[1].Object;
  v24 = 0LL;
  v25 = 0;
  if ( Object )
  {
    if ( v22 == KeGetCurrentThread() )
      goto LABEL_51;
    v32 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument);
    Object = v22[1].WaitBlock[1].Object;
    v41 = v32;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      v32 = v41;
      v25 = 1;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument, v32);
    if ( Object )
    {
LABEL_51:
      Process = (_KPROCESS *)Object[68];
LABEL_23:
      if ( Process[3].UserWaitTime )
      {
        v40[0] = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
        UserWaitTime = Process[3].UserWaitTime;
        v37 = UserWaitTime;
        if ( UserWaitTime )
          v24 = *(_QWORD *)(UserWaitTime + 24);
        ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v40[0]);
        __writecr8(v40[0]);
        if ( v37 )
          IopSetDiskIoAttributionExtension(Irp, v24, (__int64)KeGetCurrentThread(), 0);
      }
      goto LABEL_24;
    }
  }
  if ( v22 != KeGetCurrentThread()
    || v22->ApcState.Process == v22->Process
    || (int)IopSetDiskIoAttributionFromProcess(Irp) < 0 )
  {
    Process = v22->Process;
    goto LABEL_23;
  }
LABEL_24:
  if ( v25 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
  RelatedDeviceObject = DeviceObject;
LABEL_27:
  if ( !v9 )
    goto LABEL_32;
  Pool2 = *(_QWORD *)(Irp + 200);
  if ( Pool2 )
  {
    if ( *(char *)(Irp + 71) >= 0 )
    {
      *(_WORD *)(Pool2 + 2) |= 0x100u;
LABEL_31:
      *(_QWORD *)(Pool2 + 56) = v9;
      goto LABEL_32;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 2) = 260;
      *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(Irp + 200);
      v35 = *(_BYTE *)(Irp + 71);
      *(_QWORD *)(Irp + 200) = Pool2;
      *(_BYTE *)(Irp + 71) = v35 & 0x3F | 0x40;
      *(_WORD *)Pool2 |= 1u;
      goto LABEL_31;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 2) = 256;
      *(_BYTE *)(Irp + 71) |= 0x40u;
      *(_QWORD *)(Irp + 200) = Pool2;
      *(_WORD *)Pool2 |= 1u;
      goto LABEL_31;
    }
  }
LABEL_32:
  *(_QWORD *)(a5 + 8) = Irp;
  IopQueueThreadIrp(Irp);
  v28 = KeGetCurrentThread();
  if ( BYTE5(v28[1].Queue) || BYTE4(v28[1].Queue) == 1 )
  {
    v29 = KeGetCurrentThread();
    v29[1].Timer.DueTime.HighPart += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(RelatedDeviceObject, (PIRP)Irp);
}
