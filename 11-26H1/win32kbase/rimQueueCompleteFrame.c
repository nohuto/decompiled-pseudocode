/*
 * XREFs of rimQueueCompleteFrame @ 0x140095460
 * Callers:
 *     rimProcessCompleteFrame @ 0x140074484 (rimProcessCompleteFrame.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RawInputManagerDeviceObjectReference @ 0x1400955E0 (RawInputManagerDeviceObjectReference.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x140095638 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x140168A40 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     ?QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14016AB98 (-QueueFrame@RIM@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r8d
  char v11; // bl
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *(LARGE_INTEGER *)(((unsigned __int8)isChildPartition(v8, v7, v9) != 0 ? 0x48 : 0) + a3 + 56) = PerformanceCounter;
  if ( (int)RawInputManagerDeviceObjectReference(*(_QWORD *)(a2 + 32)) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 490LL);
    GreDeleteFastMutex((char *)a3, v18, v19, v20);
  }
  else
  {
    ++*(_QWORD *)(a2 + 176);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v11 = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_qi(*((_QWORD *)WPP_GLOBAL_Control + 3), v15, v14, *(_QWORD *)(UserSessionState + 19368));
    }
    v16 = *(_QWORD **)(a1 + 752);
    v17 = (_QWORD *)(a3 + 8);
    if ( *v16 != a1 + 744 )
      __fastfail(3u);
    *v17 = a1 + 744;
    *(_QWORD *)(a3 + 16) = v16;
    *v16 = v17;
    *(_QWORD *)(a1 + 752) = v17;
    InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, (const struct RIMCOMPLETEFRAME *)a3);
    InputTraceLogging::TelemetryDebug::RIM::QueueFrame((const struct TELEMETRY_POINTER_FRAME_TIMES *)(a3 + 48));
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a2 + 32);
  }
}
