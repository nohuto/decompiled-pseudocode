/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1407FCCC0
 * Callers:
 *     ViRlrsUnload @ 0x1406486D0 (ViRlrsUnload.c)
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x140694B50 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C205D0 (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140C346BC (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140C34AA4 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2CF9C (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
