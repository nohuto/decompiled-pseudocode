/*
 * XREFs of ?Initialize@CKernelSensorThread@@SAJXZ @ 0x140225524
 * Callers:
 *     InitializeInputComponents @ 0x14021B770 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall CKernelSensorThread::Initialize(int a1, int a2, int a3)
{
  _DWORD *v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  _DWORD *v7; // rbx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 3104) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 272);
  v3 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x88uLL, 0x7054534Bu);
  v7 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x88uLL);
    *(_QWORD *)v7 = &CKernelSensorThread::`vftable';
    v7[30] = 80;
    v7[31] = 300;
    *((_BYTE *)v7 + 128) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 3104) = v7;
  return *(_QWORD *)(W32GetUserSessionState(v9, v8, v10) + 3104) == 0LL ? 0xC0000017 : 0;
}
