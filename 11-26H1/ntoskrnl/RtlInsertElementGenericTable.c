/*
 * XREFs of RtlInsertElementGenericTable @ 0x14030BC90
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  PRTL_SPLAY_LINKS TableRoot; // rax
  void *v5; // rbx
  size_t v6; // r13
  PRTL_SPLAY_LINKS v10; // rsi
  int v11; // eax
  int v12; // ebp
  _RTL_SPLAY_LINKS *v13; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  struct _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *Blink; // r8

  TableRoot = Table->TableRoot;
  v5 = 0LL;
  v6 = BufferSize;
  v10 = 0LL;
  if ( Table->TableRoot )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = TableRoot;
        v11 = guard_dispatch_icall_no_overrides(Table, Buffer, &TableRoot[1].RightChild);
        if ( v11 )
          break;
        TableRoot = v10->LeftChild;
        if ( !TableRoot )
        {
          v12 = 2;
          goto LABEL_14;
        }
      }
      if ( v11 != 1 )
        break;
      TableRoot = v10->RightChild;
      if ( !TableRoot )
      {
        v12 = 3;
        goto LABEL_14;
      }
    }
    v12 = 1;
    v13 = v10;
    goto LABEL_9;
  }
  v12 = 0;
LABEL_14:
  v15 = (unsigned int)(v6 + 40);
  if ( (unsigned int)v15 >= (unsigned int)v6 )
  {
    v16 = (_QWORD *)guard_dispatch_icall_no_overrides(Table, v15, *(_QWORD *)&BufferSize);
    v13 = (_RTL_SPLAY_LINKS *)v16;
    if ( v16 )
    {
      *v16 = v16;
      v16[1] = 0LL;
      v16[2] = 0LL;
      v17 = (struct _LIST_ENTRY *)(v16 + 3);
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v17->Flink = &Table->InsertOrderList;
      v17->Blink = Blink;
      Blink->Flink = v17;
      Table->InsertOrderList.Blink = v17;
      ++Table->NumberGenericTableElements;
      if ( v12 )
      {
        if ( v12 == 2 )
          v10->LeftChild = v13;
        else
          v10->RightChild = v13;
        v13->Parent = v10;
      }
      else
      {
        Table->TableRoot = v13;
      }
      memmove(&v13[1].RightChild, Buffer, v6);
LABEL_9:
      Table->TableRoot = RtlSplay(v13);
      if ( NewElement )
        *NewElement = v12 != 1;
      return &v13[1].RightChild;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return v5;
}
