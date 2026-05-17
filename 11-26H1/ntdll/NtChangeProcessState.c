/*
 * XREFs of NtChangeProcessState @ 0x180160230
 * Callers:
 *     RtlWow64ChangeProcessState @ 0x1801385A0 (RtlWow64ChangeProcessState.c)
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtChangeProcessState()
{
  __int64 result; // rax

  result = 152LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
