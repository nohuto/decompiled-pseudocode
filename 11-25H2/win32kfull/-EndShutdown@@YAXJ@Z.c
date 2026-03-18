/*
 * XREFs of ?EndShutdown@@YAXJ@Z @ 0x1402DF8D4
 * Callers:
 *     xxxSetInformationThread @ 0x140114240 (xxxSetInformationThread.c)
 * Callees:
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14020F980 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1402294F8 (-NotifyLogon@@YAHK@Z.c)
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

  v2 = a1;
  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63512);
  *(_QWORD *)(W32GetUserSessionState(v5, v4) + 63488) = 0LL;
  *(_DWORD *)(W32GetUserSessionState(v7, v6) + 63456) = 0;
  *(_DWORD *)(v3 + 64) &= ~8u;
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( v2 < 0 )
  {
    v16 = *(_QWORD *)(UserSessionState + 19872);
    *(_DWORD *)(v16 + 2236) &= ~1u;
    v17 = *(unsigned int *)(W32GetUserSessionState(v16, v11) + 63480);
    *(_DWORD *)(v3 + 64) = v17 | *(_DWORD *)(v3 + 64) & 0xFFFFFFFD;
    v19 = W32GetUserSessionState(v17, v18);
    NotifyLogon(*(_DWORD *)(v19 + 63484) | 0x80);
  }
  else
  {
    NotifyLogon(*(_DWORD *)(UserSessionState + 63484));
    if ( (*(_DWORD *)(W32GetUserSessionState(v13, v12) + 63484) & 0x40580B) != 0
      && !*(_WORD *)(W32GetUserSessionState(v15, v14) + 68752) )
    {
      PTPTelemetry::Usage::HandlePTPTelemetry();
    }
  }
  v20 = W32GetUserSessionState(v15, v14);
  DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD **)(v20 + 63512));
}
