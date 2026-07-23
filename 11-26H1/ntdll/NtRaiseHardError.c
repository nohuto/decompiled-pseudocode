/*
 * XREFs of NtRaiseHardError @ 0x180161CF0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18007A750 (LdrpMapDllNtFileName.c)
 *     LdrpInitializationFailure @ 0x1800CB4A0 (LdrpInitializationFailure.c)
 *     LdrpProcessMachineMismatch @ 0x1800D2654 (LdrpProcessMachineMismatch.c)
 *     LdrpReportError @ 0x1800D75E0 (LdrpReportError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  NTSTATUS result; // eax

  result = 374;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
