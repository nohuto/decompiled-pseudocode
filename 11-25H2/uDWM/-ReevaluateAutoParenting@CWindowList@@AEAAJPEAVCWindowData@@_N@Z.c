/*
 * XREFs of ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180006D20
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001A6E8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18001B438 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180006EC0 (-ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180007764 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800E878C (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ReevaluateAutoParenting(CWindowList *this, struct CWindowData *a2, char a3)
{
  const struct _LIST_ENTRY *v6; // rax
  const struct _LIST_ENTRY *v7; // rsi
  struct CWindowData *v8; // rbx
  __int64 v9; // rax
  char ShouldBeAutoParented; // al
  CWindowList *v11; // rcx
  int v13; // eax
  unsigned int v14; // ebp
  int v15; // eax
  unsigned int v16; // ebx
  int inserted; // eax
  unsigned int v18; // ebp
  _QWORD Buffer[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v20; // [rsp+30h] [rbp-68h]
  __int128 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  char v24; // [rsp+68h] [rbp-30h]
  __int128 v25; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  if ( *(struct CWindowData **)a2 != a2 )
  {
    v23 = -1LL;
    v20 = 0LL;
    Buffer[1] = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v24 = 0;
    v25 = 0LL;
    Buffer[0] = *((_QWORD *)a2 + 17);
    v6 = (const struct _LIST_ENTRY *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v7 = v6 + 5;
    if ( !v6 )
      v7 = 0LL;
    v8 = a2;
    if ( a3 )
      goto LABEL_12;
    while ( 1 )
    {
      if ( (*((_BYTE *)v8 + 672) & 1) != 0 )
      {
        v9 = *((_QWORD *)v8 + 55);
        if ( v9 )
        {
          if ( *(_QWORD *)(v9 + 24) )
          {
LABEL_12:
            ShouldBeAutoParented = CWindowData::ShouldBeAutoParented(v8, v7);
            v11 = (CWindowList *)*((unsigned __int8 *)v8 + 678);
            LOBYTE(v11) = ((unsigned __int8)v11 & 0x10) != 0;
            if ( ShouldBeAutoParented == (_BYTE)v11 )
            {
              if ( !a3 )
                return 0LL;
              inserted = CWindowList::InsertIntoVisualTree(this, (struct _LIST_ENTRY *)v8);
              v18 = inserted;
              if ( inserted < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1FA0,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                  (const char *)(unsigned int)inserted,
                  Buffer[0]);
                return v18;
              }
            }
            else
            {
              v13 = CWindowList::ToggleAutoParenting(v11, v8);
              v14 = v13;
              if ( v13 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1F99,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                  (const char *)(unsigned int)v13,
                  Buffer[0]);
                return v14;
              }
            }
          }
        }
      }
      v8 = *(struct CWindowData **)v8;
      a3 = 0;
      if ( !v8 || v8 == (struct CWindowData *)v7 || v8 == a2 )
        return 0LL;
    }
  }
  if ( (*((_BYTE *)a2 + 678) & 0x10) == 0 )
    return 0LL;
  v15 = CWindowList::ToggleAutoParenting(this, a2);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F89,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v15,
    Buffer[0]);
  return v16;
}
