/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x140077F1C
 * Callers:
 *     rimPopulateContactFrameData @ 0x140076D40 (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimExtractData @ 0x1400CCF94 (rimExtractData.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1400E7B84 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x140184658 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractTouchInfo @ 0x14018493C (rimExtractTouchInfo.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimExtractGeometryPoints @ 0x1401F1980 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1401F1B40 (rimExtractPenInfo.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *UsageLength,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  CHAR *Report; // r10
  ULONG v15; // r11d
  int v17; // r12d
  char v18; // r14
  bool v19; // r15
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  _DWORD *v23; // r13
  _DWORD *v24; // rax
  int v25; // eax
  unsigned int v26; // r12d
  USAGE v27; // r9
  USHORT v28; // r8
  BOOL v29; // r15d
  __int64 v30; // rdx
  NTSTATUS DigitizerPageButtonUsages; // ebp
  _DWORD *v32; // r14
  __int16 v33; // ax
  bool v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  __int64 v39; // rdx
  int v40; // ecx
  char v41; // di
  bool v42; // bp
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rdx
  CHAR *v47; // rdi
  ULONG v48; // r14d
  USHORT v49; // r8
  char v50; // bl
  bool v51; // di
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  __int16 PreparsedData; // [rsp+30h] [rbp-78h]
  char ReportLength; // [rsp+40h] [rbp-68h]
  CHAR UsageValue[88]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B0h] [rbp+8h]
  CHAR *UsageList; // [rsp+C0h] [rbp+18h] BYREF
  ULONG v62; // [rsp+C8h] [rbp+20h]

  v62 = a4;
  UsageList = a3;
  v11 = *(_QWORD *)(a1 + 768);
  v12 = a1 + 408;
  v13 = a7;
  Report = a3;
  v59 = v11;
  v15 = a4;
  v17 = (unsigned __int8)*a3;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v18 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      60,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    Report = UsageList;
    v11 = v59;
    v15 = v62;
  }
  v23 = a8;
  *UsageLength = 0;
  v24 = a10;
  *v23 = 1;
  *v24 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 780) )
  {
LABEL_56:
    *(_DWORD *)(v13 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
    *(_DWORD *)(v13 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v40 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v40 - 1) <= 3 )
    {
      *(_DWORD *)(v13 + 64) = 2;
    }
    else
    {
      if ( v40 != 7 )
      {
        if ( (unsigned int)(v40 - 5) <= 1 )
        {
          v46 = a6;
          *(_DWORD *)(v13 + 64) = 3;
          rimExtractPenInfo(a1, v46, v13);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v41 = 0;
          }
          v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
            LOBYTE(v44) = v42;
            LOBYTE(v45) = v41;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v45,
              v44,
              *(_QWORD *)(v43 + 19336),
              4,
              1,
              63,
              (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
          }
          LODWORD(UsageLength) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2883LL);
        }
        goto LABEL_71;
      }
      *(_DWORD *)(v13 + 64) = 5;
    }
    rimExtractTouchInfo(a1, a6, v13);
LABEL_71:
    v47 = UsageList;
    v48 = v62;
    DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, UsageList, v62, v13);
    if ( DigitizerPageButtonUsages >= 0 && (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
    {
      LOWORD(UsageList) = 0;
      v49 = *(_WORD *)(v13 + 58);
      LODWORD(UsageLength) = 1;
      if ( HidP_GetUsages(HidP_Input, 0xFF00u, v49, (PUSAGE)&UsageList, (PULONG)&UsageLength, a2, v47, v48) >= 0
        && (_DWORD)UsageLength == 1
        && (_WORD)UsageList == 207 )
      {
        *a11 = 1;
      }
    }
    goto LABEL_78;
  }
  v25 = v17;
  v26 = 0;
  LODWORD(a7) = v25;
  while ( 1 )
  {
    if ( v25 != *(_DWORD *)(v12 + 4) )
      goto LABEL_27;
    v27 = *(_WORD *)(v12 + 12);
    v28 = *(_WORD *)(v13 + 58);
    v29 = (unsigned __int16)(v27 - 48) <= 1u;
    if ( v11 && *(_WORD *)(v11 + 8) && *(_WORD *)v12 == 1 && (unsigned __int16)(v27 - 48) <= 1u )
    {
      *(_DWORD *)(v12 + 48) = 0;
      v28 = *(_WORD *)(*(_QWORD *)(v11 + 24) + 8LL * *(unsigned __int16 *)(v13 + 58) + 2);
    }
    if ( (*(_DWORD *)(a1 + 368) & 0x200) != 0 && *(_WORD *)v12 == 1 && (unsigned __int16)(v27 - 48) <= 1u )
    {
      DigitizerPageButtonUsages = HidP_GetUsageValueArray(HidP_Input, 1u, v28, v27, UsageValue, 8u, a2, Report, v15);
      if ( DigitizerPageButtonUsages < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v34 = 0;
        }
        v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
          ReportLength = DigitizerPageButtonUsages;
          PreparsedData = 61;
LABEL_47:
          LOBYTE(v38) = v35;
          LOBYTE(v37) = v34;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v37,
            v38,
            *(_QWORD *)(v36 + 19336),
            4,
            1,
            PreparsedData,
            (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
            ReportLength);
          goto LABEL_78;
        }
        goto LABEL_78;
      }
      v32 = (_DWORD *)(v12 + 52);
      rimExtractGeometryPoints(
        *(unsigned __int16 *)(v12 + 12),
        v13,
        v12 + 52,
        (unsigned int)UsageValue,
        *(unsigned __int16 *)(v12 + 56));
      goto LABEL_22;
    }
    v32 = (_DWORD *)(v12 + 52);
    DigitizerPageButtonUsages = HidP_GetUsageValue(
                                  HidP_Input,
                                  *(_WORD *)v12,
                                  v28,
                                  v27,
                                  (PULONG)(v12 + 52),
                                  a2,
                                  Report,
                                  v15);
    if ( DigitizerPageButtonUsages < 0 )
      break;
LABEL_22:
    if ( *(_DWORD *)(v12 + 16) )
    {
      if ( *v32 < *(_DWORD *)(v12 + 32) || *v32 > *(_DWORD *)(v12 + 36) )
      {
        if ( *(_WORD *)v12 == 1 && v29 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v33 = *(_WORD *)(v12 + 12);
          if ( v33 == 48 )
          {
            *UsageLength = 1;
          }
          else
          {
            if ( v33 != 49 )
            {
              LODWORD(a8) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2836LL);
            }
            *a10 = 1;
          }
        }
      }
      else
      {
        *v23 = 0;
      }
    }
    else
    {
      *v23 = 0;
      if ( !v29 || a5 )
        RIMEnsureUsageWithinLogicalBoundary(v12, v30, 0LL);
    }
    v25 = a7;
LABEL_27:
    ++v26;
    v12 += 60LL;
    if ( v26 >= *(_DWORD *)(a1 + 780) )
      goto LABEL_56;
    Report = UsageList;
    v11 = v59;
    v15 = v62;
  }
  v34 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
    ReportLength = DigitizerPageButtonUsages;
    PreparsedData = 62;
    goto LABEL_47;
  }
LABEL_78:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v50 = 0;
  }
  v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v30);
    LOBYTE(v53) = v51;
    LOBYTE(v54) = v50;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v53,
      *(_QWORD *)(v52 + 19336),
      4,
      1,
      64,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
      DigitizerPageButtonUsages);
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
