/*
 * XREFs of RtlCopySid @ 0x1800C8CC0
 * Callers:
 *     RtlpGetDefaultTrustSubjectContext @ 0x18005DBF0 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800C8600 (RtlAddProcessTrustLabelAce.c)
 *     RtlCreateAndSetSD @ 0x1800C8770 (RtlCreateAndSetSD.c)
 *     RtlAddMandatoryAce @ 0x1800C8B20 (RtlAddMandatoryAce.c)
 *     RtlCopySidAndAttributesArray @ 0x18013CCD0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x18013E170 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013E420 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013E5A0 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013E930 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013EAE0 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlCopySid(unsigned int a1, void *a2, unsigned __int8 *a3)
{
  unsigned int v3; // eax

  v3 = 4 * a3[1] + 8;
  if ( v3 > a1 )
    return 3221225507LL;
  memmove(a2, a3, v3);
  return 0LL;
}
