/*
 * XREFs of NtQueryPerformanceCounter @ 0x18015F560
 * Callers:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x180011550 (RtlGetSystemTimePrecise.c)
 *     RtlpHeapTrkInterceptor @ 0x1800117C0 (RtlpHeapTrkInterceptor.c)
 *     LdrpGenSecurityCookie @ 0x180080A84 (LdrpGenSecurityCookie.c)
 *     RtlGetInterruptTimePrecise @ 0x1800C1780 (RtlGetInterruptTimePrecise.c)
 *     RtlHeapTrkInitialize @ 0x180110AB0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
