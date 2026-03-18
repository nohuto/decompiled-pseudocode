/*
 * XREFs of ?Initialize@CKernelSensorThread@@SAJXZ @ 0x140223608
 * Callers:
 *     InitializeInputComponents @ 0x14018C900 (InitializeInputComponents.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall CKernelSensorThread::Initialize(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 3104) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 272);
  v2 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 0x88uLL, 0x7054534Bu);
  v5 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x88uLL);
    *v5 = &CKernelSensorThread::`vftable';
    v5[12] = 0LL;
    *((_BYTE *)v5 + 104) = 0;
    *((_DWORD *)v5 + 27) = 0;
    v5[14] = 0LL;
    *((_DWORD *)v5 + 30) = 80;
    *((_DWORD *)v5 + 31) = 300;
    *((_BYTE *)v5 + 128) = 1;
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v4, v3) + 3104) = v5;
  return *(_QWORD *)(W32GetUserSessionState(v7, v6) + 3104) == 0LL ? 0xC0000017 : 0;
}
