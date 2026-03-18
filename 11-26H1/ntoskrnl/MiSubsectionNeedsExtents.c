/*
 * XREFs of MiSubsectionNeedsExtents @ 0x1406F8148
 * Callers:
 *     MmExtendSection @ 0x140A58080 (MmExtendSection.c)
 *     MiExtendSection @ 0x140A5838C (MiExtendSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
