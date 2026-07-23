/*
 * XREFs of RtlEnumerateGenericTable @ 0x14030C480
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 */

PVOID __stdcall RtlEnumerateGenericTable(PRTL_GENERIC_TABLE Table, BOOLEAN Restart)
{
  PRTL_SPLAY_LINKS TableRoot; // rbx
  PRTL_SPLAY_LINKS v4; // rax
  _RTL_SPLAY_LINKS *v5; // rcx
  _RTL_SPLAY_LINKS *i; // rax

  TableRoot = Table->TableRoot;
  if ( Table->TableRoot )
  {
    if ( Restart )
    {
      for ( i = TableRoot->LeftChild; i; i = i->LeftChild )
        TableRoot = i;
      v5 = TableRoot;
    }
    else
    {
      v4 = RtlRealSuccessor(Table->TableRoot);
      TableRoot = v4;
      if ( !v4 )
        return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
      v5 = v4;
    }
    Table->TableRoot = RtlSplay(v5);
    return (PVOID)((unsigned __int64)&TableRoot[1].RightChild & -(__int64)(TableRoot != 0LL));
  }
  return 0LL;
}
