/*
 * XREFs of MiFreeUltraMapping @ 0x14052786C
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404F6860 (MiDereferenceHugeContext.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiFreeUltraMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v2; // di

  v1 = (unsigned __int64)(a1 - qword_140E34BB0) >> 30;
  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34BA8);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E34BA8);
  }
  *(_BYTE *)((v1 >> 3) + qword_140E34BD8) |= 1 << (v1 & 7);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34BA8);
  else
    ExReleaseSpinLockExclusive(&dword_140E34BA8, v2);
}
