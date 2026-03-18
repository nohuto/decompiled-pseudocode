/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1400F0B20
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1400F0A58 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dddd @ 0x14019A290 (WPP_RECORDER_AND_TRACE_SF_Dddd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_PTPMaxCount__private_IsEnabledDeviceUsageNoInline @ 0x1401F187C (Feature_PTPMaxCount__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        struct RawInputManagerObject *a1,
        __int64 a2,
        CHAR *a3,
        ULONG a4,
        PULONG a5,
        ULONG *a6,
        _DWORD *a7,
        int *a8,
        _DWORD *a9,
        _WORD *a10)
{
  __int64 v10; // rsi
  unsigned int v12; // r12d
  unsigned int *v13; // rbx
  char v14; // bp
  char v15; // di
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  ULONG v20; // r14d
  __int64 v21; // rdx
  ULONG v22; // r15d
  char v23; // di
  bool v24; // si
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  PULONG v28; // rsi
  NTSTATUS v29; // eax
  ULONG v30; // edx
  unsigned int v31; // eax
  char v32; // di
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  ULONG v37; // eax
  ULONG v38; // ecx
  char v39; // di
  bool v40; // si
  ULONG v41; // ebx
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  ULONG v45; // ecx
  unsigned int v46; // eax
  char v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  bool v52; // r14
  ULONG v53; // edi
  ULONG v54; // esi
  int v55; // ebx
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  int UsageValue; // [rsp+20h] [rbp-98h]
  int PreparsedData; // [rsp+28h] [rbp-90h]
  int Report; // [rsp+30h] [rbp-88h]
  int ReportLength; // [rsp+38h] [rbp-80h]
  struct _HIDP_PREPARSED_DATA *v64; // [rsp+68h] [rbp-50h]

  v10 = *(_QWORD *)(a2 + 456);
  v12 = 0;
  v13 = *(unsigned int **)(v10 + 768);
  v64 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 440) + 16LL);
  v14 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v15 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      52,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
  }
  if ( (*(_DWORD *)(v10 + 368) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2347LL);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2348LL);
  v20 = *(_DWORD *)(v10 + 776);
  if ( (unsigned int)Feature_PTPMaxCount__private_IsEnabledDeviceUsageNoInline() && *(_DWORD *)(v10 + 24) == 7 )
    --v20;
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    v22 = *v13;
    if ( *v13 > v20 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v21);
        LOBYTE(v26) = v24;
        LOBYTE(v27) = v23;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          v26,
          *(_QWORD *)(v25 + 19336),
          3,
          1,
          53,
          (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
          v22,
          v20);
      }
    }
  }
  v28 = a5;
  *a8 = 0;
  *a5 = 0;
  *a6 = 0;
  *a10 = 0;
  *a7 = 0;
  *a9 = 0;
  v29 = HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v64, a3, a4);
  v30 = 0;
  if ( v29 >= 0 )
  {
    v31 = v13[9];
    if ( !*a5 )
    {
      if ( v31 )
      {
        v45 = *v13;
        if ( v31 <= *v13 )
        {
          *a8 = 1;
          v45 = v31;
          v46 = 0;
        }
        else
        {
          v46 = v31 - v45;
        }
        v13[9] = v46;
        *a6 = v45;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2447LL);
      }
      goto LABEL_59;
    }
    if ( v31 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v32 = 0;
      }
      v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 19336),
          4,
          1,
          54,
          (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, a2);
      v28 = a5;
      v30 = 0;
    }
    v37 = *v28;
    if ( *v28 <= v20 )
    {
      v38 = *v13;
      if ( v37 <= *v13 )
      {
        *a8 = 1;
        v38 = v37;
      }
      else
      {
        v30 = v37 - v38;
      }
      *a6 = v38;
      v13[9] = v30;
      *a7 = 1;
      goto LABEL_59;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2414LL);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v39 = 0;
    }
    v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = *a5;
      v42 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v43) = v40;
      LOBYTE(v44) = v39;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v44,
        v43,
        *(_QWORD *)(v42 + 19336),
        4,
        1,
        55,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
        v41,
        v20);
    }
    v28 = a5;
LABEL_67:
    v12 = -1073741668;
    goto LABEL_68;
  }
  if ( (v13[8] & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v47 = 0;
    }
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v47;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 19336),
        4,
        1,
        56,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    goto LABEL_67;
  }
  *a6 = *v13;
  *a9 = 1;
LABEL_59:
  *a10 = *((_WORD *)v13 + 3);
LABEL_68:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v14 = 0;
  }
  v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = *a6;
    v54 = *v28;
    v55 = *a8;
    v56 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v57) = v52;
    LOBYTE(v58) = v14;
    WPP_RECORDER_AND_TRACE_SF_Dddd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v58,
      v57,
      *(_QWORD *)(v56 + 19336),
      UsageValue,
      PreparsedData,
      Report,
      ReportLength,
      v12,
      v54,
      v53,
      v55);
  }
  return v12;
}
