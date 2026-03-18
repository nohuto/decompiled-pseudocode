/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x14028D400
 * Callers:
 *     xxxSetInformationThread @ 0x1400569F0 (xxxSetInformationThread.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x1401FF96C (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x140264314 (-NotifyLogon@@YAHK@Z.c)
 */

void __fastcall EndShutdown(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx

  v2 = a1;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63504);
  *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63496) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v7, v6) + 63464) = 0;
  *(_DWORD *)(v3 + 32) &= ~8u;
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( v2 < 0 )
  {
    v16 = *(_QWORD *)(UserSessionState + 19904);
    *(_DWORD *)(v16 + 2236) &= ~1u;
    v17 = *(unsigned int *)(W32GetUserSessionState(v16, v11) + 63488);
    *(_DWORD *)(v3 + 32) = v17 | *(_DWORD *)(v3 + 32) & 0xFFFFFFFD;
    v19 = W32GetUserSessionState(v17, v18);
    NotifyLogon(*(_DWORD *)(v19 + 63492) | 0x80);
  }
  else
  {
    NotifyLogon(*(_DWORD *)(UserSessionState + 63492));
    if ( (*(_DWORD *)(W32GetUserSessionState(v13, v12) + 63492) & 0x2040580B) != 0
      && !*(_WORD *)(W32GetUserSessionState(v15, v14) + 68744) )
    {
      PTPTelemetry::Usage::HandlePTPTelemetry();
    }
  }
  v20 = W32GetUserSessionState(v15, v14);
  DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD *)(v20 + 63504), v21);
}
