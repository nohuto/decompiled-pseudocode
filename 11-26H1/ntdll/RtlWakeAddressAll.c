/*
 * XREFs of RtlWakeAddressAll @ 0x18004D5B0
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x180013B08 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180015F38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180079AC0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlPosixBarrier @ 0x180141868 (RtlPosixBarrier.c)
 *     RtlRcuReadUnlock @ 0x1801499E0 (RtlRcuReadUnlock.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressAll(unsigned __int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  return RtlpWakeByAddress(a1, 1, 0LL);
}
