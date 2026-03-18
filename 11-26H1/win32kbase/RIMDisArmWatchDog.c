/*
 * XREFs of RIMDisArmWatchDog @ 0x14005AA08
 * Callers:
 *     RIMWatchDog @ 0x14005A160 (RIMWatchDog.c)
 * Callees:
 *     <none>
 */

char __fastcall RIMDisArmWatchDog(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(UserSessionState + 176) )
  {
    UserSessionState = W32GetUserSessionState(v5, v4, v6);
    if ( *(_BYTE *)(UserSessionState + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v8, v7, v9) + 170) = 0;
      v13 = W32GetUserSessionState(v11, v10, v12);
      LOBYTE(UserSessionState) = KeCancelTimer(*(PKTIMER *)(v13 + 176));
    }
  }
  return UserSessionState;
}
