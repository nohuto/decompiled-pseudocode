/*
 * XREFs of ZwSetEventEx @ 0x180162270
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180031C30 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x18013DF00 (RtlpUnWaitCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetEventEx()
{
  __int64 result; // rax

  result = 418LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
