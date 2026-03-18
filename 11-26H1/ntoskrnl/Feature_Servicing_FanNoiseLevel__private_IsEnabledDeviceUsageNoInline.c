/*
 * XREFs of Feature_Servicing_FanNoiseLevel__private_IsEnabledDeviceUsageNoInline @ 0x14060D47C
 * Callers:
 *     PopFanUpdateSpeed @ 0x1407DB0F0 (PopFanUpdateSpeed.c)
 * Callees:
 *     Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback @ 0x14060D4B8 (Feature_Servicing_FanNoiseLevel__private_IsEnabledFallback.c)
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
