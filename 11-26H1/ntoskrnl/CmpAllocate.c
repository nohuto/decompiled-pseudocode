/*
 * XREFs of CmpAllocate @ 0x140A8F2D0
 * Callers:
 *     CmpCreateEmptyHiveClone @ 0x140862384 (CmpCreateEmptyHiveClone.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     CmpClaimGlobalQuota @ 0x140A8F33C (CmpClaimGlobalQuota.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
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
