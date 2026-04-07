/*
 * XREFs of ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18001B9A0
 * Callers:
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B80C (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CWindowList::FindPrecedingVisibleWindowVisual(CWindowList *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rdx
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  char v14; // [rsp+68h] [rbp-20h]
  __int128 v15; // [rsp+70h] [rbp-18h]

  if ( a2->Flink != a2 )
  {
    Buffer[1] = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v15 = 0LL;
    v13 = -1LL;
    v14 = 0;
    Buffer[0] = a2[8].Blink;
    v3 = (struct _LIST_ENTRY *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v3 )
      v4 = v3 + 5;
    else
      v4 = (struct _LIST_ENTRY *)&`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
    for ( i = a2->Blink; i != v4; i = i->Blink )
    {
      Blink = i[27].Blink;
      if ( Blink && Blink[1].Blink )
      {
        if ( (BYTE6(i[46].Flink) & 8) != 0 )
        {
          i = i[37].Blink;
          Blink = i[27].Blink;
        }
        Flink = i[29].Flink;
        if ( Flink )
        {
          if ( Flink[1].Blink )
            return i[29].Flink;
        }
        return Blink;
      }
    }
  }
  return 0LL;
}
