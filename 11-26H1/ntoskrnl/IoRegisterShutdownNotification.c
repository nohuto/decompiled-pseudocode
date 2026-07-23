/*
 * XREFs of IoRegisterShutdownNotification @ 0x140B4CC50
 * Callers:
 *     DifIoRegisterShutdownNotificationWrapper @ 0x140661B00 (DifIoRegisterShutdownNotificationWrapper.c)
 *     RawInitialize @ 0x140CDFDC0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     IopInterlockedInsertHeadList @ 0x14050A914 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x14077E328 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION, (__int64)DeviceObject);
  return 0;
}
