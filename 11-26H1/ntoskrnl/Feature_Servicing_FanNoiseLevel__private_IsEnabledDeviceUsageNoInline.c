/*
 * XREFs of Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline @ 0x14061058C
 * Callers:
 *     PopFanUpdateSpeed @ 0x1407DEFE0 (PopFanUpdateSpeed.c)
 * Callees:
 *     Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback @ 0x1406105C8 (Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_FanNoiseLevel__private_featureState & 0x10) != 0 )
    return Feature_Servicing_FanNoiseLevel__private_featureState & 1;
  else
    return Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_FanNoiseLevel__private_featureState,
             3LL);
}
