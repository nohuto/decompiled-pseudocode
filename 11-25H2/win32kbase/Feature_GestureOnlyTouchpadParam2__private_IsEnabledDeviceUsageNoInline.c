/*
 * XREFs of Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F6C
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1400A7AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     UpdateMouseConnectionState @ 0x14012F3A8 (UpdateMouseConnectionState.c)
 * Callees:
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback @ 0x1401B4FA4 (Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback.c)
 */

__int64 Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GestureOnlyTouchpadParam2__private_featureState & 0x10) != 0 )
    return Feature_GestureOnlyTouchpadParam2__private_featureState & 1;
  else
    return Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback(
             (unsigned int)Feature_GestureOnlyTouchpadParam2__private_featureState,
             3LL);
}
