/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1408026F0
 * Callers:
 *     ViRlrsUnload @ 0x14064C2B0 (ViRlrsUnload.c)
 *     DifPsSetCreateProcessNotifyRoutineWrapper @ 0x140698730 (DifPsSetCreateProcessNotifyRoutineWrapper.c)
 *     VfInitSystemNoRebootNeeded @ 0x140C265DC (VfInitSystemNoRebootNeeded.c)
 *     VfFaultsInitPhase1 @ 0x140C3A6CC (VfFaultsInitPhase1.c)
 *     VfFaultsSetParameters @ 0x140C3AAB4 (VfFaultsSetParameters.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140B2F01C (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
