/*
 * XREFs of MiReplacePartitionIdBitmap @ 0x1406F0B4C
 * Callers:
 *     MiExpandPartitionIds @ 0x140869008 (MiExpandPartitionIds.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReplacePartitionIdBitmap(unsigned __int64 a1)
{
  KIRQL v2; // al
  void *QuantumTarget; // rdi

  v2 = ExAcquireSpinLockExclusive(&dword_140E2EB80);
  QuantumTarget = 0LL;
  if ( (void **)stru_140E2EB88.QuantumTarget != &stru_140E2EB88.InitialStack )
    QuantumTarget = (void *)stru_140E2EB88.QuantumTarget;
  stru_140E2EB88.QuantumTarget = a1;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2EB80);
  else
    ExReleaseSpinLockExclusive(&dword_140E2EB80, v2);
  if ( QuantumTarget )
    ExFreePoolWithTag(QuantumTarget, 0);
}
