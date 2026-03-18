/*
 * XREFs of rimDereferenceDev @ 0x14013217C
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     rimFreeSpecificDevFinal @ 0x1401BB4C0 (rimFreeSpecificDevFinal.c)
 *     ?RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ @ 0x1402187F4 (-RemoveInjectionDevicesForSessionUninitialize@CBaseInput@@SAXXZ.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1)
{
  __int64 v2; // rcx
  int *v3; // rbx
  __int64 v4; // rsi
  int v5; // eax
  void *v6; // r14
  void *v7; // r15
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  char v11; // bl
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rax

  v3 = (int *)(a1 + 168);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() && (*v3 & 0x40000000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 83LL);
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 89LL);
  v5 = *v3;
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
  v8 = *(_QWORD *)(v4 + 32);
  if ( v8 == PsGetCurrentProcess(v2) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        10,
        (__int64)&WPP_f18322ca25db3dd0b6c6579719269eab_Traceguids,
        (char)v6,
        a1);
    }
    ObCloseHandle(v6, 1);
  }
  ZwClose(v7);
  v19 = W32GetUserSessionState(v17, v16, v18);
  RIMLockExclusive(v19 + 56);
  *(_BYTE *)(v4 + 11) = 1;
  v23 = W32GetUserSessionState(v21, v20, v22);
  RIMUnlockExclusive(v23 + 56);
  return ObfDereferenceObject((PVOID)v4);
}
