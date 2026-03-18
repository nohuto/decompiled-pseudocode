/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1401E2194
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1401838DC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1401F1C54 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMSetContactBoundary @ 0x140076BE4 (RIMSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  ULONG ReportLength; // esi
  int v13; // ebx
  CHAR *v14; // rax
  CHAR *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // di
  bool v19; // si
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r9
  __int16 Report; // [rsp+30h] [rbp-48h]
  char v25; // [rsp+40h] [rbp-38h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3357);
  if ( a2 != *(_QWORD *)(v6 + 456) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3358);
  v10 = *(_QWORD *)(v6 + 440);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v10 + 16);
  ReportLength = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
    || (v13 = RIMSetContactBoundary(a2, (_DWORD *)(a4 + 128), *(_QWORD *)(a3 + 2620), 0, 0), v13 >= 0) )
  {
    v14 = (CHAR *)Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(*(_QWORD *)(v6 + 440) + 44LL), 0x63707352u);
    v15 = v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v13 = HidP_SetUsageValue(HidP_Input, 1u, 0, 0x30u, *(_DWORD *)(a3 + 2620), PreparsedData, v14, ReportLength);
    if ( v13 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v18 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = v13;
        v22 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v16) + 19336);
        Report = 42;
        goto LABEL_25;
      }
    }
    else
    {
      v13 = HidP_SetUsageValue(HidP_Input, 1u, 0, 0x31u, *(_DWORD *)(a3 + 2624), PreparsedData, v15, ReportLength);
      if ( v13 >= 0 )
      {
        *a5 = v15;
        *a6 = ReportLength;
        return (unsigned int)v13;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v18 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = v13;
        v22 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v17) + 19336);
        Report = 41;
LABEL_25:
        LOBYTE(v21) = v19;
        LOBYTE(v20) = v18;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v21,
          v22,
          3,
          1,
          Report,
          (__int64)&WPP_4da5384257fb33656363be52a67fadd2_Traceguids,
          v25);
      }
    }
  }
  return (unsigned int)v13;
}
