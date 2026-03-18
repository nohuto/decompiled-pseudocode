/*
 * XREFs of IoRegisterShutdownNotification @ 0x140B4AEC0
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x14065DF20 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140CD9A40 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertHeadList @ 0x140510EA4 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x14077B6E8 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi

  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return -1073741670;
  *(_QWORD *)(Pool2 + 16) = DeviceObject;
  PsReferenceSiloContext(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopSessionNotificationLock.WaitBlock[0].Thread, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION, (__int64)DeviceObject);
  return 0;
}
