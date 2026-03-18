/*
 * XREFs of Feature_NotifyQuotaCharge__private_IsEnabledDeviceUsageNoInline @ 0x1404BD94C
 * Callers:
 *     CmpAllocatePostBlock @ 0x14097AD98 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14097AF04 (CmpNotifyChangeKey.c)
 * Callees:
 *     Feature_NotifyQuotaCharge__private_IsEnabledFallback @ 0x140532D94 (Feature_NotifyQuotaCharge__private_IsEnabledFallback.c)
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
