/*
 * XREFs of ZwCreateEvent @ 0x140723CF0
 * Callers:
 *     CmSiCreateEvent @ 0x1404A209C (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x14069F0F0 (DifZwCreateEventWrapper.c)
 *     DbgkpCreateNotificationEvent @ 0x14078A2D0 (DbgkpCreateNotificationEvent.c)
 *     IoCreateSynchronizationEvent @ 0x1407962B0 (IoCreateSynchronizationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14079C094 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x1407B502C (PiDrvDbCreateNode.c)
 *     PfpCreateEventInternal @ 0x1407C802C (PfpCreateEventInternal.c)
 *     PspShutdownCsrProcess @ 0x1407EF3B8 (PspShutdownCsrProcess.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     CMFFlushHitsFile @ 0x1408434C8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     MiCreateMemoryEvent @ 0x14087F398 (MiCreateMemoryEvent.c)
 *     CmpCreateEvent @ 0x1408B6AC0 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x140AE2060 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x140B00140 (IoCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140B4EDE8 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140B6476C (ExpGetSystemWriteConstraintInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
