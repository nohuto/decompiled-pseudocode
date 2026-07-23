/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140944550
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14048C128 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140943A14 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140943F10 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x140943FD8 (CmpKeyEnumStackAdvance.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14094536C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A4FF48 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
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
