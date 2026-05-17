/*
 * XREFs of ZwSuspendProcess @ 0x180162910
 * Callers:
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSuspendProcess()
{
  __int64 result; // rax

  result = 463LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
