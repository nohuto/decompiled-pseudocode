/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x140225698
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(int a1, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 18992) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 19);
  v3 = Win32AllocPoolZInitImpl(256LL, 0xCuLL, 0x53794D65u);
  v7 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 8) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18992) = v7;
  return *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 18992) == 0LL ? 0xC0000017 : 0;
}
