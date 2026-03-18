/*
 * XREFs of rimRemoveFromObTrackList @ 0x14012A328
 * Callers:
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1401E6DF8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 */

void __fastcall rimRemoveFromObTrackList(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v5 = (_QWORD *)(a1 + 16);
  v6 = *v5;
  if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  v5[1] = v5;
  *v5 = v5;
  v8 = W32GetUserSessionState(v6, v4);
  RIMUnlockExclusive(v8 + 56);
}
