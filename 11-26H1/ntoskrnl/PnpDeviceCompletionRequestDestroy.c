/*
 * XREFs of PnpDeviceCompletionRequestDestroy @ 0x1404939D8
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1404937E0 (PnpDeviceCompletionRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14090D1F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoQueueWorkItemEx @ 0x1403819A0 (IoQueueWorkItemEx.c)
 *     IoAllocateWorkItem @ 0x140493A30 (IoAllocateWorkItem.c)
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
