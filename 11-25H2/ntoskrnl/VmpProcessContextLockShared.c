/*
 * XREFs of VmpProcessContextLockShared @ 0x14042BCD8
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x14042AA98 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14042B094 (VmpQueryAccessedState.c)
 *     VmpAccessFaultBatch @ 0x14042B2B8 (VmpAccessFaultBatch.c)
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     VmColdPagesHint @ 0x14042BAD0 (VmColdPagesHint.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14063F600 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextLockShared(PEX_SPIN_LOCK SpinLock)
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
  ExAcquireSpinLockSharedAtDpcLevel(v1);
  return CurrentIrql;
}
