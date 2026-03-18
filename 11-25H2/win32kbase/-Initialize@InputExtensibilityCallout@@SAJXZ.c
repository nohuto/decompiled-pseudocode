/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x14020E848
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1400CF07C (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16408) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 454);
  v3 = Win32AllocPoolZInitImpl(256LL, 0x388uLL, 0x70444E43u);
  v6 = v3;
  if ( v3 )
  {
    *(_QWORD *)(v3 + 16) = 0LL;
    memset((void *)(v3 + 24), 0, 0x370uLL);
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v5, v4) + 16408) = v6;
  if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7) + 16408) )
  {
    v2 = -1073741801;
    InputExtensibilityCallout::UnInitialize(v10, v9);
  }
  return v2;
}
