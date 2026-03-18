/*
 * XREFs of IoAllocateController @ 0x140479460
 * Callers:
 *     DifIoAllocateControllerWrapper @ 0x140658DA0 (DifIoAllocateControllerWrapper.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x140479780 (KeInsertDeviceQueue.c)
 *     IoFreeController @ 0x1404FA0B0 (IoFreeController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && (unsigned int)guard_dispatch_icall_no_overrides(DeviceObject, DeviceObject->CurrentIrp) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
