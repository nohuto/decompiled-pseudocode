/*
 * XREFs of MiLockPartitionPair @ 0x140530870
 * Callers:
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

KIRQL __fastcall MiLockPartitionPair(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  volatile LONG *v3; // rcx
  KIRQL v4; // bl

  v2 = a2;
  if ( a1 >= a2 )
  {
    v2 = a1;
    a1 = a2;
  }
  v3 = (volatile LONG *)(a1 + 272);
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  }
  else
  {
    v4 = ExAcquireSpinLockExclusive(v3);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 272));
  return v4;
}
