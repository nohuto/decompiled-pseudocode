/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1400F92B0
 * Callers:
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMSetContactBoundary @ 0x1400F90EC (RIMSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CHAR **a5,
        ULONG *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  ULONG ReportLength; // esi
  __int64 v13; // rcx
  ULONG *v14; // r14
  int v15; // ebx
  CHAR *v16; // rax
  CHAR *v17; // rdi
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  char v22; // di
  bool v23; // si
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int16 Report; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+40h] [rbp-38h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3327LL);
  if ( a2 != *(_QWORD *)(v6 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3328LL);
  v10 = *(_QWORD *)(v6 + 440);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v10 + 16);
  ReportLength = *(unsigned __int16 *)(v10 + 44);
  v14 = (ULONG *)(a3 + 2620);
  if ( !(unsigned int)RIMIsTouchPointerDevice(a2)
    || (v15 = RIMSetContactBoundary(v13, (_DWORD *)(a4 + 128), *(_QWORD *)v14, 0, 0), v15 >= 0) )
  {
    v16 = (CHAR *)Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(*(_QWORD *)(v6 + 440) + 44LL), 0x63707352u);
    v17 = v16;
    if ( !v16 )
      return (unsigned int)-1073741801;
    v15 = HidP_SetUsageValue(HidP_Input, 1u, 0, 0x30u, *v14, PreparsedData, v16, ReportLength);
    if ( v15 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = v15;
        v26 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v18, v19) + 19368);
        Report = 42;
        goto LABEL_25;
      }
    }
    else
    {
      v15 = HidP_SetUsageValue(HidP_Input, 1u, 0, 0x31u, *(_DWORD *)(a3 + 2624), PreparsedData, v17, ReportLength);
      if ( v15 >= 0 )
      {
        *a5 = v17;
        *a6 = ReportLength;
        return (unsigned int)v15;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = v15;
        v26 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v21) + 19368);
        Report = 41;
LABEL_25:
        LOBYTE(v25) = v23;
        LOBYTE(v24) = v22;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v25,
          v26,
          3,
          1,
          Report,
          (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
          v29);
      }
    }
  }
  return (unsigned int)v15;
}
