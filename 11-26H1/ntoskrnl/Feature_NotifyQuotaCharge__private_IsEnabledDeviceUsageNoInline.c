/*
 * XREFs of Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404B712C
 * Callers:
 *     CmpAllocatePostBlock @ 0x14093CDA8 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 * Callees:
 *     Feature_NotifyQuotaCharge__private_IsEnabledFallback @ 0x140535234 (Feature_NotifyQuotaCharge__private_IsEnabledFallback.c)
 */

__int64 Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NotifyQuotaCharge__private_featureState & 0x10) != 0 )
    return Feature_NotifyQuotaCharge__private_featureState & 1;
  else
    return Feature_NotifyQuotaCharge__private_IsEnabledFallback(
             (unsigned int)Feature_NotifyQuotaCharge__private_featureState,
             3LL);
}
