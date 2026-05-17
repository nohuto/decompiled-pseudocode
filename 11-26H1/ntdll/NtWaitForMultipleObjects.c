/*
 * XREFs of NtWaitForMultipleObjects @ 0x18015FA90
 * Callers:
 *     WerpWaitForCrashReporting @ 0x180088850 (WerpWaitForCrashReporting.c)
 *     TpTrimPools @ 0x1800E86D0 (TpTrimPools.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1801106B0 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlCreateProcessReflection @ 0x1801397C0 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
