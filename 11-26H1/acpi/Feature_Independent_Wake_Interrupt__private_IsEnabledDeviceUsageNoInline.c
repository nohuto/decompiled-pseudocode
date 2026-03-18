/*
 * XREFs of Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14
 * Callers:
 *     ACPIFreeWaitWakePowerRequest @ 0x140033B30 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x1400401CC (ACPIAssociateWakeInterrupt.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x14005092C (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIDereferenceWakeInterrupt @ 0x140050A88 (ACPIDereferenceWakeInterrupt.c)
 *     ACPIDisconnectWakeInterrupt @ 0x140050B2C (ACPIDisconnectWakeInterrupt.c)
 *     ACPIFindWakeInterruptForVector @ 0x140050C34 (ACPIFindWakeInterruptForVector.c)
 *     ACPICreateWakeInterruptRegistrationEntries @ 0x1400C5F14 (ACPICreateWakeInterruptRegistrationEntries.c)
 * Callees:
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledFallback @ 0x140063B50 (Feature_Independent_Wake_Interrupt__private_IsEnabledFallback.c)
 */

__int64 Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Independent_Wake_Interrupt__private_featureState & 0x10) != 0 )
    return Feature_Independent_Wake_Interrupt__private_featureState & 1;
  else
    return Feature_Independent_Wake_Interrupt__private_IsEnabledFallback(
             (unsigned int)Feature_Independent_Wake_Interrupt__private_featureState,
             3LL);
}
