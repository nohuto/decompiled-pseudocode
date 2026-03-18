/*
 * XREFs of Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0
 * Callers:
 *     PopIdleChooseDozeS4Time @ 0x14060CB5C (PopIdleChooseDozeS4Time.c)
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 *     PopUmpoProcessPowerMessage @ 0x14077595C (PopUmpoProcessPowerMessage.c)
 *     PopPdcRegister @ 0x14077B0D8 (PopPdcRegister.c)
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407D64E0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x1407D6C24 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x1407D70B0 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x1407DA0B0 (PopIdleAoAcDozeToS4.c)
 *     PopIdleCsStateChanged @ 0x1407DA1D0 (PopIdleCsStateChanged.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x1407DA270 (PopIdleGlobalUserPresenceCallback.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x1407DA37C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopInitPlatformSettings @ 0x140CCF964 (PopInitPlatformSettings.c)
 *     PoInitializePdc @ 0x140CD57A4 (PoInitializePdc.c)
 * Callees:
 *     Feature_PoAdaptiveStandby__private_IsEnabledFallback @ 0x14060050C (Feature_PoAdaptiveStandby__private_IsEnabledFallback.c)
 */

__int64 Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PoAdaptiveStandby__private_featureState & 0x10) != 0 )
    return Feature_PoAdaptiveStandby__private_featureState & 1;
  else
    return Feature_PoAdaptiveStandby__private_IsEnabledFallback(
             (unsigned int)Feature_PoAdaptiveStandby__private_featureState,
             3LL);
}
