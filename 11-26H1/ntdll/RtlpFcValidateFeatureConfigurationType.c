/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1800EC530
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18016E134 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18016E810 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
