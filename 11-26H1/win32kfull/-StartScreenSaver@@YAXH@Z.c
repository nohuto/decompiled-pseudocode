/*
 * XREFs of ?StartScreenSaver@@YAXH@Z @ 0x14019B2E4
 * Callers:
 *     PsW32ScreenSaver_Show @ 0x1402D10B0 (PsW32ScreenSaver_Show.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x14019B840 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
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
  BOOL v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rax

  v2 = (int)a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 62816) )
  {
    v5 = *(unsigned int *)(W32GetUserSessionState(v4, v3) + 2960);
    if ( (v5 & 1) == 0 )
    {
      v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 3056);
      v10 = *(CInputGlobals **)(W32GetUserSessionState(v9, v8) + 3056);
      GlobalTickCount = CInputGlobals::GetGlobalTickCount(v7, 1LL);
      if ( GlobalTickCount != CInputGlobals::GetLastInputTime(v10) )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v13, v12) + 68744)
          || *(_DWORD *)(W32GetUserSessionState(v15, v14) + 2748) )
        {
          if ( (_DWORD)v2 && (**(_DWORD **)(W32GetUserSessionState(v15, v14) + 19904) & 0x200) == 0 )
            return;
          v16 = v2;
        }
        else
        {
          v16 = 2LL;
        }
        if ( (int)PostWinlogonMessage(1024LL, v16) >= 0 )
        {
          UserSessionState = W32GetUserSessionState(v18, v17);
          CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(UserSessionState + 3056), 1LL);
          v20 = IsCurrentSessionServiceSession();
          v23 = (_DWORD *)W32GetUserSessionState(v22, v21);
          v23[15693] = 3;
          v23[15683] = *(_DWORD *)((char *)v23 + (-(__int64)v20 & 0xFFFFFFFFFFFFFFF0uLL) + 62768);
          if ( !v20 )
          {
            v23[15674] |= 2u;
            if ( (v23[15674] & 1) != 0 )
              ConfigureRITDelayableTimers(2LL);
          }
        }
      }
    }
  }
}
