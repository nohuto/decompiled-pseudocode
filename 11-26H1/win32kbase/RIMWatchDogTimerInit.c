/*
 * XREFs of RIMWatchDogTimerInit @ 0x1401FE120
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 */

void __fastcall RIMWatchDogTimerInit(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 88);
  v8 = W32GetUserSessionState(v6, v5, v7);
  if ( a1 )
  {
    *(_QWORD *)(v8 + 176) = a1;
  }
  else
  {
    *(_QWORD *)(v8 + 176) = 0LL;
    *(_BYTE *)(W32GetUserSessionState(v10, v9, v11) + 170) = 0;
  }
  v12 = W32GetUserSessionState(v10, v9, v11);
  RIMUnlockExclusive(v12 + 88);
}
