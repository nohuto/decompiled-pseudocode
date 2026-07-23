/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140866A0C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140866CE8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140943804 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140943A14 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140943F10 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14094420C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpResetKeyNodeStack @ 0x1409450CC (CmpResetKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409452B4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140947320 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPopulateKeyNodeStackFromKeyNodeStack @ 0x140949088 (CmpPopulateKeyNodeStackFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A4FF48 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyNodeStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 72) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 8;
}
