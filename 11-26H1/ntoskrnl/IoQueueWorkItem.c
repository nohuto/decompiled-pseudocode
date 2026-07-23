/*
 * XREFs of IoQueueWorkItem @ 0x1403841E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItemFromIo @ 0x140383910 (ExQueueWorkItemFromIo.c)
 */

void __stdcall IoQueueWorkItem(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  char v4; // al
  _ETHREAD *CurrentThread; // rsi
  int v10; // ebp
  _ETHREAD *WorkOnBehalfThread; // rdi
  KIRQL v12; // al
  KIRQL v13; // r14
  _GUID *Flink; // rcx

  v4 = IopFunctionPointerMask;
  IoWorkItem->Type = 0;
  if ( (v4 & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    Flink = (_GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
      IoWorkItem->ActivityId = *Flink;
    else
      IoWorkItem->ActivityId = 0LL;
  }
  else
  {
    IoWorkItem->ActivityId = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = (_ETHREAD *)KeGetCurrentThread();
    v10 = 0;
    WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
    if ( WorkOnBehalfThread && CurrentThread != (_ETHREAD *)KeGetCurrentThread() )
    {
      v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument);
      WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
      v13 = v12;
      if ( WorkOnBehalfThread )
      {
        ObfReferenceObjectWithTag(CurrentThread->WorkOnBehalfThread, 0x746C6644u);
        v10 = 1;
      }
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument, v13);
    }
    IoWorkItem->WorkOnBehalfThread = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v10 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Padding[3]
           || BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next) )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      IoWorkItem->WorkOnBehalfThread = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(IoWorkItem->IoObject, 0x746C6644u);
  IoWorkItem->Routine = (void (__fastcall *)(void *, void *, _IO_WORKITEM *))WorkerRoutine;
  IoWorkItem->Context = Context;
  IoWorkItem->InsertTime = MEMORY[0xFFFFF78000000008];
  IoWorkItem->QueueType = QueueType;
  ExQueueWorkItemFromIo(IoWorkItem, QueueType);
}
