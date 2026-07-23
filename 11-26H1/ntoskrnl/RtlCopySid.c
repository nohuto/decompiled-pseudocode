/*
 * XREFs of RtlCopySid @ 0x140A3DEA0
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     SeConvertStringSidToSid @ 0x1404EEA30 (SeConvertStringSidToSid.c)
 *     SepGetSidValuesDump @ 0x14063E770 (SepGetSidValuesDump.c)
 *     RtlAddAccessFilterAce @ 0x140808BD0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140808EE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408092A4 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x14081E3F8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081E61C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x14081E764 (SddlAddScopedPolicyIDAce.c)
 *     MiLoadHotPatchForUserSid @ 0x140877654 (MiLoadHotPatchForUserSid.c)
 *     MiQueryLoadedPatches @ 0x14087A3A0 (MiQueryLoadedPatches.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     SepCreateClientSecurityEx @ 0x140905C50 (SepCreateClientSecurityEx.c)
 *     SeAuditProcessCreation @ 0x140945DFC (SeAuditProcessCreation.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409E43BC (SepInsertOrReferenceSharedSidEntries.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140A3D660 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SddlAddMandatoryAce @ 0x140A3DD24 (SddlAddMandatoryAce.c)
 *     SepGetLowBoxNumberEntry @ 0x140A3E414 (SepGetLowBoxNumberEntry.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 *     SepCreateSidValuesBlock @ 0x140B51110 (SepCreateSidValuesBlock.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
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
