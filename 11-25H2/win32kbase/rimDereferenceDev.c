/*
 * XREFs of rimDereferenceDev @ 0x1401382E4
 * Callers:
 *     rimFreeSpecificDevFinal @ 0x14017E314 (rimFreeSpecificDevFinal.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x140210AA4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  void *v6; // r14
  void *v7; // r15
  __int64 v8; // rdx
  char v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a1 + 168) & 0x40000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 83LL);
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
  v5 = *(_DWORD *)(a1 + 168);
  v6 = *(void **)(a1 + 16);
  v7 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v5 & 0x20) == 0 && (v5 & 0x2000) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 172) & 8) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 102LL);
    if ( *(_QWORD *)(a1 + 176) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 103LL);
  }
  if ( *(_QWORD *)(v4 + 32) == PsGetCurrentProcess(v3, v2) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        10,
        (__int64)&WPP_cd5da7af252039b4591bb9c5c0da731f_Traceguids,
        (char)v6,
        a1);
    }
    ObCloseHandle(v6, 1);
  }
  ZwClose(v7);
  v16 = W32GetUserSessionState(v15, v14);
  RIMLockExclusive(v16 + 56);
  *(_BYTE *)(v4 + 11) = 1;
  v19 = W32GetUserSessionState(v18, v17);
  RIMUnlockExclusive(v19 + 56);
  return ObfDereferenceObject((PVOID)v4);
}
