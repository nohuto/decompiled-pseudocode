/*
 * XREFs of EtwpCompleteBuffer @ 0x140AE2528
 * Callers:
 *     EtwpCompressPendingBuffers @ 0x1406C7D5C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1402195F8 (EtwpEnqueueAvailableBuffer.c)
 */

__int64 __fastcall EtwpCompleteBuffer(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 52) = 0;
  return EtwpEnqueueAvailableBuffer(a1, (unsigned int *)a2, 0);
}
