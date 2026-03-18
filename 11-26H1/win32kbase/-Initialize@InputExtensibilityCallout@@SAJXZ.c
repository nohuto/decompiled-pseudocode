/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1401BB2D0
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1401B3DC4 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v3 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 16400) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 454);
  v4 = Win32AllocPoolZInitImpl(256LL, 0x3B0uLL, 0x70444E43u);
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0LL;
    memset((void *)(v4 + 24), 0, 0x398uLL);
    *(_QWORD *)(v8 + 8) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 16400) = v8;
  if ( !*(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 16400) )
  {
    v3 = -1073741801;
    InputExtensibilityCallout::UnInitialize(v13, v12, v14);
  }
  return v3;
}
