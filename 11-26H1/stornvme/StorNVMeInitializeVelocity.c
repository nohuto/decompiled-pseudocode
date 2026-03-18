/*
 * XREFs of StorNVMeInitializeVelocity @ 0x14003212C
 * Callers:
 *     DumpPreInitialize @ 0x1400121A0 (DumpPreInitialize.c)
 * Callees:
 *     wil_InitializeFeatureStaging @ 0x14004B078 (wil_InitializeFeatureStaging.c)
 */

__int64 StorNVMeInitializeVelocity()
{
  return wil_InitializeFeatureStaging();
}
