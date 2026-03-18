/*
 * XREFs of rimExtractScantime @ 0x140126794
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1401266A0 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x140126D64 (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimExtractScantime(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *PreparsedData,
        CHAR *Report,
        ULONG ReportLength,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rbx
  ULONG v8; // edx
  int v9; // r8d
  int v10; // r8d
  ULONG v11; // r9d
  ULONG v12; // ebp
  unsigned int v13; // r12d
  ULONG v14; // ebp
  unsigned int v15; // ebp
  _QWORD *v16; // r10
  _DWORD *v17; // r9
  unsigned __int64 v18; // r8
  ULONG v19; // r8d
  ULONG v20; // eax
  int v21; // ebp
  char v22; // di
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // di
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // di
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  char v37; // si
  bool v38; // bp
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  ULONG UsageValue; // [rsp+90h] [rbp+8h] BYREF

  v6 = a1 + 840;
  ++*(_DWORD *)(a1 + 864);
  UsageValue = 0;
  if ( HidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, &UsageValue, PreparsedData, Report, ReportLength) < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v37 = 0;
    }
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v40,
        *(_QWORD *)(UserSessionState + 19368),
        2,
        1,
        70,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    goto LABEL_46;
  }
  v10 = *(_DWORD *)(v6 + 24);
  if ( v10 != 1 )
  {
    if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
    {
      v11 = *(_DWORD *)(v6 + 12);
      v8 = v11 % *(_DWORD *)(a1 + 896);
      if ( UsageValue < v8 )
        ++*(_DWORD *)(v6 + 28);
      v12 = UsageValue + *(_DWORD *)(a1 + 896) * *(_DWORD *)(v6 + 28);
      if ( v12 <= v11 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v32 = 0;
        }
        v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
          LOBYTE(v35) = v33;
          LOBYTE(v36) = v32;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v36,
            v35,
            *(_QWORD *)(v34 + 19368),
            4,
            1,
            67,
            (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
        }
        *(_DWORD *)(v6 + 48) |= 1u;
      }
      else
      {
        *(_DWORD *)(v6 + 12) = v12;
        v13 = v10 - 1;
        v14 = v12 - *(_DWORD *)(v6 + 16);
        if ( v14 )
        {
          v8 = (v14 - 1) % v13;
          v15 = (v14 - 1) / v13 + 1;
          if ( !v15 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3413LL);
          *(_DWORD *)(v6 + 20) = v15;
        }
      }
    }
    if ( (*(_DWORD *)(v6 + 48) & 1) == 0 )
      goto LABEL_12;
    v21 = *(_DWORD *)(v6 + 20);
    if ( v21 && *(_DWORD *)(v6 + 24) >= 5u )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v22;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          v25,
          *(_QWORD *)(v24 + 19368),
          4,
          1,
          68,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
          v21);
      }
      *(_DWORD *)(v6 + 12) += *(_DWORD *)(v6 + 20);
      goto LABEL_12;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v27 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 19368),
        4,
        1,
        69,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
        80);
    }
LABEL_46:
    *(_DWORD *)(v6 + 12) += 80;
LABEL_12:
    v16 = a5;
    v17 = a6;
    goto LABEL_13;
  }
  if ( *(_DWORD *)v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3378LL);
  if ( *(_DWORD *)(v6 + 24) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3379LL);
  if ( *(_DWORD *)(v6 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3380LL);
  if ( *(_DWORD *)(v6 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3381LL);
  if ( *(_DWORD *)(v6 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3382LL);
  if ( *(_DWORD *)(v6 + 20) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3383LL);
  if ( (*(_DWORD *)(v6 + 48) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3384LL);
  v17 = a6;
  v16 = a5;
  *(_DWORD *)v6 = *a6;
  *(_QWORD *)(v6 + 40) = *v16;
  v20 = UsageValue;
  *(_DWORD *)(v6 + 12) = UsageValue;
  *(_DWORD *)(v6 + 16) = v20;
LABEL_13:
  if ( *(_DWORD *)(v6 + 24) > 1u )
  {
    v18 = gliQpcFreq.QuadPart
        * (unsigned int)((2 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16)) + 10) / 0x14);
    *v17 = (2 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 16)) + 10) / 0x14
         + *(_DWORD *)v6;
    *v16 = *(_QWORD *)(v6 + 40) + v18 / 0x3E8;
  }
  v19 = UsageValue;
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = *v17;
  *(_QWORD *)(v6 + 32) = *v16;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v6, 1, v19);
}
