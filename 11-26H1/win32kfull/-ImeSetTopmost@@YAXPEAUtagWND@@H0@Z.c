/*
 * XREFs of ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14012C99C
 * Callers:
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14017A93C (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     UnlinkWindow @ 0x14012E600 (UnlinkWindow.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1401BE694 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ImeSetTopmost(struct tagWND *j, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // r15
  struct tagWND *LastTopMostWindowNoIME; // rbx
  int v6; // r13d
  struct tagWND *v7; // rbp
  struct tagWND *v8; // rdi
  char v9; // al
  struct tagWND *v10; // rcx
  bool v11; // zf
  struct tagWND *v12; // r12
  struct tagWND *v13; // rsi
  __int64 v14; // r14
  struct tagWND *i; // rsi
  __int64 v16; // r14

  v3 = *((_QWORD *)j + 13);
  LastTopMostWindowNoIME = 0LL;
  v6 = (int)a2;
  v7 = j;
  if ( !v3 )
    return;
  v8 = *(struct tagWND **)(v3 + 112);
  if ( (_DWORD)a2 )
    goto LABEL_12;
  LastTopMostWindowNoIME = GetLastTopMostWindowNoIME(j);
  if ( !a3 )
    goto LABEL_11;
  v9 = 0;
  v10 = LastTopMostWindowNoIME;
  if ( LastTopMostWindowNoIME )
  {
    while ( 1 )
    {
      a2 = (struct tagWND *)*((_QWORD *)v10 + 11);
      LastTopMostWindowNoIME = v10;
      if ( a2 == a3 )
        break;
      v11 = v10 == v7;
      v10 = (struct tagWND *)*((_QWORD *)v10 + 11);
      if ( v11 )
        v9 = 1;
      if ( !a2 )
        return;
    }
    if ( !v9 )
    {
LABEL_11:
      j = *(struct tagWND **)(*((_QWORD *)v7 + 15) + 40LL);
      if ( (*((_BYTE *)j + 20) & 0x20) != 0 )
      {
        for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
        {
          if ( i == *((struct tagWND **)v7 + 15) )
            break;
          v16 = *((_QWORD *)i + 17);
          if ( (*(_BYTE *)(*(_QWORD *)(v16 + 8) + 10LL) & 1) == 0 )
          {
            j = *(struct tagWND **)(W32GetUserSessionState(j, a2) + 19904);
            a2 = (struct tagWND *)*((unsigned __int16 *)j + 449);
            if ( **(_WORD **)(v16 + 8) != (_WORD)a2 )
              LastTopMostWindowNoIME = i;
          }
        }
      }
LABEL_12:
      v12 = LastTopMostWindowNoIME;
LABEL_13:
      if ( v8 )
      {
        while ( 1 )
        {
          v13 = (struct tagWND *)*((_QWORD *)v8 + 11);
          if ( *((_QWORD *)v8 + 2) == *((_QWORD *)v7 + 2) )
          {
            v14 = *((_QWORD *)v8 + 17);
            if ( (*(_BYTE *)(*(_QWORD *)(v14 + 8) + 10LL) & 1) != 0
              || (j = *(struct tagWND **)(W32GetUserSessionState(j, a2) + 19904),
                  a2 = (struct tagWND *)*((unsigned __int16 *)j + 449),
                  **(_WORD **)(v14 + 8) == (_WORD)a2) )
            {
              if ( v8 != LastTopMostWindowNoIME )
              {
                for ( j = v8; j; j = (struct tagWND *)*((_QWORD *)j + 15) )
                {
                  if ( j == v7
                    && (!LastTopMostWindowNoIME || *((_QWORD *)LastTopMostWindowNoIME + 13) == *((_QWORD *)v8 + 13))
                    && *((_QWORD *)v8 + 13) == v3 )
                  {
                    UnlinkWindow(v8);
                    SetOrClrWF(v6 != 0, v8, 0x808u, 1);
                    LinkWindow(v8);
                    LastTopMostWindowNoIME = v8;
                    break;
                  }
                }
              }
            }
          }
          v8 = v13;
          if ( !v13 )
            break;
          if ( v13 == v12 )
          {
            v8 = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
            goto LABEL_13;
          }
        }
      }
    }
  }
}
