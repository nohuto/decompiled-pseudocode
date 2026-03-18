/*
 * XREFs of VfFaultsInitPhase1 @ 0x140B86488
 * Callers:
 *     VfRlrsEntry @ 0x1406090C0 (VfRlrsEntry.c)
 *     VerifierInitSystem @ 0x140C29ED8 (VerifierInitSystem.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x14076A560 (PsSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS VfFaultsInitPhase1()
{
  NTSTATUS result; // eax

  result = PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
  ViFaultsProcessNotifyRoutineSet = 1;
  return result;
}
