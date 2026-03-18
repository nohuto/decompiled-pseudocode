/*
 * XREFs of ?HandleAltF4@@YAHPEBUtagHOTKEY@@@Z @ 0x14024614C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall HandleAltF4(const struct tagHOTKEY *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  __int64 *v12; // rsi
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 v14; // rdx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 TopLevelWindow; // rax
  __int64 v17; // rcx
  __int64 *v18; // r8

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19144);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL) == v3 )
  {
    v7 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888) )
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18888);
      v10 = *(struct tagWND **)(v9 + 128);
      if ( v10 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 66092) )
        {
          LOBYTE(v7) = *(_DWORD *)(*((_QWORD *)v10 + 5) + 236LL) == 17;
          return v7;
        }
        v12 = 0LL;
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v10);
        if ( CompositionInputWindowUIOwner )
          v10 = CompositionInputWindowUIOwner;
        TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(v10, v14);
        if ( TopLevelHostForComponent )
          v10 = TopLevelHostForComponent;
        TopLevelWindow = GetTopLevelWindow((__int64)v10);
        if ( TopLevelWindow )
        {
          do
          {
            v17 = *(_QWORD *)(TopLevelWindow + 40);
            v18 = (__int64 *)TopLevelWindow;
            TopLevelWindow = *(_QWORD *)(TopLevelWindow + 120);
            if ( *(char *)(v17 + 232) >= 0 )
              v18 = v12;
            v12 = v18;
          }
          while ( TopLevelWindow );
          if ( v18 )
          {
            PostIAMShellHookMessage(0x20u, *v18);
            v7 = 1;
            LastWokenThread::Set(*(_QWORD *)a1, 1LL, 0LL);
            return v7;
          }
        }
      }
    }
  }
  return 0LL;
}
