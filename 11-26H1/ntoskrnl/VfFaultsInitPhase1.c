/*
 * XREFs of VfFaultsInitPhase1 @ 0x140C346BC
 * Callers:
 *     VfRlrsEntry @ 0x1406481D0 (VfRlrsEntry.c)
 *     VerifierInitSystem @ 0x140CDE894 (VerifierInitSystem.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1407FCCC0 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
