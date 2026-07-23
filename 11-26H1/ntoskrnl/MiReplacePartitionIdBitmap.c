/*
 * XREFs of MiReplacePartitionIdBitmap @ 0x1406F57BC
 * Callers:
 *     MiExpandPartitionIds @ 0x14086F3E8 (MiExpandPartitionIds.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReplacePartitionIdBitmap(unsigned __int64 a1)
{
  KIRQL v2; // al
  void *QuantumTarget; // rdi

  v2 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  QuantumTarget = 0LL;
  if ( (void **)stru_140E2ED08.QuantumTarget != &stru_140E2ED08.InitialStack )
    QuantumTarget = (void *)stru_140E2ED08.QuantumTarget;
  stru_140E2ED08.QuantumTarget = a1;
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v2);
  if ( QuantumTarget )
    ExFreePoolWithTag(QuantumTarget, 0);
}
