/*
 * XREFs of EtwpCompleteBuffer @ 0x140ADFA18
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1406CBD3C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
