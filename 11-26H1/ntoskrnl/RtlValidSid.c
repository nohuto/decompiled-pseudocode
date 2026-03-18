/*
 * XREFs of RtlValidSid @ 0x140924370
 * Callers:
 *     AdtpPackageParameters @ 0x140475440 (AdtpPackageParameters.c)
 *     SepValidateCAPID @ 0x14052D3A0 (SepValidateCAPID.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140794398 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140795FE0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1407995D0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1407A8248 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x140803130 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140803440 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140803804 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1408178E0 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1408181E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081840C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140818554 (SddlAddScopedPolicyIDAce.c)
 *     ExpInitFullProcessSecurityInfo @ 0x140832B80 (ExpInitFullProcessSecurityInfo.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1408E9720 (SeCaptureSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408E98E8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlpSetSecurityObject @ 0x1409229F0 (RtlpSetSecurityObject.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     RtlConvertSidToUnicodeString @ 0x140925970 (RtlConvertSidToUnicodeString.c)
 *     RtlAddAccessAllowedAceEx @ 0x140925D80 (RtlAddAccessAllowedAceEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x140925EDC (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddProcessTrustLabelAce @ 0x140926090 (RtlAddProcessTrustLabelAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1409263C0 (SeCaptureSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140926EB0 (RtlValidSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x140A2AC94 (SddlAddMandatoryAce.c)
 *     SeCaptureSidAndAttributesArray @ 0x140A44CF8 (SeCaptureSidAndAttributesArray.c)
 *     NtManageHotPatch @ 0x140A993D0 (NtManageHotPatch.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B09878 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B2371C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CC5994 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140CC5EB4 (PiAuCreateUserSids.c)
 * Callees:
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return MmIsKernelAddress((unsigned __int64)Sid) && Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
