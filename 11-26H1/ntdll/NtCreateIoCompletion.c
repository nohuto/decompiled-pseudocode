/*
 * XREFs of NtCreateIoCompletion @ 0x180160570
 * Callers:
 *     TpAllocPoolInternal @ 0x1800655CC (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateIoCompletion()
{
  __int64 result; // rax

  result = 178LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
