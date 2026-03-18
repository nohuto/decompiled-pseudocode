/*
 * XREFs of Feature_766733627__private_IsEnabledDeviceUsageNoInline @ 0x1401E02D8
 * Callers:
 *     NtUserGetKeyEventInfo @ 0x1401E45E0 (NtUserGetKeyEventInfo.c)
 * Callees:
 *     Feature_766733627__private_IsEnabledFallback @ 0x1401E0314 (Feature_766733627__private_IsEnabledFallback.c)
 */

__int64 Feature_766733627__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_766733627__private_featureState & 0x10) != 0 )
    return Feature_766733627__private_featureState & 1;
  else
    return Feature_766733627__private_IsEnabledFallback((unsigned int)Feature_766733627__private_featureState, 3LL);
}
