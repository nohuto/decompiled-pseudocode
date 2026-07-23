/*
 * XREFs of ZwCreateEvent @ 0x1407288C0
 * Callers:
 *     CmSiCreateEvent @ 0x14049BBCC (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x1406A2CD0 (DifZwCreateEventWrapper.c)
 *     DbgkpCreateNotificationEvent @ 0x14078CE00 (DbgkpCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x140798DE0 (IoCreateSynchronizationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079EBD4 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x1407B808C (PiDrvDbCreateNode.c)
 *     PfpCreateEventInternal @ 0x1407CB08C (PfpCreateEventInternal.c)
 *     PspShutdownCsrProcess @ 0x1407F4F18 (PspShutdownCsrProcess.c)
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 *     CMFFlushHitsFile @ 0x140848958 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     MiCreateMemoryEvent @ 0x140885798 (MiCreateMemoryEvent.c)
 *     CmpCreateEvent @ 0x1408BD094 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x140ADF550 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x140B01E70 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140B51678 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6780C (ExpGetSystemWriteConstraintInformation.c)
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
