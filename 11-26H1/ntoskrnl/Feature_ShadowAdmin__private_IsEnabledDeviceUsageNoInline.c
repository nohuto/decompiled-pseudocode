/*
 * XREFs of Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14051205C
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1405154C8 (SepMandatorySubProcessToken.c)
 *     SepOneWayLinkLogonSessions @ 0x14063AEE8 (SepOneWayLinkLogonSessions.c)
 *     PsBootPhaseComplete @ 0x1407EDCC0 (PsBootPhaseComplete.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SeGetTokenDeviceMap @ 0x140A18788 (SeGetTokenDeviceMap.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_ShadowAdmin__private_IsEnabledFallback @ 0x140532E14 (Feature_ShadowAdmin__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdmin__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdmin__private_featureState & 1;
  else
    return Feature_ShadowAdmin__private_IsEnabledFallback((unsigned int)Feature_ShadowAdmin__private_featureState, 3LL);
}
