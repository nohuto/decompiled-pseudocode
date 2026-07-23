/*
 * XREFs of Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063DEF8
 * Callers:
 *     SepOneWayLinkLogonSessionsEx @ 0x14063E288 (SepOneWayLinkLogonSessionsEx.c)
 *     SepDuplicateToken @ 0x1409060B0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1409E3714 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140B85580 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_295645497__private_IsEnabledFallback @ 0x14063DF34 (Feature_295645497__private_IsEnabledFallback.c)
 */

__int64 Feature_295645497__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_295645497__private_featureState & 0x10) != 0 )
    return Feature_295645497__private_featureState & 1;
  else
    return Feature_295645497__private_IsEnabledFallback((unsigned int)Feature_295645497__private_featureState, 3LL);
}
