/*
 * XREFs of ViReleaseDmaAdapter @ 0x140B79A3C
 * Callers:
 *     VfGetDmaAdapter @ 0x140B76960 (VfGetDmaAdapter.c)
 *     VfHalDeleteDevice @ 0x140B771C0 (VfHalDeleteDevice.c)
 *     VfPutDmaAdapter @ 0x140B776B0 (VfPutDmaAdapter.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
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
      byte_140E0E754,
      "Too many outstanding reference counts (%x) for adapter %p",
      17LL,
      v7,
      (__int64)RealDmaAdapter,
      a1);
    VfReportIssueWithOptions(0xE6u, 0x11uLL, v8, (ULONG_PTR)RealDmaAdapter, a1, byte_140E0E754);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
