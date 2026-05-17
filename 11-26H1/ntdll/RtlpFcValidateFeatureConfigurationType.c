/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x1800ED090
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18016F134 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18016F810 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
