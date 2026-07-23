/*
 * XREFs of CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140947434
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140946A20 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14094717C (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorStart @ 0x140943AB8 (CmpSubtreeEnumeratorStart.c)
 *     CmpPopulateKeyNodeStackFromKeyNodeStack @ 0x140949088 (CmpPopulateKeyNodeStackFromKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int64 result; // rax
  __int64 v5; // rax

  result = CmpSubtreeEnumeratorStart(a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpPopulateKeyNodeStackFromKeyNodeStack(a1 + 16, a2);
    v5 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = a1 + 16;
    result = 0LL;
    *(_WORD *)a1 = 0;
  }
  return result;
}
