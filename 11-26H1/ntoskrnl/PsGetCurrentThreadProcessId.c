/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1404575B0
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x1407B05E8 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x1407D0FB0 (PoShutdownBugCheck.c)
 *     EtwpRegisterPrivateSession @ 0x14082CEE0 (EtwpRegisterPrivateSession.c)
 *     CmpCreateKeyBody @ 0x1408FBCB0 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x14092CA60 (ObpCreateHandle.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409399BC (EtwpNotifyDisallowedGuidChange.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     PiDqTraceQueryCreate @ 0x140990524 (PiDqTraceQueryCreate.c)
 *     PiUEventHandleRegistration @ 0x1409D71F0 (PiUEventHandleRegistration.c)
 *     SeAuditHandleCreation @ 0x1409FAC60 (SeAuditHandleCreation.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 *     EtwpEnableGuid @ 0x140ADA008 (EtwpEnableGuid.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
