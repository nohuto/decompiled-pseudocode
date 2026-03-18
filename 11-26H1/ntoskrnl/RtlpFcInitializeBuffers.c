/*
 * XREFs of RtlpFcInitializeBuffers @ 0x1405185B0
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140ABF140 (RtlpFcBufferManagerUpdateBuffers.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall RtlpFcInitializeBuffers(void *a1)
{
  return memset_0(a1, 0, 0x60uLL);
}
