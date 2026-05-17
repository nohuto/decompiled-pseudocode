/*
 * XREFs of NtPssCaptureVaSpaceBulk @ 0x180161830
 * Callers:
 *     PsspQueryVmBulkMode @ 0x180159930 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

__int64 NtPssCaptureVaSpaceBulk()
{
  __int64 result; // rax

  result = 328LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
