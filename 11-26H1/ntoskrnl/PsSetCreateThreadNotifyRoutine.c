/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x1407FCD30
 * Callers:
 *     DifPsSetCreateThreadNotifyRoutineWrapper @ 0x140694CC0 (DifPsSetCreateThreadNotifyRoutineWrapper.c)
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x1407FCDC8 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
