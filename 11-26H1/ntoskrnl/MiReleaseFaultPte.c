/*
 * XREFs of MiReleaseFaultPte @ 0x140525E2C
 * Callers:
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiReleaseFaultPte(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  v1 = a1;
  *a1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  MiFlushSingleTbEntry((__int64)((_QWORD)a1 << 25) >> 16, 2LL);
  LODWORD(v1) = ((__int64)v1 - qword_140E35FC8) >> 3;
  v2 = ExAcquireSpinLockExclusive(&dword_140E35FD0);
  byte_140E35FD4[(unsigned __int64)(unsigned int)v1 >> 3] &= ~(1 << ((unsigned __int8)v1 & 7));
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E35FD0);
  else
    ExReleaseSpinLockExclusive(&dword_140E35FD0, v2);
}
