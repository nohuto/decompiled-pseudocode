/*
 * XREFs of RtlLookupElementGenericTable @ 0x14030B9F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __stdcall RtlLookupElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax
  _RTL_SPLAY_LINKS *LeftChild; // rax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0LL;
  while ( 1 )
  {
    v5 = guard_dispatch_icall_no_overrides(Table, Buffer, &TableRoot[1].RightChild);
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
      return 0LL;
  }
  Table->TableRoot = RtlSplay(TableRoot);
  return &TableRoot[1].RightChild;
}
