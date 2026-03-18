/*
 * XREFs of Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1402944F8
 * Callers:
 *     NtUserGetLatestInputMessageData @ 0x140298100 (NtUserGetLatestInputMessageData.c)
 *     NtUserGetPointerIdForPromotion @ 0x140298760 (NtUserGetPointerIdForPromotion.c)
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x140294530 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHaptics__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHaptics__private_featureState & 1;
  else
    return Feature_TouchpadHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHaptics__private_featureState,
             3LL);
}
