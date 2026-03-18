/*
 * XREFs of NtRIMSetDeadzoneRotation @ 0x1401D8500
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 */

__int64 __fastcall NtRIMSetDeadzoneRotation(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = a1;
  if ( !IsInputThread(a1, a2) )
    return 5LL;
  UserSessionState = W32GetUserSessionState(v4, v3);
  RIMLockExclusive(UserSessionState + 40);
  *(_DWORD *)(W32GetUserSessionState(v8, v7) + 272) = v2;
  v11 = W32GetUserSessionState(v10, v9);
  RIMUnlockExclusive(v11 + 40);
  return 0LL;
}
