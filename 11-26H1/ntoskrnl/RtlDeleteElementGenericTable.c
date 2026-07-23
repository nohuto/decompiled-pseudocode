/*
 * XREFs of RtlDeleteElementGenericTable @ 0x140482C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v9; // rcx

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0;
  while ( 1 )
  {
    v5 = guard_dispatch_icall_no_overrides(Table, Buffer);
    if ( !v5 )
    {
      LeftChild = TableRoot->LeftChild;
      goto LABEL_6;
    }
    if ( v5 != 1 )
      break;
    LeftChild = TableRoot->RightChild;
LABEL_6:
    TableRoot = LeftChild;
    if ( !LeftChild )
      return 0;
  }
  Table->TableRoot = RtlDelete(TableRoot);
  Parent = TableRoot[1].Parent;
  if ( Parent->LeftChild != &TableRoot[1] || (v9 = TableRoot[1].LeftChild, v9->Parent != &TableRoot[1]) )
    __fastfail(3u);
  v9->Parent = Parent;
  Parent->LeftChild = v9;
  --Table->NumberGenericTableElements;
  Table->OrderedPointer = &Table->InsertOrderList;
  Table->WhichOrderedElement = 0;
  guard_dispatch_icall_no_overrides(Table, TableRoot);
  return 1;
}
