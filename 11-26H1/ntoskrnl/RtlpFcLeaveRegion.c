/*
 * XREFs of RtlpFcLeaveRegion @ 0x140B1047C
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1404CC294 (RtlpFcBufferManagerDereferenceBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void RtlpFcLeaveRegion()
{
  KeLeaveCriticalRegion();
}
