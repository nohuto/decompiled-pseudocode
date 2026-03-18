/*
 * XREFs of Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline @ 0x1401E7550
 * Callers:
 *     RIMIsInputSuppressed @ 0x140035E74 (RIMIsInputSuppressed.c)
 *     RIMSetDeviceInputMode @ 0x140180708 (RIMSetDeviceInputMode.c)
 * Callees:
 *     Feature_InputWakeGuardInterval__private_IsEnabledFallback @ 0x1401E7588 (Feature_InputWakeGuardInterval__private_IsEnabledFallback.c)
 */

__int64 Feature_InputWakeGuardInterval__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_InputWakeGuardInterval__private_featureState & 0x10) != 0 )
    return Feature_InputWakeGuardInterval__private_featureState & 1;
  else
    return Feature_InputWakeGuardInterval__private_IsEnabledFallback(
             (unsigned int)Feature_InputWakeGuardInterval__private_featureState,
             3LL);
}
