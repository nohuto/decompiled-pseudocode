/*
 * XREFs of VfFaultsInitPhase1 @ 0x140C3A6CC
 * Callers:
 *     VfRlrsEntry @ 0x14064BDB0 (VfRlrsEntry.c)
 *     VerifierInitSystem @ 0x140CE4C2C (VerifierInitSystem.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x1408026F0 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
