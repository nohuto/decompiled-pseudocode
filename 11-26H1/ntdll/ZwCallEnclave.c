/*
 * XREFs of ZwCallEnclave @ 0x180160090
 * Callers:
 *     LdrpIssueEnclaveCall @ 0x180091110 (LdrpIssueEnclaveCall.c)
 *     RtlEnclaveCallDispatcher @ 0x180162F90 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x180163000 (RtlCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  NTSTATUS result; // eax

  result = 147;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
