/*
 * XREFs of MiReleaseFaultPte @ 0x14052849C
 * Callers:
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiReleaseFaultPte(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  v1 = a1;
  *a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  MiFlushSingleTbEntry((__int64)((_QWORD)a1 << 25) >> 16, 2LL);
  LODWORD(v1) = ((__int64)v1 - qword_140E36148) >> 3;
  v2 = ExAcquireSpinLockExclusive(&dword_140E36150);
  byte_140E36154[(unsigned __int64)(unsigned int)v1 >> 3] &= ~(1 << ((unsigned __int8)v1 & 7));
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36150);
  else
    ExReleaseSpinLockExclusive(&dword_140E36150, v2);
}
