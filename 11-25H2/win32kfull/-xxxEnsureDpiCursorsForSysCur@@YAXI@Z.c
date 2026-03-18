/*
 * XREFs of ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1401D180C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1401D16C0 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 * Callees:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x14004E6E0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 */

void __fastcall xxxEnsureDpiCursorsForSysCur(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _UNICODE_STRING *v3; // rdi
  int v4; // ebx
  struct tagCURSOR *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = 552LL * (unsigned int)a1;
  v3 = 0LL;
  v4 = 33024;
  v5 = *(struct tagCURSOR **)(W32GetUserSessionState(a1, a2) + v2 + 21880);
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + v2 + 21896) )
  {
    v3 = (struct _UNICODE_STRING *)(W32GetUserSessionState(v9, v8) + v2 + 21888);
    if ( ((unsigned __int64)v3->Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
      v4 = 33040;
  }
  xxxEnsureDpiCursors(v5, v3, v4);
}
