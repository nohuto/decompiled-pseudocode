/*
 * XREFs of ZwCreateEvent @ 0x14069BA40
 * Callers:
 *     CmSiCreateEvent @ 0x14046F064 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x1406317D0 (DifZwCreateEventWrapper.c)
 *     DbgkpCreateNotificationEvent @ 0x1406FAEA0 (DbgkpCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x140707DF0 (IoCreateSynchronizationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x14072A61C (PiDrvDbCreateNode.c)
 *     PfpCreateEventInternal @ 0x14073C7D0 (PfpCreateEventInternal.c)
 *     PspShutdownCsrProcess @ 0x1407635E4 (PspShutdownCsrProcess.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407A53D8 (ExpGetSystemWriteConstraintInformation.c)
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     MiCreateMemoryEvent @ 0x1407EFBD8 (MiCreateMemoryEvent.c)
 *     CmpCreateEvent @ 0x140910BA8 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x140A663E0 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140AAF34C (SmCreateEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
