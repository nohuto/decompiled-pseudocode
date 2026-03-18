/*
 * XREFs of Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F18
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Feature_ExposePTPButtonSupport__private_IsEnabledFallback @ 0x1401B4F50 (Feature_ExposePTPButtonSupport__private_IsEnabledFallback.c)
 */

__int64 Feature_ExposePTPButtonSupport__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ExposePTPButtonSupport__private_featureState & 0x10) != 0 )
    return Feature_ExposePTPButtonSupport__private_featureState & 1;
  else
    return Feature_ExposePTPButtonSupport__private_IsEnabledFallback(
             (unsigned int)Feature_ExposePTPButtonSupport__private_featureState,
             3LL);
}
