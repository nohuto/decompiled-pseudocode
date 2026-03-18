/*
 * XREFs of Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline @ 0x1406CFEA4
 * Callers:
 *     ExpTranslateNtPath @ 0x140B56AF4 (ExpTranslateNtPath.c)
 * Callees:
 *     Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback @ 0x1406CFEE0 (Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback.c)
 */

__int64 Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Mbr2Gpt_FixPartitionOrdering__private_featureState & 0x10) != 0 )
    return Feature_Mbr2Gpt_FixPartitionOrdering__private_featureState & 1;
  else
    return Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback(
             (unsigned int)Feature_Mbr2Gpt_FixPartitionOrdering__private_featureState,
             3LL);
}
