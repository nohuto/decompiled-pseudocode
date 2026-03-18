/*
 * XREFs of Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline @ 0x140206360
 * Callers:
 *     RIMIsInputSuppressed @ 0x140098E80 (RIMIsInputSuppressed.c)
 *     RIMSetDeviceInputMode @ 0x1401BC3F0 (RIMSetDeviceInputMode.c)
 * Callees:
 *     Feature_InputWakeGuardInterval2__private_IsEnabledFallback @ 0x14020639C (Feature_InputWakeGuardInterval2__private_IsEnabledFallback.c)
 */

__int64 Feature_InputWakeGuardInterval2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputWakeGuardInterval2__private_featureState & 0x10) != 0 )
    return Feature_InputWakeGuardInterval2__private_featureState & 1;
  else
    return Feature_InputWakeGuardInterval2__private_IsEnabledFallback(
             (unsigned int)Feature_InputWakeGuardInterval2__private_featureState,
             3LL);
}
