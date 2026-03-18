/*
 * XREFs of RIMWatchDogTimerInit @ 0x1401D6D60
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 88);
  v6 = W32GetUserSessionState(v5, v4);
  if ( a1 )
  {
    *(_QWORD *)(v6 + 176) = a1;
  }
  else
  {
    *(_QWORD *)(v6 + 176) = 0LL;
    *(_BYTE *)(W32GetUserSessionState(v8, v7) + 170) = 0;
  }
  v9 = W32GetUserSessionState(v8, v7);
  RIMUnlockExclusive(v9 + 88);
}
