/*
 * XREFs of RtlLengthRequiredSid @ 0x1408E9A40
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     RtlNormalizeSecurityDescriptor @ 0x1404EE240 (RtlNormalizeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x140513C6C (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406C8DE8 (EtwpApplyPayloadFilterInternal.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     PiAuAllocateAndInitializeSid @ 0x1407A81C4 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x1407A8248 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D007C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140803EEC (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140804020 (RtlGetAppContainerParent.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14085A18C (CmpAdminSystemSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408E98E8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     IopCreateUmdfDirectory @ 0x140CBCE2C (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140CCF81C (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140CD4E38 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CD8734 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140CDADF0 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140CEDF54 (CmpInitializeTrustedInstallerSid.c)
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
