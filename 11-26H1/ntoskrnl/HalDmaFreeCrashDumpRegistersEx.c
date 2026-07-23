/*
 * XREFs of HalDmaFreeCrashDumpRegistersEx @ 0x1404E9530
 * Callers:
 *     DifHalDmaFreeCrashDumpRegistersExWrapper @ 0x140659AB0 (DifHalDmaFreeCrashDumpRegistersExWrapper.c)
 * Callees:
 *     HalpDmaFreeCrashdumpRegistersInternal @ 0x1404E9554 (HalpDmaFreeCrashdumpRegistersInternal.c)
 *     HalpDmaExtractFromVerifierShadowAdapter @ 0x1404E95F4 (HalpDmaExtractFromVerifierShadowAdapter.c)
 */

__int64 HalDmaFreeCrashDumpRegistersEx()
{
  __int64 v0; // rax
  __int64 v1; // rdx

  v0 = HalpDmaExtractFromVerifierShadowAdapter();
  return HalpDmaFreeCrashdumpRegistersInternal(v0, v1, 1LL);
}
