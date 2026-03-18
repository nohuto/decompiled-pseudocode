/*
 * XREFs of rimQueueCompleteFrame @ 0x1401836BC
 * Callers:
 *     rimProcessCompleteFrame @ 0x140183590 (rimProcessCompleteFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140061940 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1401234B0 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x140132154 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     RawInputManagerDeviceObjectReference @ 0x1401806B0 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)((isChildPartition(v8, v7) ? 0x48 : 0) + a3 + 56) = PerformanceCounter;
  if ( (int)RawInputManagerDeviceObjectReference(*(void **)(a2 + 32)) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
    GreDeleteFastMutex((char *)a3);
  }
  else
  {
    ++*(_QWORD *)(a2 + 176);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v9 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_qi(*((_QWORD *)WPP_GLOBAL_Control + 3), v13, v12, *(_QWORD *)(UserSessionState + 19336));
    }
    v14 = *(_QWORD **)(a1 + 752);
    v15 = (_QWORD *)(a3 + 8);
    if ( *v14 != a1 + 744 )
      __fastfail(3u);
    *(_QWORD *)(a3 + 16) = v14;
    *v15 = a1 + 744;
    *v14 = v15;
    *(_QWORD *)(a1 + 752) = v15;
    InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
    InputTraceLogging::TelemetryDebug::RIM::QueueFrame((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a3 + 48), v16);
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 32);
  }
}
