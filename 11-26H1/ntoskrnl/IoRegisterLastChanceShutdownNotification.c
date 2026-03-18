/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x140796A30
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertHeadList @ 0x140510EA4 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x14077B6E8 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *Pool2; // rdi

  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return -1073741670;
  PsReferenceSiloContext(DeviceObject);
  Pool2[2] = DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopSessionNotificationLock.WaitBlock[0].WaitListEntry.Blink, Pool2);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(
    &KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION,
    (__int64)DeviceObject);
  return 0;
}
