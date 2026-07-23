/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x140943AB8
 * Callers:
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140947434 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140B64E78 (CmpSubtreeEnumeratorStartForKcbStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpStartKcbStack @ 0x140943BD0 (CmpStartKcbStack.c)
 *     CmpKeyEnumStackStart @ 0x140943C40 (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x140943CD8 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140944064 (CmpKeyEnumStackInitialize.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2)
{
  __int64 Pool; // rax
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  _WORD *v7; // rbx
  __int16 i; // bx
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // rsi

  *(_WORD *)(a1 + 2) = a2;
  Pool = CmpAllocatePool(0x100uLL);
  *(_QWORD *)(a1 + 96) = Pool;
  if ( !Pool )
    return 3221225626LL;
  v5 = 0LL;
  v6 = 512LL;
  do
  {
    v7 = (_WORD *)(v5 + *(_QWORD *)(a1 + 96));
    memset_0(v7, 0, 0x198uLL);
    v7[13] = -1;
    CmpKeyEnumStackInitialize(v7 + 28);
    v5 += 408LL;
    --v6;
  }
  while ( v6 );
  for ( i = 0; ; ++i )
  {
    v9 = *(unsigned __int16 *)(a1 + 2);
    if ( i >= 512 )
      break;
    v10 = *(_QWORD *)(a1 + 96);
    v11 = 408LL * i;
    result = CmpStartKcbStack(v11 + v10 + 24, v9);
    if ( (int)result < 0 )
      return result;
    result = CmpKeyEnumStackStart(v11 + v10 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      return result;
  }
  return CmpStartKeyNodeStack(a1 + 16, v9);
}
