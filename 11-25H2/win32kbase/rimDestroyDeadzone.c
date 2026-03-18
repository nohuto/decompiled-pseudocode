/*
 * XREFs of rimDestroyDeadzone @ 0x140127A78
 * Callers:
 *     RIMInitializeDeadzone @ 0x140127470 (RIMInitializeDeadzone.c)
 *     RIMReleasePointerDeviceInfo @ 0x1401E45C0 (RIMReleasePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x140127BE0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 */

void __fastcall rimDestroyDeadzone(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 40);
  if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 256) )
  {
    v7 = W32GetUserSessionState(v6, v5);
    RIMDeadzone::Release(*(RIMDeadzone **)(v7 + 256));
    v6 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 256);
    if ( !*(_DWORD *)(v6 + 4) )
    {
      v10 = W32GetUserSessionState(v6, v5);
      GreDeleteFastMutex(*(char **)(v10 + 256));
      *(_QWORD *)(W32GetUserSessionState(v12, v11) + 256) = 0LL;
    }
  }
  v13 = W32GetUserSessionState(v6, v5);
  RIMUnlockExclusive(v13 + 40);
}
