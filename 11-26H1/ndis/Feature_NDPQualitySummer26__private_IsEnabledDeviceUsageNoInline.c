/*
 * XREFs of Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60
 * Callers:
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x140014460 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ndisIfRegisterInterfaceEx @ 0x140089340 (ndisIfRegisterInterfaceEx.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisNblTrackerWatchdogWorkerRoutine @ 0x14013B350 (ndisNblTrackerWatchdogWorkerRoutine.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401452A8 (ndisReportTimeoutWaitingForExternalDriver.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     Feature_NDPQualitySummer26__private_IsEnabledFallback @ 0x1400A4B9C (Feature_NDPQualitySummer26__private_IsEnabledFallback.c)
 */

__int64 Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_NDPQualitySummer26__private_featureState & 0x10) != 0 )
    return Feature_NDPQualitySummer26__private_featureState & 1;
  else
    return Feature_NDPQualitySummer26__private_IsEnabledFallback(
             (unsigned int)Feature_NDPQualitySummer26__private_featureState,
             3LL);
}
