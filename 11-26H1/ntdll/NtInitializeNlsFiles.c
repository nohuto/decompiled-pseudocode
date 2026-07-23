/*
 * XREFs of NtInitializeNlsFiles @ 0x180160F30
 * Callers:
 *     RtlpLoadNlsData @ 0x180050148 (RtlpLoadNlsData.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800F8750 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax

  result = 264;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
