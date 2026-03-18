/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1400F65C8
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1400F71B8 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractTouchInfo @ 0x1400F74A4 (rimExtractTouchInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1400F85A8 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractPenInfo @ 0x1400F8FD0 (rimExtractPenInfo.c)
 *     rimExtractGeometryPoints @ 0x140156B18 (rimExtractGeometryPoints.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *UsageValue,
        _DWORD *UsageLength,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r15
  ULONG ReportLength; // r11d
  CHAR *v15; // r10
  char v17; // bp
  bool v18; // r14
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  _DWORD *v22; // r12
  _DWORD *v23; // rax
  unsigned int v24; // r13d
  USAGE v25; // r9
  USHORT v26; // r8
  BOOL v27; // ebp
  _DWORD *v28; // r14
  __int64 v29; // rdx
  NTSTATUS DigitizerPageButtonUsages; // edi
  __int64 v31; // r8
  int v32; // ecx
  unsigned int i; // r8d
  __int64 v34; // r9
  int v35; // r11d
  __int64 v36; // rax
  int v37; // r9d
  unsigned int v38; // r8d
  int v39; // ecx
  __int64 v40; // r9
  int v41; // r11d
  __int64 v42; // rax
  int v43; // r9d
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  int v47; // r8d
  __int64 v48; // rdx
  CHAR *v49; // rsi
  ULONG v50; // ebp
  char v51; // bl
  bool v52; // si
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  bool v57; // bl
  bool v58; // si
  __int64 v59; // rax
  int v60; // edx
  int v61; // r8d
  int v62; // edx
  int v63; // eax
  int v64; // edx
  int v65; // eax
  USHORT v66; // r8
  __int16 v67; // ax
  char v68; // di
  bool v69; // si
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  __int16 Report; // [rsp+30h] [rbp-78h]
  char v74; // [rsp+40h] [rbp-68h]
  __int64 v75; // [rsp+50h] [rbp-58h]
  char v76; // [rsp+B0h] [rbp+8h]
  PCHAR v78; // [rsp+C0h] [rbp+18h] BYREF
  ULONG v79; // [rsp+C8h] [rbp+20h]

  v79 = a4;
  v78 = a3;
  v11 = *(_QWORD *)(a1 + 768);
  v12 = a1 + 408;
  v13 = a7;
  ReportLength = a4;
  v15 = a3;
  v75 = v11;
  LOBYTE(a3) = *a3;
  v76 = (char)a3;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v17 = 0;
  }
  v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, (_DWORD)a3);
    LOBYTE(v20) = v18;
    LOBYTE(v21) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      60,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    v11 = v75;
    LOBYTE(a3) = v76;
    v15 = v78;
    ReportLength = v79;
  }
  v22 = UsageValue;
  *UsageLength = 0;
  v23 = a10;
  *v22 = 1;
  v24 = 0;
  *v23 = 0;
  *a11 = 0;
  while ( 1 )
  {
    if ( v24 >= *(_DWORD *)(a1 + 780) )
    {
      v32 = 0;
      for ( i = 0; i < 6; ++i )
      {
        if ( *(_WORD *)(a1 + 16LL * i + 28) == 1 && *(_WORD *)(a1 + 16LL * i + 30) == 48 )
        {
          v34 = *(unsigned int *)(a1 + 16 * (i + 2LL));
          if ( (_DWORD)v34 != -1 )
          {
            v35 = *(_DWORD *)(a1 + 16LL * i + 40);
            v36 = 60 * v34;
            v37 = *(_DWORD *)(a1 + 16LL * i + 36);
            v32 = *(_DWORD *)(v36 + a1 + 460);
            if ( v35 != v37 )
            {
              v62 = *(_DWORD *)(v36 + a1 + 444);
              v63 = *(_DWORD *)(v36 + a1 + 440);
              if ( v62 != v63 )
              {
                if ( v32 < v63 )
                {
                  v32 = *(_DWORD *)(a1 + 16LL * i + 36);
                }
                else if ( v32 > v62 )
                {
                  v32 = v35;
                }
                else
                {
                  v32 = v37 + (v35 - v37) * (v32 - v63) / (v62 - v63);
                }
              }
            }
            break;
          }
        }
      }
      *(_DWORD *)(v13 + 4) = v32;
      v38 = 0;
      v39 = 0;
      while ( v38 < 6 )
      {
        if ( *(_WORD *)(a1 + 16LL * v38 + 28) == 1 && *(_WORD *)(a1 + 16LL * v38 + 30) == 49 )
        {
          v40 = *(unsigned int *)(a1 + 16 * (v38 + 2LL));
          if ( (_DWORD)v40 != -1 )
          {
            v41 = *(_DWORD *)(a1 + 16LL * v38 + 40);
            v42 = 60 * v40;
            v43 = *(_DWORD *)(a1 + 16LL * v38 + 36);
            v39 = *(_DWORD *)(v42 + a1 + 460);
            if ( v41 != v43 )
            {
              v64 = *(_DWORD *)(v42 + a1 + 444);
              v65 = *(_DWORD *)(v42 + a1 + 440);
              if ( v64 != v65 )
              {
                if ( v39 < v65 )
                {
                  v39 = *(_DWORD *)(a1 + 16LL * v38 + 36);
                }
                else if ( v39 > v64 )
                {
                  v39 = v41;
                }
                else
                {
                  v39 = v43 + (v41 - v43) * (v39 - v65) / (v64 - v65);
                }
              }
            }
            break;
          }
        }
        ++v38;
      }
      *(_DWORD *)(v13 + 8) = v39;
      if ( (unsigned int)RIMIsTouchPointerDevice(a1) )
      {
        *(_DWORD *)(v13 + 64) = 2;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 24) != 7 )
        {
          if ( (unsigned int)RIMIsPenPointerDevice(v44) )
          {
            v48 = a6;
            *(_DWORD *)(v13 + 64) = 3;
            rimExtractPenInfo(v46, v48, v13);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v68 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v68 = 0;
            }
            v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v70 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v45, v47);
              LOBYTE(v71) = v69;
              LOBYTE(v72) = v68;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v72,
                v71,
                *(_QWORD *)(v70 + 19368),
                4,
                1,
                63,
                (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
            }
            LODWORD(UsageLength) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2872LL);
          }
          goto LABEL_43;
        }
        *(_DWORD *)(v13 + 64) = 5;
      }
      rimExtractTouchInfo(v44, a6, v13);
