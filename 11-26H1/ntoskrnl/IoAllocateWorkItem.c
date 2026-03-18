/*
 * XREFs of IoAllocateWorkItem @ 0x140493A30
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x1404939D8 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  result = (PIO_WORKITEM)ExAllocatePool2(0x40uLL);
  if ( result )
  {
    result->IoObject = DeviceObject;
    result->Type = 1;
    result->WorkOnBehalfThread = 0LL;
    result->InsertTime = 0LL;
    result->QueueType = MaximumWorkQueue;
    result->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
    result->WorkItem.Parameter = result;
    result->WorkItem.List.Flink = 0LL;
  }
  return result;
}
