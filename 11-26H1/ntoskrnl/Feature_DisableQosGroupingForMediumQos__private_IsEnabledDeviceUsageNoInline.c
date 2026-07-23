/*
 * XREFs of Feature_DisableQosGroupingForMediumQos__private_IsEnabledDeviceUsageNoInline @ 0x1405EBDD8
 * Callers:
 *     KiInitializeVelocity @ 0x140CD02B4 (KiInitializeVelocity.c)
 * Callees:
 *     Feature_DisableQosGroupingForMediumQos__private_IsEnabledFallback @ 0x1405EBE14 (Feature_DisableQosGroupingForMediumQos__private_IsEnabledFallback.c)
 */

__int64 Feature_DisableQosGroupingForMediumQos__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DisableQosGroupingForMediumQos__private_featureState & 0x10) != 0 )
    return Feature_DisableQosGroupingForMediumQos__private_featureState & 1;
  else
    return Feature_DisableQosGroupingForMediumQos__private_IsEnabledFallback(
             (unsigned int)Feature_DisableQosGroupingForMediumQos__private_featureState,
             3LL);
}
