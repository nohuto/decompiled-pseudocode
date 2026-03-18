/*
 * XREFs of CmpStartKeyNodeStack @ 0x140981CC8
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x140981AA8 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x140981C30 (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140983258 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140984E0C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409859F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE4934 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AF9D60 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140982164 (CmpKeyNodeStackEntryInitialize.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2)
{
  unsigned int v3; // ebx
  __int64 Pool; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = 0;
  if ( a2 >= 2 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    *(_QWORD *)(a1 + 72) = Pool;
    if ( !Pool )
      return (unsigned int)-1073741670;
    v7 = 0LL;
    do
    {
      CmpKeyNodeStackEntryInitialize(v7 + *(_QWORD *)(a1 + 72));
      v7 = v8 + 32;
    }
    while ( v9 != 1 );
  }
  *(_WORD *)a1 = a2;
  return v3;
}
