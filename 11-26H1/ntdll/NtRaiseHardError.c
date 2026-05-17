/*
 * XREFs of NtRaiseHardError @ 0x180161DF0
 * Callers:
 *     LdrpMapDllNtFileName @ 0x1800833B0 (LdrpMapDllNtFileName.c)
 *     LdrpInitializationFailure @ 0x1800CDD30 (LdrpInitializationFailure.c)
 *     LdrpProcessMachineMismatch @ 0x1800D2784 (LdrpProcessMachineMismatch.c)
 *     LdrpReportError @ 0x1800DA620 (LdrpReportError.c)
 * Callees:
 *     <none>
 */

__int64 NtRaiseHardError()
{
  __int64 result; // rax

  result = 374LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
