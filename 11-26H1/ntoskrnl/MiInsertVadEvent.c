/*
 * XREFs of MiInsertVadEvent @ 0x14049B0F8
 * Callers:
 *     MiWaitForVadDeletion @ 0x140531014 (MiWaitForVadDeletion.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiAddSecureEntry @ 0x14095D9B8 (MiAddSecureEntry.c)
 *     MiInitializeDataVad @ 0x1409C5B30 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInitializeImageVad @ 0x1409CDD4C (MiInitializeImageVad.c)
 *     MiCreateVadEvent @ 0x1409CE5DC (MiCreateVadEvent.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiWriteVadFlags @ 0x1404737D0 (MiWriteVadFlags.c)
 */

void __fastcall MiInsertVadEvent(__int64 a1, __int64 a2, int a3)
{
  KIRQL v5; // bl

  if ( a3 )
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  else
    v5 = 17;
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)(a1 + 56) = a2 | *(_QWORD *)(a1 + 56) & 0xFLL;
  if ( *(_WORD *)(a2 + 8) == 2 )
    MiWriteVadFlags(a1, 1LL, 1LL);
  if ( v5 != 17 )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), v5);
}
