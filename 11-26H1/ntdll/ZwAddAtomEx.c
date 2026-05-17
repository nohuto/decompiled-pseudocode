/*
 * XREFs of ZwAddAtomEx @ 0x18015FC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAddAtomEx()
{
  __int64 result; // rax

  result = 105LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
