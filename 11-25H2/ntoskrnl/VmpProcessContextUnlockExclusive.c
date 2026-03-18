/*
 * XREFs of VmpProcessContextUnlockExclusive @ 0x14026F2AC
 * Callers:
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     VmpFlushTb @ 0x14032CFF0 (VmpFlushTb.c)
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14048258C (VmpRemoveMemoryRange.c)
 *     VmpInvalidateSlatBatched @ 0x140482874 (VmpInvalidateSlatBatched.c)
 *     VmpMergeMemoryRanges @ 0x1404D0714 (VmpMergeMemoryRanges.c)
 *     VmpInsertMemoryRange @ 0x14063EA20 (VmpInsertMemoryRange.c)
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 *     VmpUnpinMemoryRangeHelper @ 0x14063F3A0 (VmpUnpinMemoryRangeHelper.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextUnlockExclusive(volatile LONG *a1, unsigned __int8 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  ExReleaseSpinLockExclusiveFromDpcLevel(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = a2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = a2;
  __writecr8(a2);
  return result;
}
