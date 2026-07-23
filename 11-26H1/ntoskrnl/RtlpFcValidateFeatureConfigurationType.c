/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1404E2344
 * Callers:
 *     RtlQueryAllFeatureConfigurations @ 0x140806B70 (RtlQueryAllFeatureConfigurations.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140A52258 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
