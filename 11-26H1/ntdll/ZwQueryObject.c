/*
 * XREFs of ZwQueryObject @ 0x18015F140
 * Callers:
 *     PsspWalkHandleTable @ 0x1800B6540 (PsspWalkHandleTable.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138AD8 (RtlpWow64NinjaSuspendThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138CC8 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryObject()
{
  __int64 result; // rax

  result = 16LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
