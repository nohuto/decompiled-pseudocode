/*
 * XREFs of NtWaitForMultipleObjects @ 0x18015F990
 * Callers:
 *     WerpWaitForCrashReporting @ 0x18007FBD0 (WerpWaitForCrashReporting.c)
 *     TpTrimPools @ 0x1800E78E0 (TpTrimPools.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x180110240 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x180139530 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 91;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
