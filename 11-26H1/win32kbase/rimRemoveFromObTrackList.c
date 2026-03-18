/*
 * XREFs of rimRemoveFromObTrackList @ 0x140131038
 * Callers:
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x140130BFC (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 */

void __fastcall rimRemoveFromObTrackList(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // r8d
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v7 = (_QWORD *)(a1 + 16);
  v8 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v7[1] = v7;
  *v7 = v7;
  v10 = W32GetUserSessionState(v8, v5, v6);
  RIMUnlockExclusive(v10 + 56);
}
