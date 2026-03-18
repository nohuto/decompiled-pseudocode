/*
 * XREFs of ?DeviceAcceleratorInitialize@@YAJXZ @ 0x14021FE20
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DeviceAcceleratorInitialize(int a1, int a2, int a3)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  unsigned int i; // ebx
  unsigned int v6; // ebp
  int (*v7)(void); // rax
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  for ( i = 0; i < 2; ++i )
  {
    v6 = 10;
    v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48) + 6400LL);
    if ( v7 && v7() >= 0 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48) + 6408LL);
      if ( v9 )
        v6 = v9(i);
      else
        v6 = 0;
    }
    if ( *(_DWORD *)(UserSessionState + 24LL * i + 16368) != i )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 32);
    if ( *(_QWORD *)(UserSessionState + 24LL * i + 16360) )
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 33);
    v10 = (*(__int64 (__fastcall **)(_QWORD))(UserSessionState + 24LL * i + 16352))(v6);
    *(_QWORD *)(UserSessionState + 24LL * i + 16360) = v10;
    if ( !v10 )
      return 3221225473LL;
  }
  return 0LL;
}
