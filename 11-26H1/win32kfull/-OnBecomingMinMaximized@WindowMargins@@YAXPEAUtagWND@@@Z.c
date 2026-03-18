/*
 * XREFs of ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x140161F90
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z @ 0x14004ED4C (-GetOrCreate@CWindowMarginProp@WindowMargins@@SAPEAV12@PEAUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1401620BC (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 */

void __fastcall WindowMargins::OnBecomingMinMaximized(WindowMargins *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  struct WindowMargins::CWindowMarginProp *v4; // rax
  __int64 v5; // rdx
  char v6; // r14
  char v7; // bp
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  if ( IsTopLevelWindow((__int64)this) )
  {
    v4 = WindowMargins::CWindowMarginProp::GetOrCreate(this, v3);
    if ( v4 )
    {
      if ( !*((_BYTE *)v4 + 24) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100000) == 0
          || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v6 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
        {
          v7 = 0;
        }
        if ( v6 || v7 )
        {
          v8 = "Maximized";
          v9 = *(_QWORD *)this;
          if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) == 0 )
            v8 = "Minimized";
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
          LOBYTE(v11) = v7;
          LOBYTE(v12) = v6;
          WPP_RECORDER_AND_TRACE_SF_qs(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v12,
            v11,
            *(_QWORD *)(UserSessionState + 69152),
            5,
            21,
            30,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            v9,
            (__int64)v8);
        }
        WindowMargins::_anonymous_namespace_::GetWindowMargins(this, 0LL);
      }
    }
  }
}
