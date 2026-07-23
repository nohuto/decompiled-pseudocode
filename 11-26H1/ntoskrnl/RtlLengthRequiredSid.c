/*
 * XREFs of RtlLengthRequiredSid @ 0x1408F0000
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404E7820 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406CCDC8 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     PiAuAllocateAndInitializeSid @ 0x1407AAD74 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x1407AADF8 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D311C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSidEx @ 0x14080998C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140809AC0 (RtlGetAppContainerParent.c)
 *     NtSetUuidSeed @ 0x140847400 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x14084831C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140860480 (CmpAdminSystemSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     IopCreateUmdfDirectory @ 0x140CC2EA4 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140CD59CC (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140CDB1D8 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140CE1170 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140CF42D0 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
