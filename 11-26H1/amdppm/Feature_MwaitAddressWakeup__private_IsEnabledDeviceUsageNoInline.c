/*
 * XREFs of Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline @ 0x140003D70
 * Callers:
 *     DecodeMWaitIdleState @ 0x140023400 (DecodeMWaitIdleState.c)
 * Callees:
 *     Feature_MwaitAddressWakeup__private_IsEnabledFallback @ 0x140003DAC (Feature_MwaitAddressWakeup__private_IsEnabledFallback.c)
 */

__int64 Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MwaitAddressWakeup__private_featureState & 0x10) != 0 )
    return Feature_MwaitAddressWakeup__private_featureState & 1;
  else
    return Feature_MwaitAddressWakeup__private_IsEnabledFallback(
             (unsigned int)Feature_MwaitAddressWakeup__private_featureState,
             3LL);
}
