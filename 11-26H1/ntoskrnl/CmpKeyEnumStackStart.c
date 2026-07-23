/*
 * XREFs of CmpKeyEnumStackStart @ 0x140943C40
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x140943AB8 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140946E1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140AE2504 (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpStartKeyNodeStack @ 0x140943CD8 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1409440B4 (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, unsigned __int16 a2)
{
  __int64 v5; // rbp
  __int64 Pool; // rax
  __int64 v7; // rsi

  if ( (__int16)a2 < 2 )
    goto LABEL_2;
  LOWORD(v5) = a2 - 1;
  Pool = CmpAllocatePool(0x100uLL);
  v7 = 0LL;
  *(_QWORD *)(a1 + 344) = Pool;
  if ( Pool )
  {
    v5 = (unsigned __int16)v5;
    do
    {
      CmpKeyEnumStackEntryInitialize(v7 + *(_QWORD *)(a1 + 344));
      v7 += 128LL;
      --v5;
    }
    while ( v5 );
LABEL_2:
    *(_WORD *)a1 = a2;
    return CmpStartKeyNodeStack(a1 + 8, a2);
  }
  return 3221225626LL;
}
