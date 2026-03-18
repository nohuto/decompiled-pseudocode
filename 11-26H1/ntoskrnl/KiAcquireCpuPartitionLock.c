/*
 * XREFs of KiAcquireCpuPartitionLock @ 0x1404D74BC
 * Callers:
 *     KeQueryCpuPartitionAffinityEx @ 0x14052B518 (KeQueryCpuPartitionAffinityEx.c)
 *     KeCpuPartitionMoveCpus @ 0x1405F3880 (KeCpuPartitionMoveCpus.c)
 *     KeModifySystemAllowedCpuSets @ 0x1405F3CC8 (KeModifySystemAllowedCpuSets.c)
 *     KeQueryCpuPartitionAffinity @ 0x1405F3D38 (KeQueryCpuPartitionAffinity.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireCpuPartitionLock(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // bl

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  *a2 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)(v3 + 8));
}
