/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x1404EFF50
 * Callers:
 *     DifHalDmaFreeCrashDumpRegistersExWrapper @ 0x140655ED0 (DifHalDmaFreeCrashDumpRegistersExWrapper.c)
 * Callees:
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404EFF74 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404F0014 (HalpDmaExtractFromVerifierShadowAdapter.c)
 */

__int64 HalDmaFreeCrashDumpRegistersEx()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = HalpDmaExtractFromVerifierShadowAdapter();
  return HalpDmaFreeCrashdumpRegistersInternal(v0, v1, 1LL);
}
