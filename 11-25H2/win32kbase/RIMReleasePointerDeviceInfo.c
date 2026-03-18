/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1401E45C0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1401380A4 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimDestroyDeadzone @ 0x140127A78 (rimDestroyDeadzone.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAssignPreparsedData @ 0x1401E2448 (RIMAssignPreparsedData.c)
 *     RIMFreePointerDevice @ 0x1401E3C1C (RIMFreePointerDevice.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax
  void *v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  char v9; // bp
  bool v10; // r14
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char *v14; // rcx

  v2 = *(_QWORD *)(a2 + 456);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2967);
  v5 = RIMAssignPreparsedData(*(_QWORD *)(a2 + 440), a2, v2);
  v8 = v5;
  if ( v5 < 0 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v7 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v7 & 1) == 0)
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v7, WPP_GLOBAL_Control);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        39,
        (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
        v8);
    }
  }
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v14 = *(char **)(a1 + 1048);
    if ( v14 )
    {
      GreDeleteFastMutex(v14);
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    rimDestroyDeadzone((__int64)v14, (__int64)v6);
  }
  RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 456) = 0LL;
}
