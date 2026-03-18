/*
 * XREFs of RIMArmWatchDog @ 0x1400EF8EC
 * Callers:
 *     RIMWatchDog @ 0x140033480 (RIMWatchDog.c)
 * Callees:
 *     <none>
 */

char __fastcall RIMArmWatchDog(__int64 a1, __int64 a2)
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
    if ( !*(_BYTE *)(UserSessionState + 170) )
    {
      *(_BYTE *)(W32GetUserSessionState(v6, v5) + 170) = 1;
      v9 = W32GetUserSessionState(v8, v7);
      LOBYTE(UserSessionState) = KeSetTimer(*(PKTIMER *)(v9 + 176), (LARGE_INTEGER)-50000000LL, 0LL);
    }
  }
  return UserSessionState;
}
