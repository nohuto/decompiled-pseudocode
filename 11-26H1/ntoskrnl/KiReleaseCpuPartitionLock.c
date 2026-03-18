/*
 * XREFs of KiReleaseCpuPartitionLock @ 0x1404E0640
 * Callers:
 *     KeQueryCpuPartitionAffinityEx @ 0x14052B518 (KeQueryCpuPartitionAffinityEx.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F3CC8 (KeModifySystemAllowedCpuSets.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F3D38 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
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
