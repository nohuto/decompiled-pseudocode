/*
 * XREFs of ZwGetContextThread @ 0x180160D90
 * Callers:
 *     PsspDumpThread @ 0x1800B1008 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x180148130 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 251;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
