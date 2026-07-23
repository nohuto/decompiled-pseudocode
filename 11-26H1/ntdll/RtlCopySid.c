/*
 * XREFs of RtlCopySid @ 0x1800C6480
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x180048170 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C5DC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x1800C5F30 (RtlCreateAndSetSD.c)
 *     RtlAddMandatoryAce @ 0x1800C62E0 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x18013CB80 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x18013E020 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E2D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E450 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E7E0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013E990 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
