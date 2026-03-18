/*
 * XREFs of ?xxxDW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14017E740
 * Callers:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x14017E888 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017E968 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

void __fastcall xxxDW_DestroyIMEWindowIfRequired(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // rax
  int CanDestroyDefIME; // ebx
  struct tagWND *v15; // rcx

  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872) & 4) == 0 )
    return;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 132, 0, 0) & 1) != 0 )
    return;
  if ( !*((_QWORD *)a2 + 103) )
    return;
  v8 = *((_QWORD *)a1 + 17);
  if ( (*(_BYTE *)(*(_QWORD *)(v8 + 8) + 10LL) & 1) != 0 )
    return;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v11 = *(_WORD **)(v8 + 8);
  if ( *v11 == *(_WORD *)(*(_QWORD *)(UserSessionState + 19872) + 898LL) || a3 )
    return;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    if ( !*((_QWORD *)a1 + 13) || !ImeCanDestroyDefIMEforChild(*((struct tagWND **)a2 + 103), a1) )
      goto LABEL_10;
    v15 = (struct tagWND *)*((_QWORD *)a2 + 103);
LABEL_15:
    xxxDestroyWindow(v15);
    goto LABEL_10;
  }
  v13 = W32GetUserSessionState(v11, v10);
  ++*(_DWORD *)(v13 + 70600);
  CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND **)a2 + 103), a1);
  zzzEndDeferWinEventNotify();
  if ( CanDestroyDefIME )
  {
    v15 = (struct tagWND *)*((_QWORD *)a2 + 103);
    if ( v15 )
      goto LABEL_15;
  }
LABEL_10:
  v12 = (struct tagWND *)*((_QWORD *)a2 + 103);
  if ( v12 && *((_DWORD *)a2 + 238) == 1 && (*((_DWORD *)a1 + 95) & 0x10000000) != 0 )
    xxxDestroyWindow(v12);
}
