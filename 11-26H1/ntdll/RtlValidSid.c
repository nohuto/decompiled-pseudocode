/*
 * XREFs of RtlValidSid @ 0x1800276B0
 * Callers:
 *     RtlLengthSidAsUnicodeString @ 0x180026B40 (RtlLengthSidAsUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180026E60 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAddAccessAllowedAce @ 0x180027040 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180027170 (RtlpAddKnownAce.c)
 *     RtlConvertSidToUnicodeString @ 0x1800272E0 (RtlConvertSidToUnicodeString.c)
 *     RtlpSetSecurityObject @ 0x1800464F0 (RtlpSetSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180059240 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180059E10 (RtlCheckTokenMembershipEx.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C5DC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddMandatoryAce @ 0x1800C62E0 (RtlAddMandatoryAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x1800C9A90 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x1800CBD80 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpValidateSidBuffer @ 0x1800CBFC4 (RtlpValidateSidBuffer.c)
 *     RtlValidSecurityDescriptor @ 0x1800D5FF0 (RtlValidSecurityDescriptor.c)
 *     EvtIntReportEventWorker @ 0x1800E5CD0 (EvtIntReportEventWorker.c)
 *     RtlAddAccessFilterAce @ 0x18013E020 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E2D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E450 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E7E0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013E990 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
