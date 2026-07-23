/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x140802760
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x1406988A0 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x1408027F8 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
