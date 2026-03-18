/*
 * XREFs of IoInitializeWorkItem @ 0x1404854B0
 * Callers:
 *     DifIoInitializeWorkItemWrapper @ 0x14065CFF0 (DifIoInitializeWorkItemWrapper.c)
 *     ?ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@@KK@Z @ 0x140846E58 (-ExpLookasideMgrWorkerSetAllocate@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@PEAU_EXP_LOOKASIDE_MGR@.c)
 *     IovAllocateWorkItem @ 0x140C20BA0 (IovAllocateWorkItem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall IoInitializeWorkItem(PVOID IoObject, PIO_WORKITEM IoWorkItem)
{
  if ( *(_WORD *)IoObject != 3 && *(_WORD *)IoObject != 4 )
    KeBugCheckEx(0xE4u, 3uLL, (ULONG_PTR)IoWorkItem, (ULONG_PTR)IoObject, 0LL);
  IoWorkItem->Type = 1;
  IoWorkItem->IoObject = IoObject;
  IoWorkItem->WorkOnBehalfThread = 0LL;
  IoWorkItem->InsertTime = 0LL;
  IoWorkItem->QueueType = MaximumWorkQueue;
  IoWorkItem->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
  IoWorkItem->WorkItem.Parameter = IoWorkItem;
  IoWorkItem->WorkItem.List.Flink = 0LL;
}
