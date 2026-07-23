/*
 * XREFs of RtlpFcInitializeBuffers @ 0x140512020
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140AC11E0 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset_0(a1, 0, 0x60uLL);
}
