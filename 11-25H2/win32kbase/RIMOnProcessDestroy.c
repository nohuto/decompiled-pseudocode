/*
 * XREFs of RIMOnProcessDestroy @ 0x14010F430
 * Callers:
 *     DestroyProcessInfo @ 0x140162224 (DestroyProcessInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x14010F4A0 (RIMUnregisterCurrentProcessForInput.c)
 */

__int64 __fastcall RIMOnProcessDestroy(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v6 = (_QWORD *)(W32GetUserSessionState(v5, v4) + 120);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    if ( i[2] == a1 )
      *((_BYTE *)i - 6) = 1;
  }
  v9 = W32GetUserSessionState(v7, i);
  RIMUnlockExclusive(v9 + 56);
  return RIMUnregisterCurrentProcessForInput();
}
