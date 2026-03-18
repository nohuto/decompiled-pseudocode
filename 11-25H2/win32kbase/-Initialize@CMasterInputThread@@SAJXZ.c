/*
 * XREFs of ?Initialize@CMasterInputThread@@SAJXZ @ 0x1402236EC
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMasterInputThread::Initialize(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18752) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 234);
  v2 = Win32AllocPoolZInitImpl(256LL, 0x30uLL, 0x7054494Du);
  v5 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    *(_QWORD *)v2 = &CInputThreadBase::`vftable';
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 8) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18752) = v5;
  return *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18752) == 0LL ? 0xC0000017 : 0;
}
