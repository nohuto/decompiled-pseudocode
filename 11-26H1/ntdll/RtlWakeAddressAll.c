/*
 * XREFs of RtlWakeAddressAll @ 0x180037B30
 * Callers:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005F238 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1800682E0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlPosixBarrier @ 0x180141768 (RtlPosixBarrier.c)
 *     RtlRcuReadUnlock @ 0x180149890 (RtlRcuReadUnlock.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlWakeAddressAll(PVOID Address)
{
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v1, 0);
  RtlpWakeByAddress((unsigned __int64)Address, 1, 0LL);
}
