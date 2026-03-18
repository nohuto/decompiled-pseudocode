/*
 * XREFs of RtlCopySid @ 0x140A2AE10
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1404F5470 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x14063B654 (SepGetSidValuesDump.c)
 *     RtlAddAccessFilterAce @ 0x140803130 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140803440 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140803804 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408181E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081840C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140818554 (SddlAddScopedPolicyIDAce.c)
 *     MiLoadHotPatchForUserSid @ 0x1408712F4 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x140874040 (MiQueryLoadedPatches.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     PsImpersonateClient @ 0x140928820 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x14092A140 (SepCreateClientSecurityEx.c)
 *     SeAuditProcessCreation @ 0x140983DEC (SeAuditProcessCreation.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140A2A5D0 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SddlAddMandatoryAce @ 0x140A2AC94 (SddlAddMandatoryAce.c)
 *     SepGetLowBoxNumberEntry @ 0x140A2C7B8 (SepGetLowBoxNumberEntry.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140A4621C (SepInsertOrReferenceSharedSidEntries.c)
 *     PspAssignProcessQuotaBlock @ 0x140AB8F60 (PspAssignProcessQuotaBlock.c)
 *     SepCreateSidValuesBlock @ 0x140B4E880 (SepCreateSidValuesBlock.c)
 *     NtQueryInformationToken @ 0x140B79CE0 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

NTSTATUS __stdcall RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
