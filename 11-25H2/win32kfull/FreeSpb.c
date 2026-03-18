/*
 * XREFs of FreeSpb @ 0x140156450
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     SpbCheckPwnd @ 0x140155C10 (SpbCheckPwnd.c)
 *     FreeAllSpbs @ 0x1401563F0 (FreeAllSpbs.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x140156758 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x140234300 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     RestoreSpb @ 0x1402B0E30 (RestoreSpb.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x14001DFD0 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1402B0CD8 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x140332A34 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(char *a1, __int64 a2)
{
  char v2; // bp
  char v3; // si
  __int64 v5; // rcx
  __int64 v6; // rcx
  char **v7; // rcx
  char *i; // rdx
  struct tagWND **v9; // rbx
  struct tagWND *v10; // rdx
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *j; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 UserSessionState; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  struct tagWND *v30; // rdx

  if ( !a1 )
    return;
  v2 = 0;
  v3 = 0;
  if ( (*((_DWORD *)a1 + 12) & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 48LL)) )
    {
      v2 = 1;
    }
    else
    {
      v27 = *((_QWORD *)a1 + 7);
      v28 = W32GetUserSessionState(v26, a2);
      GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(v28 + 56968) + 48LL), 2LL, v27, 0LL);
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( v5 )
      GreDeleteObject(v5);
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( v6 )
    GreDeleteObject(v6);
  v7 = (char **)(*(_QWORD *)(W32GetUserSessionState(v6, a2) + 56968) + 40LL);
  for ( i = *v7; i != a1; i = *(char **)i )
    v7 = (char **)i;
  v9 = (struct tagWND **)(a1 + 8);
  *v7 = *(char **)a1;
  v10 = (struct tagWND *)*((_QWORD *)a1 + 1);
  if ( v10 )
  {
    SetOrClrWF(0, v10, 0x80u, 1);
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
      v3 = 1;
    else
      HMAssignmentUnlock(a1 + 8);
  }
  if ( v2 )
  {
    v29 = *((_QWORD *)a1 + 7);
    if ( !v3 )
    {
      v30 = 0LL;
      goto LABEL_29;
    }
LABEL_28:
    v30 = *v9;
LABEL_29:
    PostSpbApc(*((struct _KAPC **)a1 + 8), v30, v29);
    if ( v3 )
      *v9 = 0LL;
    *((_QWORD *)a1 + 8) = 0LL;
    goto LABEL_13;
  }
  if ( v3 )
  {
    v29 = 0LL;
    goto LABEL_28;
  }
LABEL_13:
  v11 = (void *)*((_QWORD *)a1 + 8);
  if ( v11 )
    Win32FreePool(v11);
  Win32FreePool(a1);
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 56968);
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v16 = W32GetUserSessionState(v15, v14);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v16 + 56968) + 48LL));
    v20 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 56968);
    for ( j = *(_QWORD **)(v20 + 24); ; j = (_QWORD *)*j )
    {
      v23 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 56968) + 24LL;
      if ( j == (_QWORD *)v23 )
        break;
      GreGetBounds(j[2], 0LL, 2LL);
    }
    v24 = W32GetUserSessionState(v23, v22);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v24 + 56968) + 48LL));
  }
}
