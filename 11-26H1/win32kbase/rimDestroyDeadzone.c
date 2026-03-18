/*
 * XREFs of rimDestroyDeadzone @ 0x14017F5E4
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x14012E9F4 (RIMReleasePointerDeviceInfo.c)
 *     RIMInitializeDeadzone @ 0x14017F380 (RIMInitializeDeadzone.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x14017F750 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void __fastcall rimDestroyDeadzone(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 40);
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 256) )
  {
    v10 = W32GetUserSessionState(v8, v7, v9);
    RIMDeadzone::Release(*(RIMDeadzone **)(v10 + 256));
    v8 = *(_QWORD *)(W32GetUserSessionState(v12, v11, v13) + 256);
    if ( !*(_DWORD *)(v8 + 4) )
    {
      v14 = W32GetUserSessionState(v8, v7, v9);
      GreDeleteFastMutex(*(char **)(v14 + 256), v15, v16, v17);
      *(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 256) = 0LL;
    }
  }
  v21 = W32GetUserSessionState(v8, v7, v9);
  RIMUnlockExclusive(v21 + 40);
}
