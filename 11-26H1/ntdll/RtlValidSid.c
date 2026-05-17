/*
 * XREFs of RtlValidSid @ 0x18003D140
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DB10 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18000E6E0 (RtlCheckTokenMembershipEx.c)
 *     RtlLengthSidAsUnicodeString @ 0x18003C5D0 (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003C8F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x18003CAD0 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x18003CC00 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x18003CD70 (RtlConvertSidToUnicodeString.c)
 *     RtlpSetSecurityObject @ 0x18005BF70 (RtlpSetSecurityObject.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C8600 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x1800C8B20 (RtlAddMandatoryAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800CC320 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800CE610 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x1800CE854 (RtlpValidateSidBuffer.c)
 *     RtlValidSecurityDescriptor @ 0x1800D9030 (RtlValidSecurityDescriptor.c)
 *     EvtIntReportEventWorker @ 0x1800E7270 (EvtIntReportEventWorker.c)
 *     RtlAddAccessFilterAce @ 0x18013E170 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E420 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E5A0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E930 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013EAE0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlValidSid(_BYTE *a1)
{
  return a1 && (*a1 & 0xF) == 1 && a1[1] <= 0xFu;
}
