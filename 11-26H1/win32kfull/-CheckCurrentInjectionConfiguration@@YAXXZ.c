/*
 * XREFs of ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x14025A210
 * Callers:
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
 *     NtUserInitializeTouchInjection @ 0x1402B66D0 (NtUserInitializeTouchInjection.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x14029DD68 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 */

void __fastcall CheckCurrentInjectionConfiguration(__int64 a1)
{
  int v1; // edi
  struct tagPROCESSINFO *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = 0;
  v2 = (struct tagPROCESSINFO *)*((_QWORD *)PtiCurrent(a1) + 57);
  v3 = *((_QWORD *)v2 + 110);
  if ( *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19304) == 1 || v3 && *(_DWORD *)(v3 + 52) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 19304) )
    {
      v1 = 1;
      *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19304) = 0;
    }
    RealizePendingRecreateTouchInjectionDevices(v2, v1);
  }
}
