/*
 * XREFs of Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x14060B92C
 * Callers:
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopDelayedPdcRegistrationWorker @ 0x1407DB910 (PopDelayedPdcRegistrationWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407DE80C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407DF07C (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E03B4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E05F8 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x1407E0808 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 *     PopAdaptiveStandbyTraceSessionSettings @ 0x1407E0CBC (PopAdaptiveStandbyTraceSessionSettings.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E1100 (PopAdaptiveStandbyWnfCallback.c)
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x140B719D0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 * Callees:
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback @ 0x14060B968 (Feature_AdaptiveHibernateEnhancements__private_IsEnabledFallback.c)
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
