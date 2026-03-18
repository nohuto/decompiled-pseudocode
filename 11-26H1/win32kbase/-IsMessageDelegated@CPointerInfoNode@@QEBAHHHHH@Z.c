/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x140140578
 * Callers:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x14004F080 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 && a3 && !a4 && !a5 )
    return 1LL;
  return result;
}
