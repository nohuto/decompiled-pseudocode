/*
 * XREFs of CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1408609F8
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSubtree @ 0x140985174 (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1408E0760 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409812B8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1409817F4 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpInitializeKeyNodeStack @ 0x140982128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140982388 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpCleanupKeyNodeStack @ 0x140982470 (CmpCleanupKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140983258 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(__int64 a1, __int64 a2, char a3)
{
  char v6; // di
  unsigned __int16 v7; // r14
  ULONG_PTR KcbAtLayerHeight; // rsi
  int started; // ebx
  __int64 v10; // rdx
  _BYTE v12[2]; // [rsp+20h] [rbp-88h] BYREF
  int v13; // [rsp+22h] [rbp-86h]
  __int16 v14; // [rsp+26h] [rbp-82h]

  v13 = 0;
  v14 = 0;
  memset_0(v12, 0, 0x4AuLL);
  v6 = 0;
  CmpInitializeKeyNodeStack(v12);
  v7 = *(_WORD *)(a1 + 2);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  started = CmpStartKeyNodeStackFromKcbStack(v12, a1, 0LL);
  if ( started < 0 )
    goto LABEL_11;
  CmpKeyNodeStackGetEntryAtLayerHeight(v12, v7);
  if ( *(_DWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a2, v10) + 8) == -1 )
  {
    started = CmpPartialPromoteSingleKeyFromKeyNodeStacks(v12, a2);
    if ( started < 0 )
      goto LABEL_11;
    v6 = 1;
  }
  if ( a3 )
  {
    started = CmpFullPromoteSingleKeyFromKeyNodeStacks(v12, a2);
    if ( started < 0 )
      goto LABEL_9;
    v6 = 1;
  }
  started = 0;
LABEL_9:
  if ( v6 )
  {
    ++*(_QWORD *)(KcbAtLayerHeight + 304);
    CmpRebuildKcbCacheFromNode(KcbAtLayerHeight);
  }
LABEL_11:
  CmpCleanupKeyNodeStack(v12);
  return (unsigned int)started;
}
