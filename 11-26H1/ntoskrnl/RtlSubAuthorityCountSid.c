/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14048B1A0
 * Callers:
 *     RtlReplaceSidInSd @ 0x140809D00 (RtlReplaceSidInSd.c)
 *     NtSetInformationToken @ 0x140816660 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SepCheckCapabilities @ 0x14081AEC4 (SepCheckCapabilities.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     RtlGetAppContainerSidType @ 0x140A3D0C0 (RtlGetAppContainerSidType.c)
 *     SepCopyTokenLoggingInformation @ 0x140A4ECB4 (SepCopyTokenLoggingInformation.c)
 *     RtlIsElevatedRid @ 0x140A62260 (RtlIsElevatedRid.c)
 *     SeQueryMandatoryLabel @ 0x140AB936C (SeQueryMandatoryLabel.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
