/*
 * XREFs of RtlValidSid @ 0x1408FFE80
 * Callers:
 *     AdtpPackageParameters @ 0x14046EBC0 (AdtpPackageParameters.c)
 *     SepValidateCAPID @ 0x14052F8C0 (SepValidateCAPID.c)
 *     IopCheckGetQuotaBufferValidity @ 0x140796EC8 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140798B10 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14079C100 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1407AADF8 (PiAuCheckClientInteractive.c)
 *     RtlAddAccessFilterAce @ 0x140808BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140808EE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408092A4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x14081DAF0 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x14081E3F8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081E61C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x14081E764 (SddlAddScopedPolicyIDAce.c)
 *     ExpInitFullProcessSecurityInfo @ 0x140838DC0 (ExpInitFullProcessSecurityInfo.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408A3318 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     SeCaptureSid @ 0x1408EFCE0 (SeCaptureSid.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     RtlpSetSecurityObject @ 0x1408FE500 (RtlpSetSecurityObject.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 *     RtlAddAccessAllowedAceEx @ 0x140901890 (RtlAddAccessAllowedAceEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x1409019EC (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140901A50 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddProcessTrustLabelAce @ 0x140901BA0 (RtlAddProcessTrustLabelAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140901ED0 (SeCaptureSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x1409E2E88 (SeCaptureSidAndAttributesArray.c)
 *     SddlAddMandatoryAce @ 0x140A3DD24 (SddlAddMandatoryAce.c)
 *     NtManageHotPatch @ 0x140A9D550 (NtManageHotPatch.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B0B638 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B25B1C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuCreateUserSids @ 0x140CCBF94 (PiAuCreateUserSids.c)
 * Callees:
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  return MmIsKernelAddress((unsigned __int64)Sid) && Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
