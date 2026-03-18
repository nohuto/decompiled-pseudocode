/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x14021FAE0
 * Callers:
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x14029A1D0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x14027A704 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void __fastcall CheckCurrentInjectionConfiguration(__int64 a1, __int64 a2)
{
  int v2; // edi
  struct tagPROCESSINFO *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = 0;
  v3 = (struct tagPROCESSINFO *)*((_QWORD *)PtiCurrent(a1, a2) + 58);
  v4 = *((_QWORD *)v3 + 110);
  if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 19272) == 1 || v4 && *(_DWORD *)(v4 + 52) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19272) )
    {
      v2 = 1;
      *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19272) = 0;
    }
    RealizePendingRecreateTouchInjectionDevices(v3, v2);
  }
}
