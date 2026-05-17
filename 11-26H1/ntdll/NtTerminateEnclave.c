/*
 * XREFs of NtTerminateEnclave @ 0x180162970
 * Callers:
 *     LdrInitializeEnclave @ 0x180070B80 (LdrInitializeEnclave.c)
 *     LdrpDeleteEnclave @ 0x1801396B4 (LdrpDeleteEnclave.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateEnclave()
{
  __int64 result; // rax

  result = 466LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