LABEL_43:
      v49 = v78;
      v50 = v79;
      DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, v78, v79, v13);
      if ( DigitizerPageButtonUsages >= 0 && (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
      {
        v66 = *(_WORD *)(v13 + 58);
        LOWORD(v78) = 0;
        LODWORD(UsageLength) = 1;
        if ( HidP_GetUsages(HidP_Input, 0xFF00u, v66, (PUSAGE)&v78, (PULONG)&UsageLength, a2, v49, v50) >= 0
          && (_DWORD)UsageLength == 1
          && (_WORD)v78 == 207 )
        {
          *a11 = 1;
        }
      }
      goto LABEL_45;
    }
    if ( (unsigned __int8)a3 != *(_DWORD *)(v12 + 4) )
      goto LABEL_19;
    v25 = *(_WORD *)(v12 + 12);
    v26 = *(_WORD *)(v13 + 58);
    v27 = v25 == 48 || v25 == 49;
    if ( v11 && *(_WORD *)(v11 + 8) && *(_WORD *)v12 == 1 && v27 )
    {
      *(_DWORD *)(v12 + 48) = 0;
      v26 = *(_WORD *)(*(_QWORD *)(v11 + 24) + 8LL * *(unsigned __int16 *)(v13 + 58) + 2);
    }
    if ( (*(_DWORD *)(a1 + 368) & 0x200) != 0 && *(_WORD *)v12 == 1 && v27 )
    {
      DigitizerPageButtonUsages = HidP_GetUsageValueArray(
                                    HidP_Input,
                                    1u,
                                    v26,
                                    v25,
                                    (PCHAR)&UsageValue,
                                    8u,
                                    a2,
                                    v15,
                                    ReportLength);
      if ( DigitizerPageButtonUsages < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v57 = 0;
        }
        v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v59 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v31);
          v74 = DigitizerPageButtonUsages;
          Report = 61;
          goto LABEL_59;
        }
        goto LABEL_45;
      }
      v28 = (_DWORD *)(v12 + 52);
      rimExtractGeometryPoints(
        *(unsigned __int16 *)(v12 + 12),
        v13,
        v12 + 52,
        (unsigned int)&UsageValue,
        *(unsigned __int16 *)(v12 + 56));
      goto LABEL_15;
    }
    v28 = (_DWORD *)(v12 + 52);
    DigitizerPageButtonUsages = HidP_GetUsageValue(
                                  HidP_Input,
                                  *(_WORD *)v12,
                                  v26,
                                  v25,
                                  (PULONG)(v12 + 52),
                                  a2,
                                  v15,
                                  ReportLength);
    if ( DigitizerPageButtonUsages < 0 )
      break;
LABEL_15:
    if ( *(_DWORD *)(v12 + 16) )
    {
      if ( *v28 < *(_DWORD *)(v12 + 32) || *v28 > *(_DWORD *)(v12 + 36) )
      {
        if ( *(_WORD *)v12 == 1 && v27 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v67 = *(_WORD *)(v12 + 12);
          if ( v67 == 48 )
          {
            *UsageLength = 1;
          }
          else
          {
            if ( v67 != 49 )
            {
              LODWORD(a7) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2825LL);
            }
            *a10 = 1;
          }
        }
      }
      else
      {
        *v22 = 0;
      }
    }
    else
    {
      *v22 = 0;
      if ( !v27 || a5 )
        RIMEnsureUsageWithinLogicalBoundary(v12, v29, v31, 0LL);
    }
    LOBYTE(a3) = v76;
LABEL_19:
    v11 = v75;
    ++v24;
    v15 = v78;
    v12 += 60LL;
    ReportLength = v79;
  }
  v57 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v59 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v31);
    v74 = DigitizerPageButtonUsages;
    Report = 62;
LABEL_59:
    LOBYTE(v61) = v58;
    LOBYTE(v60) = v57;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v60,
      v61,
      *(_QWORD *)(v59 + 19368),
      4,
      1,
      Report,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
      v74);
  }
LABEL_45:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v51 = 0;
  }
  v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v29, v31);
    LOBYTE(v54) = v52;
    LOBYTE(v55) = v51;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v55,
      v54,
      *(_QWORD *)(v53 + 19368),
      4,
      1,
      64,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
      DigitizerPageButtonUsages);
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
