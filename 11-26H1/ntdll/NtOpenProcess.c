/*
 * XREFs of NtOpenProcess @ 0x18015F400
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18008F550 (RtlQueryProcessDebugInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18008FF88 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800F94C8 (RtlpWow64OpenThreadProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenProcess()
{
  __int64 result; // rax

  result = 38LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
