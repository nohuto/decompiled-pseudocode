/*
 * XREFs of RtlpHpSegLockRelease @ 0x14034DF84
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1403494AC (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14034D918 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegSuballocatorFree @ 0x1404D5DC0 (RtlpHpSegSuballocatorFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegLockRelease(__int64 a1)
{
  return RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a1 + 64));
}
