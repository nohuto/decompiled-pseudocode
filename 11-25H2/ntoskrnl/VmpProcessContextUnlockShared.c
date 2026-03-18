/*
 * XREFs of VmpProcessContextUnlockShared @ 0x14042BD24
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x14042AA98 (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x14042B094 (VmpQueryAccessedState.c)
 *     VmpAccessFaultBatch @ 0x14042B2B8 (VmpAccessFaultBatch.c)
 *     VmpSplitMemoryRange @ 0x14042B674 (VmpSplitMemoryRange.c)
 *     VmColdPagesHint @ 0x14042BAD0 (VmColdPagesHint.c)
 *     VmpUpdateCommitStateMemoryRange @ 0x14063F600 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall VmpProcessContextUnlockShared(volatile LONG *a1, unsigned __int8 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax

  ExReleaseSpinLockSharedFromDpcLevel(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = a2;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = a2;
  __writecr8(a2);
  return result;
}
