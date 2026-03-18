/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140CE8874
 * Callers:
 *     KiInitializeBootStructures @ 0x140BF5890 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcInitSystem0 @ 0x140CEDAA0 (CmFcInitSystem0.c)
 */

__int64 CmInitBootFeatureConfigurations()
{
  return CmFcInitSystem0();
}
