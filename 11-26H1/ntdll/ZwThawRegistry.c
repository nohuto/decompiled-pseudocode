/*
 * XREFs of ZwThawRegistry @ 0x1801628D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawRegistry(void)
{
  NTSTATUS result; // eax

  result = 469;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
