/*
 * XREFs of CmpFullPromoteHiveRootFromKcbStack @ 0x140866A0C
 * Callers:
 *     CmpPromoteKey @ 0x1408B7364 (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408C12C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E6D20 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpInitializeKeyNodeStack @ 0x140944138 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140944480 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140945268 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpFullPromoteHiveRootFromKcbStack(__int64 a1)
{
  ULONG_PTR KcbAtLayerHeight; // rdi
  int started; // ebx
  _BYTE v5[2]; // [rsp+20h] [rbp-68h] BYREF
  int v6; // [rsp+22h] [rbp-66h]
  __int16 v7; // [rsp+26h] [rbp-62h]

  v6 = 0;
  v7 = 0;
  memset_0(v5, 0, 0x4AuLL);
  CmpInitializeKeyNodeStack(v5);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  started = CmpStartKeyNodeStackFromKcbStack(v5, a1, 0LL);
  if ( started >= 0 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(0LL, v5);
    if ( started >= 0 )
    {
      CmpKeyNodeStackGetEntryAtLayerHeight(v5, *(unsigned __int16 *)(a1 + 2));
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight);
      started = 0;
    }
  }
  CmpCleanupKeyNodeStack(v5);
  return (unsigned int)started;
}
