/*
 * XREFs of VmpProcessContextLockExclusive @ 0x14026FE0C
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
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG *v1; // rdi
  unsigned __int8 CurrentIrql; // bl

  v1 = SpinLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(SpinLock) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(SpinLock);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(v1);
  return CurrentIrql;
}
