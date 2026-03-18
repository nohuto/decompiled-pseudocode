/*
 * XREFs of Feature_UMAccessWmsgpConnect__private_IsEnabledDeviceUsageNoInline @ 0x140226188
 * Callers:
 *     WmsgpConnect @ 0x1402CA7F4 (WmsgpConnect.c)
 * Callees:
 *     Feature_UMAccessWmsgpConnect__private_IsEnabledFallback @ 0x1402261C0 (Feature_UMAccessWmsgpConnect__private_IsEnabledFallback.c)
 */

__int64 Feature_UMAccessWmsgpConnect__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UMAccessWmsgpConnect__private_featureState & 0x10) != 0 )
    return Feature_UMAccessWmsgpConnect__private_featureState & 1;
  else
    return Feature_UMAccessWmsgpConnect__private_IsEnabledFallback(
             (unsigned int)Feature_UMAccessWmsgpConnect__private_featureState,
             3LL);
}
