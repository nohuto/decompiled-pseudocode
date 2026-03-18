/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1404E9264
 * Callers:
 *     RtlQueryAllFeatureConfigurations @ 0x1408010D0 (RtlQueryAllFeatureConfigurations.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A48F68 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
