/*
 * XREFs of CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140982388
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404925D8 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140492AB0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140492C70 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14086071C (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1408607FC (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1408609F8 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409812B8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1409817F4 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140981A04 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140981D5C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140981F00 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140981FC8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1409821FC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpResetKeyNodeStack @ 0x1409830BC (CmpResetKeyNodeStack.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1409832A4 (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14098335C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpPromoteSubtree @ 0x140985174 (CmpPromoteSubtree.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140985318 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPopulateKeyNodeStackFromKeyNodeStack @ 0x140987388 (CmpPopulateKeyNodeStackFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A46C54 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE49F4 (CmpGetSubKeyCountForKeyNodeStack.c)
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
