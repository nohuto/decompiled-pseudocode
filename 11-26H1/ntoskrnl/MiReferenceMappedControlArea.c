/*
 * XREFs of MiReferenceMappedControlArea @ 0x1406F02A8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiReferenceMappedControlArea(__int64 a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al

  v1 = (volatile LONG *)(a1 + 72);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  ++*(_QWORD *)(a1 + 24);
  ++*(_QWORD *)(a1 + 48);
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  else
    ExReleaseSpinLockExclusive(v1, v3);
}
