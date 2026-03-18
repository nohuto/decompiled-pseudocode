/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x140B61DD8
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140984A10 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x14085F08C (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140981AA8 (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
