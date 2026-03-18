/*
 * XREFs of IoFreeController @ 0x1404FA0B0
 * Callers:
 *     IoAllocateController @ 0x140479460 (IoAllocateController.c)
 *     DifIoFreeControllerWrapper @ 0x14065BD10 (DifIoFreeControllerWrapper.c)
 * Callees:
 *     KeRemoveDeviceQueue @ 0x140359C70 (KeRemoveDeviceQueue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoFreeController(PCONTROLLER_OBJECT ControllerObject)
{
  struct _KDEVICE_QUEUE *p_DeviceWaitQueue; // rbx
  PKDEVICE_QUEUE_ENTRY v2; // rax

  p_DeviceWaitQueue = &ControllerObject->DeviceWaitQueue;
  do
    v2 = KeRemoveDeviceQueue(p_DeviceWaitQueue);
  while ( v2 && (unsigned int)guard_dispatch_icall_no_overrides(&v2[-4].SortKey, v2[-2].DeviceListEntry.Flink) == 2 );
}
