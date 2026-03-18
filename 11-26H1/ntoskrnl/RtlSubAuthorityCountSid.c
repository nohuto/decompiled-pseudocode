/*
 * XREFs of RtlSubAuthorityCountSid @ 0x140491650
 * Callers:
 *     RtlReplaceSidInSd @ 0x140804260 (RtlReplaceSidInSd.c)
 *     NtSetInformationToken @ 0x140810BD0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SepCheckCapabilities @ 0x140814DD4 (SepCheckCapabilities.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408E98E8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     LookupSidInTable @ 0x140925630 (LookupSidInTable.c)
 *     RtlGetAppContainerSidType @ 0x140A2A020 (RtlGetAppContainerSidType.c)
 *     SepCopyTokenLoggingInformation @ 0x140A33D54 (SepCopyTokenLoggingInformation.c)
 *     RtlIsElevatedRid @ 0x140A54CC0 (RtlIsElevatedRid.c)
 *     SeQueryMandatoryLabel @ 0x140AB7D2C (SeQueryMandatoryLabel.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
