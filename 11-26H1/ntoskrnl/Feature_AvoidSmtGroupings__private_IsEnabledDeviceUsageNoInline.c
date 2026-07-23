/*
 * XREFs of Feature_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline @ 0x1405291B4
 * Callers:
 *     KiInitializeVelocity @ 0x140CD02B4 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_AvoidSmtGroupings__private_IsEnabledFallback @ 0x1405291F0 (Feature_AvoidSmtGroupings__private_IsEnabledFallback.c)
 */

__int64 Feature_AvoidSmtGroupings__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AvoidSmtGroupings__private_featureState & 0x10) != 0 )
    return Feature_AvoidSmtGroupings__private_featureState & 1;
  else
    return Feature_AvoidSmtGroupings__private_IsEnabledFallback(
             (unsigned int)Feature_AvoidSmtGroupings__private_featureState,
             3LL);
}
