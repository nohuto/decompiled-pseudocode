/*
 * XREFs of NtQueryPerformanceCounter @ 0x18015F460
 * Callers:
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x18005CC80 (RtlGetSystemTimePrecise.c)
 *     RtlpHeapTrkInterceptor @ 0x18005CEF0 (RtlpHeapTrkInterceptor.c)
 *     LdrpGenSecurityCookie @ 0x180077E24 (LdrpGenSecurityCookie.c)
 *     RtlGetInterruptTimePrecise @ 0x1800BEF10 (RtlGetInterruptTimePrecise.c)
 *     RtlHeapTrkInitialize @ 0x180110640 (RtlHeapTrkInitialize.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  NTSTATUS result; // eax

  result = 49;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
