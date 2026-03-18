/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x1404B8218
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408BE6F8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1408BFC0C (CmpTraceSecurityChanging.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408DF268 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFindMatchingDescriptorCell @ 0x140A81398 (CmpFindMatchingDescriptorCell.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x1409FA3BC (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
