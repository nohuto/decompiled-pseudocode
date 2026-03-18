/*
 * XREFs of SetConnectCompletedState @ 0x140186370
 * Callers:
 *     xxxRemoteConnect @ 0x14007DC00 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1400486C0 (ReferenceDwmApiPort.c)
 *     IsCurrentSessionInServerSilo @ 0x140186404 (IsCurrentSessionInServerSilo.c)
 *     PowerConnectionEvent @ 0x14018642C (PowerConnectionEvent.c)
 *     ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x1401C4690 (--4-$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall SetConnectCompletedState(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 UserSessionState; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  SGRDPgbConnectCompleted<int>::operator=(a1, &v9);
  result = (__int64 (*)(void))IsCurrentSessionInServerSilo();
  if ( !(_DWORD)result )
  {
    UserSessionState = W32GetUserSessionState(v3, v2, v4);
    PowerConnectionEvent(*(unsigned int *)(UserSessionState + 68748));
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6) + 48) + 3736LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        v7 = ReferenceDwmApiPort();
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 3744LL);
        if ( result )
          return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(v7);
      }
    }
  }
  return result;
}
