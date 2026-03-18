/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140982540
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404925D8 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x140492AB0 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140492C70 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140981A04 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140981F00 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140981FC8 (CmpKeyEnumStackAdvance.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14098335C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A46C54 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE49F4 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
