/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14044EE20
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x1407B3648 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x1407D4050 (PoShutdownBugCheck.c)
 *     EtwpRegisterPrivateSession @ 0x140833120 (EtwpRegisterPrivateSession.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     EtwpNotifyGuid @ 0x140913FD4 (EtwpNotifyGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
 *     CmpCreateKeyBody @ 0x14092BC40 (CmpCreateKeyBody.c)
 *     PiDqTraceQueryCreate @ 0x140950F84 (PiDqTraceQueryCreate.c)
 *     PiUEventHandleRegistration @ 0x1409A80E0 (PiUEventHandleRegistration.c)
 *     PiSwIrpStartCreateWorker @ 0x140A8CB08 (PiSwIrpStartCreateWorker.c)
 *     EtwpEnableGuid @ 0x140AD6AB8 (EtwpEnableGuid.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
