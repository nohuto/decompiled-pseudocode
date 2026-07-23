/*
 * XREFs of NpQueryVirtualMemory @ 0x18015E9E0
 * Callers:
 *     LdrpIsImageAddress @ 0x18015CBF8 (LdrpIsImageAddress.c)
 * Callees:
 *     <none>
 */

__int64 NpQueryVirtualMemory()
{
  __int64 result; // rax

  result = 35LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
