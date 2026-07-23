/*
 * XREFs of IoAllocateController @ 0x140472DC0
 * Callers:
 *     DifIoAllocateControllerWrapper @ 0x14065C980 (DifIoAllocateControllerWrapper.c)
 * Callees:
 *     KeInsertDeviceQueue @ 0x1404730E0 (KeInsertDeviceQueue.c)
 *     IoFreeController @ 0x1404F36C0 (IoFreeController.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
