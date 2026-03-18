/*
 * XREFs of RtlpHpSegLockRelease @ 0x14034BF04
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14034742C (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14034B898 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegSuballocatorFree @ 0x1404DC6E0 (RtlpHpSegSuballocatorFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034D300 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegLockRelease(__int64 a1)
{
  return RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 64));
}
