/*
 * XREFs of MiDeleteFixupExtents @ 0x1406FE348
 * Callers:
 *     MiDeleteFileExtents @ 0x140AC5218 (MiDeleteFileExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteFixupExtents(__int64 a1)
{
  unsigned __int64 v1; // rbx
  void *v2; // rsi
  volatile LONG *v3; // rdi
  KIRQL v4; // al

  v1 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v2 = *(void **)(v1 + 48);
  if ( v2 )
  {
    v3 = (volatile LONG *)(a1 + 72);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    *(_QWORD *)(v1 + 48) = 0LL;
    if ( v4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v4);
    ExFreePoolWithTag(v2, 0);
  }
}
