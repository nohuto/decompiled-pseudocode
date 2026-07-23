/*
 * XREFs of RtlRealPredecessor @ 0x1404EBF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealPredecessor(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *LeftChild; // r8
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v3; // rdx
  _RTL_SPLAY_LINKS *i; // rcx

  LeftChild = Links->LeftChild;
  result = 0LL;
  v3 = Links;
  if ( LeftChild )
  {
    for ( i = LeftChild->RightChild; i; i = i->RightChild )
      LeftChild = i;
    return LeftChild;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->LeftChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->RightChild == v3 )
      return Links;
  }
  return result;
}
