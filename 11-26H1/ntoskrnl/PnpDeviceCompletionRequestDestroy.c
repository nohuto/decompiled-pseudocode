/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x14048D528
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x14048D330 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409AF320 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoQueueWorkItemEx @ 0x140383750 (IoQueueWorkItemEx.c)
 *     IoAllocateWorkItem @ 0x14048D580 (IoAllocateWorkItem.c)
 */

void __fastcall PnpDeviceCompletionRequestDestroy(PVOID Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 14, 0xFFFFFFFF) == 1 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 32LL));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, PnpDeviceCompletionRequestDestroyWorkItem, DelayedWorkQueue, Context);
  }
}
