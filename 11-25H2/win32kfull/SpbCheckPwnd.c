/*
 * XREFs of SpbCheckPwnd @ 0x140155C10
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1401558AC (zzzLockWindowUpdate2.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401DB0A4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     SpbCheckRect @ 0x1401566D4 (SpbCheckRect.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x14026EE9C (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1, __int64 a2)
{
  struct tagSPB *i; // rbx
  struct tagSPB *v4; // rbp
  struct tagWND *j; // rdi
  __int64 result; // rax

LABEL_1:
  a2 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  for ( i = *(struct tagSPB **)(a2 + 40); i; i = v4 )
  {
    v4 = *(struct tagSPB **)i;
    for ( j = (struct tagWND *)*((_QWORD *)i + 1); j; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      if ( a1 == j )
        FreeSpb(i);
    }
    if ( !IsSpbPresentOrNull(v4) )
      goto LABEL_1;
  }
  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(*(_QWORD *)(result + 56968) + 40LL) )
    return SpbCheckRect(a1, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), 0);
  return result;
}
