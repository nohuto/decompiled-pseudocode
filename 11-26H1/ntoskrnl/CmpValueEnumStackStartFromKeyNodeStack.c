/*
 * XREFs of CmpValueEnumStackStartFromKeyNodeStack @ 0x14048C7C0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x14048C600 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x1409432C8 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AFC1F0 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpValueEnumStackEntryStart @ 0x14048C8BC (CmpValueEnumStackEntryStart.c)
 *     CmpValueEnumStackEntryInitialize @ 0x1404C8430 (CmpValueEnumStackEntryInitialize.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140942D30 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140944398 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140944550 (CmpGetEffectiveKeyNodeSemantics.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  unsigned int v2; // ebx
  __int16 v5; // di
  __int64 v6; // rdx
  _QWORD *EntryAtLayerHeight; // rax
  _QWORD *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 Pool2; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8

  v2 = 0;
  if ( *a2 >= 2 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    *(_QWORD *)(a1 + 80) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v14 = 0LL;
    do
    {
      CmpValueEnumStackEntryInitialize(v14 + *(_QWORD *)(a1 + 80));
      v14 = v15 + 32;
    }
    while ( v16 != 1 );
  }
  v5 = *a2;
  for ( *(_WORD *)(a1 + 12) = *a2; v5 >= 0; --v5 )
  {
    CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v5);
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v6);
    v8 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) == 1 )
        break;
      CmpValueEnumStackEntryStart(v11, v10, v9);
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v8) )
        break;
    }
  }
  return v2;
}
