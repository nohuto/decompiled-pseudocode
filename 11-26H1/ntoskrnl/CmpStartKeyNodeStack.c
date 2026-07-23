/*
 * XREFs of CmpStartKeyNodeStack @ 0x140943CD8
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x140943AB8 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x140943C40 (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140945268 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1409479F4 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140AE2444 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140AFC1F0 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140944174 (CmpKeyNodeStackEntryInitialize.c)
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
