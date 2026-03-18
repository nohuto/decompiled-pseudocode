/*
 * XREFs of RIMDisArmWatchDog @ 0x140033408
 * Callers:
 *     RIMWatchDog @ 0x140033480 (RIMWatchDog.c)
 * Callees:
 *     <none>
 */

char __fastcall RIMDisArmWatchDog(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 176) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    if ( *(_BYTE *)(UserSessionState + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v6, v5) + 170) = 0;
      v9 = W32GetUserSessionState(v8, v7);
      LOBYTE(UserSessionState) = KeCancelTimer(*(PKTIMER *)(v9 + 176));
    }
  }
  return UserSessionState;
}
