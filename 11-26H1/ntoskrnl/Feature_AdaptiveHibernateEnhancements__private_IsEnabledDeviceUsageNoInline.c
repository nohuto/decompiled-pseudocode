/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060E8A8
 * Callers:
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D9D94 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407DA1E0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopDelayedPdcRegistrationWorker @ 0x1407DF920 (PopDelayedPdcRegistrationWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407E44EC (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407E4C70 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E5384 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E5664 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E5B18 (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E6000 (PopAdaptiveStandbyWnfCallback.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140B761C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback @ 0x14060E8E4 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback.c)
 */

__int64 Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AdaptiveHibernateEnhancements__private_featureState & 0x10) != 0 )
    return Feature_AdaptiveHibernateEnhancements__private_featureState & 1;
  else
    return Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback(
             (unsigned int)Feature_AdaptiveHibernateEnhancements__private_featureState,
             3LL);
}
