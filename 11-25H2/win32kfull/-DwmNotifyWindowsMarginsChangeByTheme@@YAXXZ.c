/*
 * XREFs of ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018FD7C
 * Callers:
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402919EC (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     IsMotherDesktopWindow @ 0x14018FFC0 (IsMotherDesktopWindow.c)
 */

void __fastcall DwmNotifyWindowsMarginsChangeByTheme(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  struct tagWND *v13; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(_QWORD *)(UserSessionState + 19888);
  v6 = v3 + 32LL * *(unsigned int *)(W32GetUserSessionState(v5, v4) + 19816);
  v9 = W32GetUserSessionState(v8, v7);
  v10 = *(_QWORD *)(UserSessionState + 19888);
  v11 = *(__int64 **)(v9 + 19832);
  while ( v10 <= v6 )
  {
    v12 = *v11;
    if ( *v11
      && *(_BYTE *)(v10 + 24) == 1
      && (*(_BYTE *)(v10 + 25) & 1) == 0
      && !(unsigned int)IsMotherDesktopWindow(*v11)
      && *(_QWORD *)(v12 + 104) != GetMessageWindow(v12) )
    {
      WindowMargins::CheckForChanges(v13, 2LL);
    }
    v10 += 32LL;
    v11 += 5;
  }
}
