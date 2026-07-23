/*
 * XREFs of RtlInsertElementGenericTable @ 0x1800B50D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x1800B5480 (RtlSplay.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlInsertElementGenericTable(
        PRTL_GENERIC_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  PRTL_SPLAY_LINKS TableRoot; // rax
  void *v5; // r15
  size_t v6; // r13
  PRTL_SPLAY_LINKS v10; // rbx
  int v11; // eax
  int v12; // ebp
  _RTL_SPLAY_LINKS *v13; // r14
  _QWORD *v15; // rax
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *Blink; // r8

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
        v11 = ((__int64 (__fastcall *)(PRTL_GENERIC_TABLE, PVOID, _RTL_SPLAY_LINKS **))Table->CompareRoutine)(
                Table,
                Buffer,
                &TableRoot[1].RightChild);
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
  if ( (int)v6 + 40 >= (unsigned int)v6 )
  {
    v15 = (_QWORD *)((__int64 (__fastcall *)(PRTL_GENERIC_TABLE))Table->AllocateRoutine)(Table);
    v13 = (_RTL_SPLAY_LINKS *)v15;
    if ( v15 )
    {
      *v15 = v15;
      v15[1] = 0LL;
      v15[2] = 0LL;
      v16 = (_LIST_ENTRY *)(v15 + 3);
      Blink = Table->InsertOrderList.Blink;
      if ( Blink->Flink != &Table->InsertOrderList )
        __fastfail(3u);
      v16->Flink = &Table->InsertOrderList;
      v16->Blink = Blink;
      Blink->Flink = v16;
      Table->InsertOrderList.Blink = v16;
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
