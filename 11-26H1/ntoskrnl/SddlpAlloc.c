/*
 * XREFs of SddlpAlloc @ 0x140A62788
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x1404B02C0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1404F5470 (SeConvertStringSidToSid.c)
 *     EncodeAttributeName @ 0x140818828 (EncodeAttributeName.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     LookupSidInTable @ 0x140925630 (LookupSidInTable.c)
 *     LocalGetStringForRelativeAttribute @ 0x140A5FA78 (LocalGetStringForRelativeAttribute.c)
 *     LocalpConvertStringSidToSid @ 0x140A60294 (LocalpConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x140A607C4 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140A61674 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140A61D64 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140A626A0 (LocalGetStringForSid.c)
 *     LocalGetStringForControl @ 0x140A627D4 (LocalGetStringForControl.c)
 *     GetOperatorIndexByName @ 0x140A62AF4 (GetOperatorIndexByName.c)
 *     LocalpGetStringForCondition @ 0x140A62C88 (LocalpGetStringForCondition.c)
 *     GetPrintableAttributeName @ 0x140A63208 (GetPrintableAttributeName.c)
 *     LocalConvertSidToStringSidW @ 0x140A633E0 (LocalConvertSidToStringSidW.c)
 *     LocalGetConditionForString @ 0x140A634C4 (LocalGetConditionForString.c)
 *     AppendCondition @ 0x140A63CE4 (AppendCondition.c)
 *     GetPrintableOperandValue @ 0x140A63E28 (GetPrintableOperandValue.c)
 *     GetOperandValue @ 0x140A64000 (GetOperandValue.c)
 *     GetAttributeName @ 0x140A641BC (GetAttributeName.c)
 *     GetStringOperandValue @ 0x140A6441C (GetStringOperandValue.c)
 *     EncloseSubCondition @ 0x140A644E0 (EncloseSubCondition.c)
 *     DecodeAttributeName @ 0x140A6452C (DecodeAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x140B5458C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
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
