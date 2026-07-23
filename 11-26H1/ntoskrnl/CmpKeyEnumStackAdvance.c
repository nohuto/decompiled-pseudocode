/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x140943FD8
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140866AEC (CmpPartialPromoteSubkeys.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140943D6C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpEnumerateLayeredKey @ 0x140944A98 (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     CmpKeyEnumStackAdvanceInternal @ 0x14094420C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14094436C (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  __int16 i; // r9
  __int64 v4; // rdx
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v6; // r9
  _QWORD *v7; // r10

LABEL_1:
  while ( 1 )
  {
    result = CmpKeyEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      return result;
    for ( i = *a1; i >= 0; i = v6 - 1 )
    {
      CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 4, (unsigned __int16)i);
      EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v4);
      if ( v7[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v7) == 1 )
          goto LABEL_1;
        return 0LL;
      }
      if ( EntryAtLayerHeight[1] && (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) || v6 == a1[1] )
        goto LABEL_1;
    }
  }
}
