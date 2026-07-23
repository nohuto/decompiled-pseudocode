/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A4FF48
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A501E4 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A50568 (CmpSortedValueEnumStackEntryStart.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 result; // rax
  __int64 *EntryAtLayerHeight; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 Pool; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax

  v2 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    *(_QWORD *)(a1 + 80) = Pool;
    if ( !Pool )
      return 3221225626LL;
    v12 = 0LL;
    v13 = (unsigned __int16)(v2 - 1);
    do
    {
      v14 = *(_QWORD *)(a1 + 80);
      *(_OWORD *)(v12 + v14) = 0LL;
      *(_OWORD *)(v12 + v14 + 16) = 0LL;
      v12 += 32LL;
      --v13;
    }
    while ( v13 );
  }
  *(_WORD *)(a1 + 8) = v2;
  while ( v2 >= 0 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v2);
    CmpSortedValueEnumStackGetEntryAtLayerHeight(a1);
    v7 = EntryAtLayerHeight[2];
    if ( v7 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v7) == 1 )
        break;
      result = CmpSortedValueEnumStackEntryStart(v10, v9, v8);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
        break;
    }
    --v2;
  }
  return 0LL;
}
