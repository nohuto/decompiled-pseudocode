/*
 * XREFs of ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001B80C
 * Callers:
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180019A40 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800E46F8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18001B974 (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18001B9A0 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::InsertIntoVisualTree(CWindowList *this, struct _LIST_ENTRY *a2)
{
  PVOID v4; // rax
  struct _LIST_ENTRY *Blink; // rdi
  struct CVisual *PrecedingVisibleWindowVisual; // rax
  int inserted; // eax
  unsigned int v8; // esi
  struct _LIST_ENTRY *Flink; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD Buffer[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v14; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h]
  __int128 v16; // [rsp+50h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-28h]
  char v18; // [rsp+68h] [rbp-20h]
  __int128 v19; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( (BYTE6(a2[46].Flink) & 8) != 0 )
  {
    Blink = a2[37].Blink[27].Blink[14].Blink;
    PrecedingVisibleWindowVisual = (struct CVisual *)*((_QWORD *)&Blink[9].Flink->Flink
                                                     + (unsigned int)(LODWORD(Blink[10].Blink) - 1));
  }
  else
  {
    Buffer[1] = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v19 = 0LL;
    v17 = -1LL;
    v18 = 0;
    Buffer[0] = a2[8].Blink;
    v4 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v4 )
      Blink = (struct _LIST_ENTRY *)*((_QWORD *)v4 + 3);
    else
      Blink = 0LL;
    PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, a2);
  }
  inserted = CContainerVisual::InsertChildAfter(
               (CContainerVisual *)Blink,
               (struct CVisual *)a2[27].Blink,
               PrecedingVisibleWindowVisual);
  v8 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC86,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted,
      Buffer[0]);
    return v8;
  }
  else
  {
    Flink = a2[29].Flink;
    if ( Flink
      && Flink[1].Blink
      && (v11 = CContainerVisual::InsertChildAfter(
                  (CContainerVisual *)Blink,
                  (struct CVisual *)Flink,
                  (struct CVisual *)a2[27].Blink),
          v12 = v11,
          v11 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v11,
        Buffer[0]);
      return v12;
    }
    else
    {
      return 0LL;
    }
  }
}
