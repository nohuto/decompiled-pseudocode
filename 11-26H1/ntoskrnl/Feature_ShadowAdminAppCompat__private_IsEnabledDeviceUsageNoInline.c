/*
 * XREFs of Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline @ 0x14063DF54
 * Callers:
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 * Callees:
 *     Feature_ShadowAdminAppCompat__private_IsEnabledFallback @ 0x14063DF90 (Feature_ShadowAdminAppCompat__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdminAppCompat__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdminAppCompat__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdminAppCompat__private_featureState & 1;
  else
    return Feature_ShadowAdminAppCompat__private_IsEnabledFallback(
             (unsigned int)Feature_ShadowAdminAppCompat__private_featureState,
             3LL);
}
