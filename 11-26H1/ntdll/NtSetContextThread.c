/*
 * XREFs of NtSetContextThread @ 0x180162290
 * Callers:
 *     RtlRemoteCall @ 0x180148280 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 NtSetContextThread()
{
  __int64 result; // rax

  result = 411LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
