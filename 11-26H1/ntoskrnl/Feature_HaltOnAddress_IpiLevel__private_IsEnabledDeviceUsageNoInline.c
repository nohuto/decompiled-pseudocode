/*
 * XREFs of Feature_HaltOnAddress_IpiLevel__private_IsEnabledDeviceUsageNoInline @ 0x140526BFC
 * Callers:
 *     KiInitializeVelocity @ 0x140CCA1CC (KiInitializeVelocity.c)
 * Callees:
 *     Feature_HaltOnAddress_IpiLevel__private_IsEnabledFallback @ 0x140526C38 (Feature_HaltOnAddress_IpiLevel__private_IsEnabledFallback.c)
 */

__int64 Feature_HaltOnAddress_IpiLevel__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_HaltOnAddress_IpiLevel__private_featureState & 0x10) != 0 )
    return Feature_HaltOnAddress_IpiLevel__private_featureState & 1;
  else
    return Feature_HaltOnAddress_IpiLevel__private_IsEnabledFallback(
             (unsigned int)Feature_HaltOnAddress_IpiLevel__private_featureState,
             3LL);
}
