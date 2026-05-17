/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x180089C88
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180016214 (RtlpHpSegContextCompact.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x180096BC0 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpSegSuballocatorFree @ 0x180096C50 (RtlpHpSegSuballocatorFree.c)
 *     RtlpHpSegPageRangeAllocate @ 0x180096D10 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180096F44 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 64), a2);
  return -1;
}
