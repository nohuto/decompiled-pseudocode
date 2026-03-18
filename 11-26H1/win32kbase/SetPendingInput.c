/*
 * XREFs of SetPendingInput @ 0x140183980
 * Callers:
 *     UserPowerInfoCallout @ 0x1401A8D3C (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetPendingInput(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 512));
  if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5, v7) + 2692) )
  {
    *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 2696) = a1;
    *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 2692) = 1;
  }
  v14 = W32GetUserSessionState(v9, v8, v10);
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v14 + 512));
}
