/*
 * XREFs of SddlpAlloc @ 0x140A6F758
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1404A9950 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1404EEA30 (SeConvertStringSidToSid.c)
 *     EncodeAttributeName @ 0x14081EA38 (EncodeAttributeName.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x140901140 (LookupSidInTable.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A6CA38 (LocalGetStringForRelativeAttribute.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x140A6D784 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A6E644 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A6ED34 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140A6F670 (LocalGetStringForSid.c)
 *     LocalGetStringForControl @ 0x140A6F7A4 (LocalGetStringForControl.c)
 *     GetOperatorIndexByName @ 0x140A6FAC4 (GetOperatorIndexByName.c)
 *     LocalpGetStringForCondition @ 0x140A6FC58 (LocalpGetStringForCondition.c)
 *     GetPrintableAttributeName @ 0x140A701D8 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x140A703B0 (LocalConvertSidToStringSidW.c)
 *     LocalGetConditionForString @ 0x140A70494 (LocalGetConditionForString.c)
 *     AppendCondition @ 0x140A70CB4 (AppendCondition.c)
 *     GetPrintableOperandValue @ 0x140A70DF8 (GetPrintableOperandValue.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 *     GetAttributeName @ 0x140A7118C (GetAttributeName.c)
 *     GetStringOperandValue @ 0x140A713EC (GetStringOperandValue.c)
 *     EncloseSubCondition @ 0x140A714B0 (EncloseSubCondition.c)
 *     DecodeAttributeName @ 0x140A714FC (DecodeAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140B56E2C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SddlpAlloc(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset_0(PoolWithTag, 0, Size);
  return v3;
}
