/*
 * XREFs of RtlpHpEnvAcquireGlobalLockSharedContended @ 0x1801212E4
 * Callers:
 *     RtlpHpHeapCompact @ 0x180016180 (RtlpHpHeapCompact.c)
 *     RtlpHpTagFreeHeap @ 0x1800195A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180019C00 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180089330 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpSegTlsCleanup @ 0x1800976A0 (RtlpHpSegTlsCleanup.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x1800B0E90 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x1800B11E4 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x18007B580 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlpHpEnvAcquireGlobalLockSharedContended(unsigned int *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = a2;
  do
  {
    __writegsqword(0x250u, 0LL);
    RtlpWaitOnAddress((unsigned __int64)a1, &v4, 4LL, 0LL, RtlpWaitOnAddressSpinCycleCount, 0LL);
    __writegsqword(0x250u, (unsigned __int64)a1);
    result = *a1;
    LODWORD(v4) = result;
  }
  while ( (result & 0x10) != 0 );
  return result;
}
