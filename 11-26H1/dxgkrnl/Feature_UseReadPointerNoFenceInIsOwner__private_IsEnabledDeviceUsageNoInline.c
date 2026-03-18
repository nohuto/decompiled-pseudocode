/*
 * XREFs of Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline @ 0x14006F8E4
 * Callers:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 * Callees:
 *     Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback @ 0x14006F920 (Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback.c)
 */

__int64 Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UseReadPointerNoFenceInIsOwner__private_featureState & 0x10) != 0 )
    return Feature_UseReadPointerNoFenceInIsOwner__private_featureState & 1;
  else
    return Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback(
             (unsigned int)Feature_UseReadPointerNoFenceInIsOwner__private_featureState,
             3LL);
}
