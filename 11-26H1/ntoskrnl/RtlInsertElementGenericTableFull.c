/*
 * XREFs of RtlInsertElementGenericTableFull @ 0x14030BDE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFull(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // r14
  _RTL_SPLAY_LINKS *v10; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  struct _LIST_ENTRY *v14; // rax
  struct _LIST_ENTRY *Blink; // rdx

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v10 = (_RTL_SPLAY_LINKS *)NodeOrParent;
LABEL_3:
    Table->TableRoot = RtlSplay(v10);
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    return &v10[1].RightChild;
  }
  v12 = BufferSize + 40;
  if ( (unsigned int)v12 >= BufferSize )
  {
    v13 = (_QWORD *)guard_dispatch_icall_no_overrides(Table, v12, BufferSize);
    v10 = (_RTL_SPLAY_LINKS *)v13;
    if ( v13 )
    {
      *v13 = v13;
      v13[1] = 0LL;
      v13[2] = 0LL;
      v14 = (struct _LIST_ENTRY *)(v13 + 3);
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v14->Flink = &Table->InsertOrderList;
      v14->Blink = Blink;
      Blink->Flink = v14;
      Table->InsertOrderList.Blink = v14;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v10;
        else
          *((_QWORD *)NodeOrParent + 2) = v10;
        v10->Parent = (_RTL_SPLAY_LINKS *)NodeOrParent;
      }
      else
      {
        Table->TableRoot = v10;
      }
      memmove(&v10[1].RightChild, Buffer, v7);
      goto LABEL_3;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
