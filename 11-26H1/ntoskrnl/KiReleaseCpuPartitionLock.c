/*
 * XREFs of KiReleaseCpuPartitionLock @ 0x1404D9D20
 * Callers:
 *     KeQueryCpuPartitionAffinityEx @ 0x14052DA38 (KeQueryCpuPartitionAffinityEx.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F6688 (KeModifySystemAllowedCpuSets.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F66F8 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseCpuPartitionLock(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 8));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
}
