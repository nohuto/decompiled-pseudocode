/*
 * XREFs of NtAllocateVirtualMemoryEx @ 0x18015FE30
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x18008BE90 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     <none>
 */

__int64 NtAllocateVirtualMemoryEx()
{
  __int64 result; // rax

  result = 120LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
