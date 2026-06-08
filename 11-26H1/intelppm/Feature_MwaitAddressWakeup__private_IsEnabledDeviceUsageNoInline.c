/*
 * XREFs of Feature_MwaitAddressWakeup__private_IsEnabledDeviceUsageNoInline @ 0x140007DB0
 * Callers:
 *     DecodeMWaitIdleState @ 0x14002B4D0 (DecodeMWaitIdleState.c)
 * Callees:
 *     Feature_MwaitAddressWakeup__private_IsEnabledFallback @ 0x140007DEC (Feature_MwaitAddressWakeup__private_IsEnabledFallback.c)
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
