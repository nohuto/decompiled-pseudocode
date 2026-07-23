/*
 * XREFs of Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14050BACC
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     SepOneWayLinkLogonSessions @ 0x14063DFB0 (SepOneWayLinkLogonSessions.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     PsBootPhaseComplete @ 0x1407F3820 (PsBootPhaseComplete.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     Feature_ShadowAdmin__private_IsEnabledFallback @ 0x1405352B4 (Feature_ShadowAdmin__private_IsEnabledFallback.c)
 */

__int64 Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShadowAdmin__private_featureState & 0x10) != 0 )
    return Feature_ShadowAdmin__private_featureState & 1;
  else
    return Feature_ShadowAdmin__private_IsEnabledFallback((unsigned int)Feature_ShadowAdmin__private_featureState, 3LL);
}
