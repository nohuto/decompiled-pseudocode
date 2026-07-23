/*
 * XREFs of Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback @ 0x1406D3F10
 * Callers:
 *     Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline @ 0x1406D3ED4 (Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Mbr2Gpt_FixPartitionOrdering__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_Mbr2Gpt_FixPartitionOrdering__private_descriptor,
           0);
}
