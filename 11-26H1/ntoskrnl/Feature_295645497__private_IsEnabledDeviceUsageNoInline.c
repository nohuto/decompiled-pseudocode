/*
 * XREFs of Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063AE30
 * Callers:
 *     SepOneWayLinkLogonSessionsEx @ 0x14063B1C0 (SepOneWayLinkLogonSessionsEx.c)
 *     SepDuplicateToken @ 0x14092A5A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140A45584 (SepFilterToken.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140B7CB10 (SepTokenDeleteMethod.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_295645497__private_IsEnabledFallback @ 0x14063AE6C (Feature_295645497__private_IsEnabledFallback.c)
 */

__int64 Feature_295645497__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_295645497__private_featureState & 0x10) != 0 )
    return Feature_295645497__private_featureState & 1;
  else
    return Feature_295645497__private_IsEnabledFallback((unsigned int)Feature_295645497__private_featureState, 3LL);
}
