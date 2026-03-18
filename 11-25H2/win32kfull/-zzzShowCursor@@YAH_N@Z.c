/*
 * XREFs of ?zzzShowCursor@@YAH_N@Z @ 0x14005F7A8
 * Callers:
 *     NtUserShowCursor @ 0x14005EF90 (NtUserShowCursor.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxDragObject @ 0x1402E1078 (xxxDragObject.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x14005FD1C (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall zzzShowCursor(char a1)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  unsigned int v13; // ebx

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v3 = *((_QWORD *)CurrentLogicalCursorThread + 59);
  UserSessionState = W32GetUserSessionState(v5, v4);
  ++*(_DWORD *)(UserSessionState + 70600);
  v8 = *((_DWORD *)CurrentLogicalCursorThread + 198);
  v9 = *((_QWORD *)CurrentLogicalCursorThread + 59);
  if ( a1 )
  {
    *((_DWORD *)CurrentLogicalCursorThread + 198) = v8 + 1;
    ++*(_DWORD *)(v9 + 408);
    if ( v3 != *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19176) )
      goto LABEL_6;
    v12 = *(_DWORD *)(v3 + 408) == 0;
  }
  else
  {
    *((_DWORD *)CurrentLogicalCursorThread + 198) = v8 - 1;
    --*(_DWORD *)(v9 + 408);
    if ( v3 != *(_QWORD *)(W32GetUserSessionState(v9, v7) + 19176) )
      goto LABEL_6;
    v12 = *(_DWORD *)(v3 + 408) == -1;
  }
  if ( v12 )
    zzzUpdateCursorImage(v11, v10);
LABEL_6:
  v13 = *(_DWORD *)(v3 + 408);
  zzzEndDeferWinEventNotify();
  return v13;
}
