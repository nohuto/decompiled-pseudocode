/*
 * XREFs of Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline @ 0x1406D3ED4
 * Callers:
 *     ExpTranslateNtPath @ 0x140B597F4 (ExpTranslateNtPath.c)
 * Callees:
 *     Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback @ 0x1406D3F10 (Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback.c)
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
