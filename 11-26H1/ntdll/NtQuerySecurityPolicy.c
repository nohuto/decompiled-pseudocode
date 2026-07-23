/*
 * XREFs of NtQuerySecurityPolicy @ 0x180161B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQuerySecurityPolicy()
{
  __int64 result; // rax

  result = 362LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
