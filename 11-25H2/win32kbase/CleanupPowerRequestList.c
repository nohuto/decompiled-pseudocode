/*
 * XREFs of CleanupPowerRequestList @ 0x140155E20
 * Callers:
 *     CleanupResources @ 0x1401B9768 (CleanupResources.c)
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1400E9540 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401AFA40 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1401AFAB8 (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 */

void __fastcall CleanupPowerRequestList(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagPOWERREQUEST *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 2732) = 1;
  if ( *(_QWORD *)(W32GetUserSessionState(v3, v2) + 520) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 520));
    *(_QWORD *)(W32GetUserSessionState(v8, v7) + 520) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4) + 512) )
  {
    while ( 1 )
    {
      v9 = UnqueuePowerRequest();
      if ( !v9 )
        break;
      CancelPowerRequest(v9);
    }
    v12 = W32GetUserSessionState(v11, v10);
    CleanupPowerWatchdog((void **)(v12 + 544));
    v15 = W32GetUserSessionState(v14, v13);
    CleanupPowerWatchdog((void **)(v15 + 552));
  }
}
