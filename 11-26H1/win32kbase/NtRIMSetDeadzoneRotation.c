/*
 * XREFs of NtRIMSetDeadzoneRotation @ 0x1401FF5B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 */

__int64 __fastcall NtRIMSetDeadzoneRotation(int a1, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 UserSessionState; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax

  if ( !IsInputThread(a1, a2, a3) )
    return 3221225506LL;
  UserSessionState = W32GetUserSessionState(v5, v4, v6);
  RIMLockExclusive(UserSessionState + 40);
  *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 272) = a1;
  v15 = W32GetUserSessionState(v13, v12, v14);
  RIMUnlockExclusive(v15 + 40);
  return 0LL;
}
