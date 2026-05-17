/*
 * XREFs of NtSetInformationObject @ 0x18015FAB0
 * Callers:
 *     TppCritSetThread @ 0x1800E1D30 (TppCritSetThread.c)
 *     TppCritResetThread @ 0x1800EC5D4 (TppCritResetThread.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
