/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x18007100C
 * Callers:
 *     RtlpHpSegContextCompact @ 0x180061944 (RtlpHpSegContextCompact.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLockHeapForProcessCloneOrTerminate @ 0x1800714A4 (RtlpHpLockHeapForProcessCloneOrTerminate.c)
 *     RtlpHpSegSuballocatorFree @ 0x180071530 (RtlpHpSegSuballocatorFree.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800715F0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x180071824 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_RTL_SRWLOCK *a1)
{
  RtlAcquireSRWLockExclusive(a1 + 8);
  return -1;
}
