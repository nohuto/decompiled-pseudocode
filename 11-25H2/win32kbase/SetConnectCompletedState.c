/*
 * XREFs of SetConnectCompletedState @ 0x140150C60
 * Callers:
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x14003F9B0 (ReferenceDwmApiPort.c)
 *     IsCurrentSessionInServerSilo @ 0x140150CF4 (IsCurrentSessionInServerSilo.c)
 *     PowerConnectionEvent @ 0x140150D1C (PowerConnectionEvent.c)
 *     ??4?$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z @ 0x1401A0FBC (--4-$SGRDPgbConnectCompleted@H@@QEAAAEAHAEBH@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall SetConnectCompletedState(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  SGRDPgbConnectCompleted<int>::operator=(a1, &v10);
  result = (__int64 (*)(void))IsCurrentSessionInServerSilo();
  if ( !(_DWORD)result )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    PowerConnectionEvent(*(unsigned int *)(UserSessionState + 68756));
    result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 4184LL);
    if ( result )
    {
      result = (__int64 (*)(void))result();
      if ( (int)result >= 0 )
      {
        v7 = ReferenceDwmApiPort();
        result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 4192LL);
        if ( result )
          return (__int64 (*)(void))((__int64 (__fastcall *)(__int64))result)(v7);
      }
    }
  }
  return result;
}
