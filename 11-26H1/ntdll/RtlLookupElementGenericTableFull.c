/*
 * XREFs of RtlLookupElementGenericTableFull @ 0x1800B5330
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B5480 (RtlSplay.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlLookupElementGenericTableFull(
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
        v9 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
               Table,
               Buffer,
               &TableRoot[1].RightChild);
        if ( v9 )
          break;
        if ( !TableRoot->LeftChild )
        {
          *NodeOrParent = TableRoot;
          result = 0LL;
          *SearchResult = TableInsertAsLeft;
          return result;
        }
        TableRoot = TableRoot->LeftChild;
      }
      if ( v9 != 1 )
      {
        *NodeOrParent = TableRoot;
        *SearchResult = TableFoundNode;
        Table->TableRoot = RtlSplay((PRTL_SPLAY_LINKS)*NodeOrParent);
        return (char *)*NodeOrParent + 40;
      }
      if ( !TableRoot->RightChild )
        break;
      TableRoot = TableRoot->RightChild;
    }
    *NodeOrParent = TableRoot;
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
