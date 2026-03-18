/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x140223A98
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CInputSystemMetrics::Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18952) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 19);
  v2 = Win32AllocPoolZInitImpl(256LL, 0xCuLL, 0x53794D65u);
  v5 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18952) = v5;
  return *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18952) == 0LL ? 0xC0000017 : 0;
}
