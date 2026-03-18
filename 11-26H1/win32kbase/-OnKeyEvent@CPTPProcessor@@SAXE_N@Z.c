/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140147894
 * Callers:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x1401479B0 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x140147A44 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(int a1, BOOL a2, int a3)
{
  bool v3; // bp
  unsigned __int8 v4; // r14
  __int64 UserSessionState; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // esi
  __int64 v13; // rax

  v3 = a2;
  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  _InterlockedExchange64((volatile __int64 *)(UserSessionState + 3312), KeQueryPerformanceCounter(0LL).QuadPart);
  v12 = 1;
  if ( (*(_BYTE *)(W32GetUserSessionState(v7, v6, v8) + 14332) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v10, v9, v11) + 14332) & 0x10) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v10, v9, v11) + 14350) & 0x40) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v10, v9, v11) + 14351) & 1) != 0 )
  {
    if ( !*(_DWORD *)(UserSessionState + 3324) )
    {
      _InterlockedExchange64((volatile __int64 *)(UserSessionState + 3296), 0LL);
      _InterlockedExchange64((volatile __int64 *)(UserSessionState + 3304), 0LL);
      v13 = W32GetUserSessionState(v10, v9, v11);
      _InterlockedExchange64((volatile __int64 *)(v13 + 16728), 0LL);
      _InterlockedExchange64((volatile __int64 *)(v13 + 16736), 0LL);
    }
  }
  else
  {
    v12 = 0;
    if ( CPTPProcessor::IsOurKey(v4, v3) )
      CPTPProcessor::OnKeyPress(v3);
  }
  *(_DWORD *)(UserSessionState + 3324) = v12;
}
