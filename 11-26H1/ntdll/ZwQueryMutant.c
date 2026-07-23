/*
 * XREFs of ZwQueryMutant @ 0x180161A90
 * Callers:
 *     PsspDumpObject_Mutant @ 0x1800FFC70 (PsspDumpObject_Mutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 355;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
