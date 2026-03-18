/*
 * XREFs of CmpAllocate @ 0x140A881A0
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x14085C094 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1408C8530 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140A8820C (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocate(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rdi

  v2 = a1;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(a1) )
    return 0LL;
  Pool2 = ExAllocatePool2(a2 != 0 ? 264LL : 256LL);
  if ( !Pool2 )
    CmpReleaseGlobalQuota(v2);
  return Pool2;
}
