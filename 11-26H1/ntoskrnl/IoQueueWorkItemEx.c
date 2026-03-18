/*
 * XREFs of IoQueueWorkItemEx @ 0x1403819A0
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x1404939D8 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItemFromIo @ 0x140381B60 (ExQueueWorkItemFromIo.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  _ETHREAD *CurrentThread; // rsi
  int v9; // ebp
  _ETHREAD *WorkOnBehalfThread; // rdi
  KIRQL v11; // al
  KIRQL v12; // r14
  _GUID *Flink; // rcx

  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
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
    v9 = 0;
    WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
    if ( WorkOnBehalfThread && CurrentThread != (_ETHREAD *)KeGetCurrentThread() )
    {
      v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.CurrentRunTime);
      WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
      v12 = v11;
      if ( WorkOnBehalfThread )
      {
        ObfReferenceObjectWithTag(CurrentThread->WorkOnBehalfThread, 0x746C6644u);
        v9 = 1;
      }
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.CurrentRunTime, v12);
    }
    IoWorkItem->WorkOnBehalfThread = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v9 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Padding[3] || stru_140F12D20.SchedulerApcFill3[40] )
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
  ExQueueWorkItemFromIo((ULONG_PTR)IoWorkItem);
}
