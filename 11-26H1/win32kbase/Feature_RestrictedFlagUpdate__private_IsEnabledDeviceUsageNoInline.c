/*
 * XREFs of Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401CE7F4
 * Callers:
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1401A87C0 (ValidateHandleSecure.c)
 *     Win32JobObject::_anonymous_namespace_::ConfigureProcessRestrictions @ 0x1401CEF44 (Win32JobObject--_anonymous_namespace_--ConfigureProcessRestrictions.c)
 * Callees:
 *     Feature_RestrictedFlagUpdate__private_IsEnabledFallback @ 0x1401CE830 (Feature_RestrictedFlagUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_RestrictedFlagUpdate__private_featureState & 0x10) != 0 )
    return Feature_RestrictedFlagUpdate__private_featureState & 1;
  else
    return Feature_RestrictedFlagUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_RestrictedFlagUpdate__private_featureState,
             3LL);
}
