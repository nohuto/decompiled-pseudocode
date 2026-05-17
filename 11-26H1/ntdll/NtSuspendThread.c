/*
 * XREFs of NtSuspendThread @ 0x180162930
 * Callers:
 *     RtlWow64SuspendThread @ 0x180138860 (RtlWow64SuspendThread.c)
 *     RtlpProcessReflectionStartup @ 0x180139D90 (RtlpProcessReflectionStartup.c)
 *     RtlRemoteCall @ 0x180148280 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSuspendThread()
{
  __int64 result; // rax

  result = 464LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
