/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140CEEC14
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcInitSystem0 @ 0x140CF3DA4 (CmFcInitSystem0.c)
 */

__int64 CmInitBootFeatureConfigurations()
{
  return CmFcInitSystem0();
}
