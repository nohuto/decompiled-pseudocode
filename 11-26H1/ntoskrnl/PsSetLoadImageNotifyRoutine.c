/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x1407FCDB0
 * Callers:
 *     DifPsSetLoadImageNotifyRoutineWrapper @ 0x140694E30 (DifPsSetLoadImageNotifyRoutineWrapper.c)
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x140B30BB0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
