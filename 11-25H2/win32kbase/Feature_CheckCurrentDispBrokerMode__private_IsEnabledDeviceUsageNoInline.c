/*
 * XREFs of Feature_CheckCurrentDispBrokerMode__private_IsEnabledDeviceUsageNoInline @ 0x1401CFEDC
 * Callers:
 *     ?DrvIsModeChangeHandledByDispBroker@@YA_NXZ @ 0x1401CB9C0 (-DrvIsModeChangeHandledByDispBroker@@YA_NXZ.c)
 * Callees:
 *     Feature_CheckCurrentDispBrokerMode__private_IsEnabledFallback @ 0x1401CFF14 (Feature_CheckCurrentDispBrokerMode__private_IsEnabledFallback.c)
 */

__int64 Feature_CheckCurrentDispBrokerMode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_CheckCurrentDispBrokerMode__private_featureState & 0x10) != 0 )
    return Feature_CheckCurrentDispBrokerMode__private_featureState & 1;
  else
    return Feature_CheckCurrentDispBrokerMode__private_IsEnabledFallback(
             (unsigned int)Feature_CheckCurrentDispBrokerMode__private_featureState,
             3LL);
}
