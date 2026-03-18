/*
 * XREFs of CmpPopulateKeyNodeStackFromKcbStack @ 0x1409832A4
 * Callers:
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14085F08C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140983258 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE4934 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AF9D60 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpGetKcbAtLayerHeight @ 0x1408BACF0 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1408BC430 (CmpGetEffectiveKcbSemantics.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140982388 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

_UNKNOWN **__fastcall CmpPopulateKeyNodeStackFromKcbStack(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int16 i; // bx
  __int64 EntryAtLayerHeight; // rdi
  __int16 v9; // dx
  __int64 v10; // rbp
  __int64 v11; // rdx
  ULONG_PTR v12; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = *(_WORD *)(a2 + 2); i >= 0; --i )
  {
    EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    result = (_UNKNOWN **)CmpGetKcbAtLayerHeight(a2, v9);
    v10 = (__int64)result;
    v11 = *((unsigned int *)result + 10);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (ULONG_PTR)result[4];
      *(_QWORD *)EntryAtLayerHeight = v12;
      *(_DWORD *)(EntryAtLayerHeight + 8) = v11;
      if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
        result = (_UNKNOWN **)HvpGetCellFlat(v12, v11, (unsigned int *)(EntryAtLayerHeight + 24));
      else
        result = (_UNKNOWN **)HvpGetCellPaged(v12, v11);
      *(_QWORD *)(EntryAtLayerHeight + 16) = result;
    }
    if ( a3 )
    {
      result = (_UNKNOWN **)CmpGetEffectiveKcbSemantics(v10, a3);
      if ( (_DWORD)result )
        break;
    }
  }
  return result;
}
