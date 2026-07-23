/*
 * XREFs of RtlLengthSecurityDescriptorStrict @ 0x1404B1A48
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1408C4CC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1408C61DC (CmpTraceSecurityChanging.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFindMatchingDescriptorCell @ 0x140A87208 (CmpFindMatchingDescriptorCell.c)
 * Callees:
 *     SepSecurityDescriptorStrictLength @ 0x14091EFBC (SepSecurityDescriptorStrictLength.c)
 */

__int64 RtlLengthSecurityDescriptorStrict()
{
  return SepSecurityDescriptorStrictLength();
}
