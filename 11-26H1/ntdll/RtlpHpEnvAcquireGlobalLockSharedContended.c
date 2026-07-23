/*
 * XREFs of RtlpHpEnvAcquireGlobalLockSharedContended @ 0x180121080
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180004680 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180004CE0 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapCompact @ 0x1800618B0 (RtlpHpHeapCompact.c)
 *     RtlpHpSegTlsCleanup @ 0x180064560 (RtlpHpSegTlsCleanup.c)
 *     RtlpHpFreeHeapSlow @ 0x180080730 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x180080A04 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x180080D58 (RtlpHpReAllocateHeap.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180069DA0 (RtlpWaitOnAddress.c)
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
