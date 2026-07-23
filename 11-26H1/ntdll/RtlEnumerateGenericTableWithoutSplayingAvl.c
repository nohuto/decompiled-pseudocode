/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1800D7320
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1800D7300 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1800D7398 (RealSuccessor.c)
 */

PVOID __cdecl RtlEnumerateGenericTableWithoutSplayingAvl(PRTL_AVL_TABLE Table, PVOID *RestartKey)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 *v4; // r9
  __int64 v5; // rcx
  PVOID result; // rax
  _RTL_BALANCED_LINKS *RightChild; // rcx
  _RTL_BALANCED_LINKS *i; // rax

  if ( !Table->NumberGenericTableElements )
    return 0LL;
  if ( *RestartKey )
  {
    v3 = RealSuccessor(*RestartKey, RestartKey, v2, RestartKey);
    v5 = v3;
    if ( v3 )
      *v4 = v3;
    result = (PVOID)(v3 + 32);
    if ( !v5 )
      return 0LL;
  }
  else
  {
    RightChild = Table->BalancedRoot.RightChild;
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    *RestartKey = RightChild;
    result = &RightChild[1];
    if ( !RightChild )
      return 0LL;
  }
  return result;
}
