/*
 * XREFs of RtlDeleteElementGenericTable @ 0x1800B4D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x1800B4E60 (RtlDelete.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTable(PRTL_GENERIC_TABLE Table, PVOID Buffer)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  int v5; // eax
  _RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v9; // rcx
  PRTL_GENERIC_FREE_ROUTINE FreeRoutine; // rax

  TableRoot = Table->TableRoot;
  if ( !Table->TableRoot )
    return 0;
  while ( 1 )
  {
    v5 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
           Table,
           Buffer,
           &TableRoot[1].RightChild);
    if ( v5 )
      break;
    LeftChild = TableRoot->LeftChild;
LABEL_4:
    TableRoot = LeftChild;
    if ( !LeftChild )
      return 0;
  }
  if ( v5 == 1 )
  {
    LeftChild = TableRoot->RightChild;
    goto LABEL_4;
  }
  Table->TableRoot = RtlDelete(TableRoot);
  Parent = TableRoot[1].Parent;
  if ( Parent->LeftChild != &TableRoot[1] || (v9 = TableRoot[1].LeftChild, v9->Parent != &TableRoot[1]) )
    __fastfail(3u);
  v9->Parent = Parent;
  Parent->LeftChild = v9;
  --Table->NumberGenericTableElements;
  Table->OrderedPointer = &Table->InsertOrderList;
  FreeRoutine = Table->FreeRoutine;
  Table->WhichOrderedElement = 0;
  ((void (__fastcall *)(PRTL_GENERIC_TABLE, PRTL_SPLAY_LINKS))FreeRoutine)(Table, TableRoot);
  return 1;
}
