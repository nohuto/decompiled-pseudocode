/*
 * XREFs of MiInsertVadEvent @ 0x140494C48
 * Callers:
 *     MiWaitForVadDeletion @ 0x140533514 (MiWaitForVadDeletion.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiInitializeDataVad @ 0x140996B10 (MiInitializeDataVad.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 *     MiAddSecureEntry @ 0x140A03278 (MiAddSecureEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiWriteVadFlags @ 0x14046CF50 (MiWriteVadFlags.c)
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
