/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x14030B920
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        PVOID *NodeOrParent,
        TABLE_SEARCH_RESULT *SearchResult)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v9; // eax
  PVOID result; // rax

  TableRoot = Table->TableRoot;
  if ( Table->TableRoot )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = guard_dispatch_icall_no_overrides(Table, Buffer, &TableRoot[1].RightChild);
        if ( !v9 )
          break;
        if ( v9 != 1 )
        {
          *NodeOrParent = TableRoot;
          *SearchResult = TableFoundNode;
          Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
          return (char *)*NodeOrParent + 40;
        }
        if ( !TableRoot->RightChild )
        {
          *NodeOrParent = TableRoot;
          result = 0LL;
          *SearchResult = TableInsertAsRight;
          return result;
        }
        TableRoot = TableRoot->RightChild;
      }
      if ( !TableRoot->LeftChild )
        break;
      TableRoot = TableRoot->LeftChild;
    }
    *NodeOrParent = TableRoot;
    result = 0LL;
    *SearchResult = TableInsertAsLeft;
  }
  else
  {
    *SearchResult = TableEmptyTree;
    return 0LL;
  }
  return result;
}
