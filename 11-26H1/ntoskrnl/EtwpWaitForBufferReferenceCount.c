/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x140A14C24
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 *     EtwpFlushActiveBuffers @ 0x140A141E8 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
