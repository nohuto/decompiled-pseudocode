/*
 * XREFs of RIMOnProcessDestroy @ 0x140059910
 * Callers:
 *     DestroyProcessInfo @ 0x1401CA2F4 (DestroyProcessInfo.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMUnregisterCurrentProcessForInput @ 0x14005B324 (RIMUnregisterCurrentProcessForInput.c)
 */

__int64 __fastcall RIMOnProcessDestroy(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  _QWORD *v8; // rdx
  int v9; // ecx
  int v10; // r8d
  _QWORD *i; // rax
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v8 = (_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 120);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
  {
    if ( i[2] == a1 )
      *((_BYTE *)i - 6) = 1;
  }
  v12 = W32GetUserSessionState(v9, (_DWORD)v8, v10);
  RIMUnlockExclusive(v12 + 56);
  return RIMUnregisterCurrentProcessForInput();
}
