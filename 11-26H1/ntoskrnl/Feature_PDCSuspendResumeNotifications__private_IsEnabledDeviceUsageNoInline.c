/*
 * XREFs of Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x1405290FC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D99CC (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledFallback @ 0x140529138 (Feature_PDCSuspendResumeNotifications__private_IsEnabledFallback.c)
 */

__int64 Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PDCSuspendResumeNotifications__private_featureState & 0x10) != 0 )
    return Feature_PDCSuspendResumeNotifications__private_featureState & 1;
  else
    return Feature_PDCSuspendResumeNotifications__private_IsEnabledFallback(
             (unsigned int)Feature_PDCSuspendResumeNotifications__private_featureState,
             3LL);
}
