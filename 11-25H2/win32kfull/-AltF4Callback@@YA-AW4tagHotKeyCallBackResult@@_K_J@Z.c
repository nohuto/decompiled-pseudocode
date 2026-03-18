/*
 * XREFs of ?AltF4Callback@@YA?AW4tagHotKeyCallBackResult@@_K_J@Z @ 0x140275700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14012FB38 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall AltF4Callback(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct tagWND *v9; // rdi
  __int64 *v11; // rsi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v13; // rdx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopLevelWindow; // rax
  __int64 v16; // rcx
  __int64 *v17; // r8

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = 0;
  if ( !_GetShellWindow(*(struct tagDESKTOP **)(UserSessionState + 19144)) )
    return 1LL;
  v8 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888);
  if ( !v8 )
    return 1LL;
  v9 = *(struct tagWND **)(v8 + 128);
  if ( !v9 )
    return 1LL;
  if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 66092) )
  {
    LOBYTE(v5) = *(_DWORD *)(*((_QWORD *)v9 + 5) + 236LL) == 17;
    return (unsigned int)(v5 + 1);
  }
  v11 = 0LL;
  CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v9);
  if ( CompositionInputWindowUIOwner )
    v9 = CompositionInputWindowUIOwner;
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v9, v13);
  if ( TopLevelHostForComponent )
    v9 = TopLevelHostForComponent;
  TopLevelWindow = GetTopLevelWindow((__int64)v9);
  if ( !TopLevelWindow )
    return 1LL;
  do
  {
    v16 = *(_QWORD *)(TopLevelWindow + 40);
    v17 = (__int64 *)TopLevelWindow;
    TopLevelWindow = *(_QWORD *)(TopLevelWindow + 120);
    if ( *(char *)(v16 + 232) >= 0 )
      v17 = v11;
    v11 = v17;
  }
  while ( TopLevelWindow );
  if ( !v17 )
    return 1LL;
  PostIAMShellHookMessage(0x20u, *v17);
  return 2LL;
}
