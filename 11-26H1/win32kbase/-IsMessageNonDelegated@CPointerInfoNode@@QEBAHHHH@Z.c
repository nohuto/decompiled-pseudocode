/*
 * XREFs of ?IsMessageNonDelegated@CPointerInfoNode@@QEBAHHHH@Z @ 0x14016CD00
 * Callers:
 *     ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x14016CBE4 (-IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPointerInfoNode::IsMessageNonDelegated(CPointerInfoNode *this, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 && (!a3 || a4) )
    return 1LL;
  return result;
}
