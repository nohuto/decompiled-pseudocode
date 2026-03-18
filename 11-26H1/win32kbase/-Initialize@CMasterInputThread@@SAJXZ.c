/*
 * XREFs of ?Initialize@CMasterInputThread@@SAJXZ @ 0x14019C870
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMasterInputThread::Initialize(int a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18800) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 234LL);
  v3 = Win32AllocPoolZInitImpl(256LL, 0x30uLL, 0x7054494Du);
  v7 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    *(_QWORD *)v3 = &CInputThreadBase::`vftable';
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18800) = v7;
  return *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 18800) == 0LL ? 0xC0000017 : 0;
}
