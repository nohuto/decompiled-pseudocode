/*
 * XREFs of NtOpenKeyEx @ 0x1801614B0
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x180137DB0 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x18015D530 (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKeyEx()
{
  __int64 result; // rax

  result = 300LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
