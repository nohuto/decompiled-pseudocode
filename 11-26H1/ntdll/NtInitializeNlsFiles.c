/*
 * XREFs of NtInitializeNlsFiles @ 0x180161030
 * Callers:
 *     RtlpLoadNlsData @ 0x180004A18 (RtlpLoadNlsData.c)
 *     RtlGetLocaleFileMappingAddress @ 0x1800F8F80 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

__int64 NtInitializeNlsFiles()
{
  __int64 result; // rax

  result = 264LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
