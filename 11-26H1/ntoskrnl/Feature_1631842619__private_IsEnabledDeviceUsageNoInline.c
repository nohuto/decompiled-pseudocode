/*
 * XREFs of Feature_1631842619__private_IsEnabledDeviceUsageNoInline @ 0x1406D8B68
 * Callers:
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 * Callees:
 *     Feature_1631842619__private_IsEnabledFallback @ 0x1406D8BA4 (Feature_1631842619__private_IsEnabledFallback.c)
 */

__int64 Feature_1631842619__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1631842619__private_featureState & 0x10) != 0 )
    return Feature_1631842619__private_featureState & 1;
  else
    return Feature_1631842619__private_IsEnabledFallback((unsigned int)Feature_1631842619__private_featureState, 3LL);
}
