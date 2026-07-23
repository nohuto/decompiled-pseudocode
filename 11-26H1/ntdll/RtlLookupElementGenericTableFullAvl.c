/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x1800BD3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax
  PVOID result; // rax

  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v9 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v9 )
          break;
        if ( !i->LeftChild )
        {
          *NodeOrParent = i;
          result = 0LL;
          *SearchResult = TableInsertAsLeft;
          return result;
        }
        i = i->LeftChild;
      }
      if ( v9 != GenericGreaterThan )
      {
        *NodeOrParent = i;
        *SearchResult = TableFoundNode;
        return (char *)*NodeOrParent + 32;
      }
      if ( !i->RightChild )
        break;
    }
    *NodeOrParent = i;
    result = 0LL;
    *SearchResult = TableInsertAsRight;
  }
  else
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
  return result;
}
