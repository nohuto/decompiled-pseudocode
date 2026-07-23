/*
 * XREFs of Feature_490991929__private_IsEnabledDeviceUsageNoInline @ 0x1406DB048
 * Callers:
 *     WheapLogInitEvent @ 0x14084F4F8 (WheapLogInitEvent.c)
 * Callees:
 *     Feature_490991929__private_IsEnabledFallback @ 0x1406DB084 (Feature_490991929__private_IsEnabledFallback.c)
 */

__int64 Feature_490991929__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_490991929__private_featureState & 0x10) != 0 )
    return Feature_490991929__private_featureState & 1;
  else
    return Feature_490991929__private_IsEnabledFallback((unsigned int)Feature_490991929__private_featureState, 3LL);
}
