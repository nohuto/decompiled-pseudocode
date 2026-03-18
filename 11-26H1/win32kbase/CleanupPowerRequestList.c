/*
 * XREFs of CleanupPowerRequestList @ 0x140193020
 * Callers:
 *     CleanupResources @ 0x1401DFE50 (CleanupResources.c)
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1401122D0 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401D53E0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1401D54D4 (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 */

void __fastcall CleanupPowerRequestList(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  struct tagPOWERREQUEST *v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax

  *(_DWORD *)(W32GetUserSessionState(a1, a2, a3) + 2732) = 1;
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3, v5) + 520) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6, v8);
    ObfDereferenceObject(*(PVOID *)(UserSessionState + 520));
    *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 520) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v7, v6, v8) + 512) )
  {
    while ( 1 )
    {
      v16 = UnqueuePowerRequest(v14, v13, v15);
      if ( !v16 )
        break;
      CancelPowerRequest(v16);
    }
    v20 = W32GetUserSessionState(v18, v17, v19);
    CleanupPowerWatchdog((void **)(v20 + 544));
    v24 = W32GetUserSessionState(v22, v21, v23);
    CleanupPowerWatchdog((void **)(v24 + 552));
  }
}
