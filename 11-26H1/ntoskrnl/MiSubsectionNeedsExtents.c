/*
 * XREFs of MiSubsectionNeedsExtents @ 0x1406FCE18
 * Callers:
 *     MmExtendSection @ 0x140A65600 (MmExtendSection.c)
 *     MiExtendSection @ 0x140A6590C (MiExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiSubsectionNeedsExtents(_DWORD *a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // al

  v2 = (volatile LONG *)(*(_QWORD *)a1 + 72LL);
  v3 = ExAcquireSpinLockExclusive(v2);
  a1[8] |= 0x40000u;
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v3);
}
