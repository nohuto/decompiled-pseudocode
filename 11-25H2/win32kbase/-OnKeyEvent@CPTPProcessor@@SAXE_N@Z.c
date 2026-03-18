/*
 * XREFs of ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x140107CF4
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?IsOurKey@CPTPProcessor@@CA_NE_N@Z @ 0x140107DF4 (-IsOurKey@CPTPProcessor@@CA_NE_N@Z.c)
 *     ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x140107E88 (-OnKeyPress@CPTPProcessor@@CAX_N@Z.c)
 */

void __fastcall CPTPProcessor::OnKeyEvent(__int64 a1, _BOOL8 a2)
{
  bool v2; // si
  unsigned __int8 v3; // bp
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 UserSessionState; // rax

  v2 = a2;
  v3 = a1;
  v4 = W32GetUserSessionState(a1, a2) + 3296;
  _InterlockedExchange64((volatile __int64 *)(v4 + 16), KeQueryPerformanceCounter(0LL).QuadPart);
  if ( (*(_BYTE *)(W32GetUserSessionState(v6, v5) + 14340) & 4) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v8, v7) + 14340) & 0x10) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v8, v7) + 14358) & 0x40) != 0
    || (*(_BYTE *)(W32GetUserSessionState(v8, v7) + 14359) & 1) != 0 )
  {
    if ( !*(_DWORD *)(v4 + 28) )
    {
      _InterlockedExchange64((volatile __int64 *)v4, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v4 + 8), 0LL);
      UserSessionState = W32GetUserSessionState(v8, v7);
      _InterlockedExchange64((volatile __int64 *)(UserSessionState + 16736), 0LL);
      _InterlockedExchange64((volatile __int64 *)(UserSessionState + 16744), 0LL);
    }
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( CPTPProcessor::IsOurKey(v3, v2) )
      CPTPProcessor::OnKeyPress(v2);
  }
  *(_DWORD *)(v4 + 28) = v9;
}
