/*
 * XREFs of ?DeviceAcceleratorInitialize@@YAJXZ @ 0x14021C210
 * Callers:
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DeviceAcceleratorInitialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 i; // rbx
  unsigned int v6; // esi
  int (*v7)(void); // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(_QWORD); // rax
  __int64 v11; // rax

  v2 = 0;
  for ( i = W32GetUserSessionState(a1, a2) + 16368; ; i += 24LL )
  {
    v6 = 10;
    v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 48) + 6840LL);
    if ( v7 && v7() >= 0 )
    {
      v10 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 48) + 6848LL);
      if ( v10 )
        v6 = v10(v2);
      else
        v6 = 0;
    }
    if ( *(_DWORD *)(i + 8) != v2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 32);
    if ( *(_QWORD *)i )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 33);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(i - 8))(v6);
    *(_QWORD *)i = v11;
    if ( !v11 )
      break;
    if ( ++v2 >= 2 )
      return 0LL;
  }
  return 3221225473LL;
}
