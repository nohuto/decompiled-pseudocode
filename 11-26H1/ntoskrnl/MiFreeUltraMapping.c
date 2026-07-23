/*
 * XREFs of MiFreeUltraMapping @ 0x140529EDC
 * Callers:
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiFreeUltraMapping(__int64 a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v2; // di

  v1 = (unsigned __int64)(a1 - qword_140E34D30) >> 30;
  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34D28);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E34D28);
  }
  *(_BYTE *)((v1 >> 3) + qword_140E34D58) |= 1 << (v1 & 7);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34D28);
  else
    ExReleaseSpinLockExclusive(&dword_140E34D28, v2);
}
