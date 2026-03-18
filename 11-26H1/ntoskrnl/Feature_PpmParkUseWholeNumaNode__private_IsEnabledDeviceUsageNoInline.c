/*
 * XREFs of Feature_PpmParkUseWholeNumaNode__private_IsEnabledDeviceUsageNoInline @ 0x14060F0B4
 * Callers:
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 * Callees:
 *     Feature_PpmParkUseWholeNumaNode__private_IsEnabledFallback @ 0x14060F0F0 (Feature_PpmParkUseWholeNumaNode__private_IsEnabledFallback.c)
 */

__int64 Feature_PpmParkUseWholeNumaNode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_PpmParkUseWholeNumaNode__private_featureState & 0x10) != 0 )
    return Feature_PpmParkUseWholeNumaNode__private_featureState & 1;
  else
    return Feature_PpmParkUseWholeNumaNode__private_IsEnabledFallback(
             (unsigned int)Feature_PpmParkUseWholeNumaNode__private_featureState,
             3LL);
}
