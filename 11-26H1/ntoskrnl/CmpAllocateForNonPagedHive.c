/*
 * XREFs of CmpAllocateForNonPagedHive @ 0x140505650
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x14085C094 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1408C8530 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140A8820C (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateForNonPagedHive(unsigned int a1, char a2)
{
  __int64 Pool2; // rdi

  if ( !(unsigned __int8)CmpClaimGlobalQuota() )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 72LL : 64LL);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(a1);
  return Pool2;
}
