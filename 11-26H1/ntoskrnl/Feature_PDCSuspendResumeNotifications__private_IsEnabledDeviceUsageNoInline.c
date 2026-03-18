/*
 * XREFs of Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x140526A8C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1407D683C (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140A37138 (PopPowerAggregatorDisengageModernStandby.c)
 * Callees:
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledFallback @ 0x140526AC8 (Feature_PDCSuspendResumeNotifications__private_IsEnabledFallback.c)
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
