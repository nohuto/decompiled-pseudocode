/*
 * XREFs of ViReleaseDmaAdapter @ 0x140C27B3C
 * Callers:
 *     VfHalDeleteDevice @ 0x140C25180 (VfHalDeleteDevice.c)
 *     VfPutDmaAdapter @ 0x140C25690 (VfPutDmaAdapter.c)
 *     VfReleaseInactiveDmaAdapter @ 0x140C25B84 (VfReleaseInactiveDmaAdapter.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmFreeContiguousMemory @ 0x140344580 (MmFreeContiguousMemory.c)
 *     VfReportIssueWithOptions @ 0x140645558 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     ViGetRealDmaAdapter @ 0x140C271E4 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140C2731C (ViHalPreprocessOptions.c)
 */

void __fastcall ViReleaseDmaAdapter(ULONG_PTR a1)
{
  void *RealDmaAdapter; // r14
  KIRQL v3; // al
  PVOID *v4; // rbp
  PVOID *v5; // rbx
  __int64 v6; // rsi
  LONG_PTR v7; // rax
  ULONG_PTR v8; // rbx

  RealDmaAdapter = (void *)ViGetRealDmaAdapter(a1 + 16);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
  v4 = *(PVOID **)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 312), v3);
  if ( v4 )
  {
    v5 = v4;
    v6 = 32LL;
    do
    {
      if ( *v5 )
        MmFreeContiguousMemory(*v5);
      ++v5;
      --v6;
    }
    while ( v6 );
    ExFreePoolWithTag(v4, 0);
  }
  v7 = ObfDereferenceObject(RealDmaAdapter);
  v8 = v7;
  if ( *(int *)(a1 + 76) > 0 && v7 && (v7 != 1 || !*(_BYTE *)(a1 + 74)) )
  {
    ViHalPreprocessOptions(
      byte_140E0EA80,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v7,
      (__int64)RealDmaAdapter,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v8, (ULONG_PTR)RealDmaAdapter, a1, byte_140E0EA80);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
