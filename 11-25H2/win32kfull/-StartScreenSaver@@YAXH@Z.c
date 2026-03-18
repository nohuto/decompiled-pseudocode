/*
 * XREFs of ?StartScreenSaver@@YAXH@Z @ 0x14026CCBC
 * Callers:
 *     PsW32ScreenSaver_Show @ 0x1402B6BC0 (PsW32ScreenSaver_Show.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     SetTimerCoalescingTolerance @ 0x1400D7B20 (SetTimerCoalescingTolerance.c)
 */

void __fastcall StartScreenSaver(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  CInputGlobals *v10; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 UserSessionState; // rax

  v2 = (int)a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 62824) )
  {
    v5 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 2960);
    if ( (v5 & 1) == 0 )
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 3056);
      v10 = *(CInputGlobals **)(W32GetUserSessionState(v9, v8) + 3056);
      GlobalTickCount = CInputGlobals::GetGlobalTickCount(v7, 1LL);
      if ( GlobalTickCount != CInputGlobals::GetLastInputTime(v10) )
      {
        if ( !*(_WORD *)(W32GetUserSessionState(v13, v12) + 68752)
          && !*(_DWORD *)(W32GetUserSessionState(v15, v14) + 2752) )
        {
          v16 = 2LL;
          goto LABEL_10;
        }
        if ( !(_DWORD)v2 || (**(_DWORD **)(W32GetUserSessionState(v15, v14) + 19872) & 0x200) != 0 )
        {
          v16 = v2;
LABEL_10:
          if ( (int)PostWinlogonMessage(1024LL, v16) >= 0 )
          {
            UserSessionState = W32GetUserSessionState(v18, v17);
            CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(UserSessionState + 3056), 1LL);
            SetTimerCoalescingTolerance(3);
          }
        }
      }
    }
  }
}
