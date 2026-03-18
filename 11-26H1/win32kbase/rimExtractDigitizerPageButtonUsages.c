/*
 * XREFs of rimExtractDigitizerPageButtonUsages @ 0x1400F71B8
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1400F65C8 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall rimExtractDigitizerPageButtonUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG a4,
        __int64 a5)
{
  void *v5; // r12
  ULONG v7; // eax
  _DWORD *v11; // rbx
  unsigned int v12; // r13d
  ULONG v13; // r8d
  int v14; // r15d
  unsigned int v15; // ebp
  int v17; // eax
  char v18; // di
  bool v19; // si
  __int64 UserSessionState; // rax
  int v21; // edx
  int v22; // r8d
  __int16 Report; // [rsp+30h] [rbp-48h]
  ULONG ReportLength; // [rsp+38h] [rbp-40h]
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF

  v5 = *(void **)(a1 + 824);
  v7 = *(_DWORD *)(a1 + 1048);
  UsageLength = v7;
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2934LL);
    v7 = UsageLength;
  }
  memset(v5, 0, 2LL * v7);
  ReportLength = a4;
  v11 = (_DWORD *)a5;
  LODWORD(a5) = HidP_GetUsages(HidP_Input, 0xDu, *(_WORD *)(a5 + 58), (PUSAGE)v5, &UsageLength, a2, a3, ReportLength);
  v12 = a5;
  if ( (int)a5 >= 0 )
  {
    v14 = RIMIsPenPointerDevice(a1);
    v15 = v13;
    if ( UsageLength > v13 )
    {
      while ( 1 )
      {
        if ( v15 >= 6 )
          return (unsigned int)a5;
        if ( *((_WORD *)v5 + v15) == 50 )
        {
          v11[19] |= 0x1000002u;
        }
        else
        {
          if ( *((_WORD *)v5 + v15) == 60 )
          {
            if ( v14 )
              v11[40] |= 2u;
            goto LABEL_13;
          }
          if ( *((_WORD *)v5 + v15) == 66 )
            goto LABEL_16;
          if ( *((_WORD *)v5 + v15) == 68 )
          {
            if ( v14 )
              v11[40] |= 1u;
            goto LABEL_13;
          }
          if ( *((_WORD *)v5 + v15) == 69 )
          {
            if ( v14 )
            {
              v11[40] |= 6u;
LABEL_16:
              v17 = v11[19] | 0x1000006;
              v11[19] = v17;
              if ( *(_DWORD *)(a1 + 24) != 7 )
                v11[19] = v17 | 0x10;
            }
          }
          else if ( *((_WORD *)v5 + v15) == 71 )
          {
            v11[19] |= 0x4000u;
          }
          else if ( *((_WORD *)v5 + v15) == 100 )
          {
            v11[19] |= 0x1000000u;
          }
          else
          {
            if ( *((_WORD *)v5 + v15) == 254 )
            {
              v11[52] = 1;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v18 = v13;
              }
              v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_13;
              UserSessionState = W32GetUserSessionState(
                                   (_DWORD)WPP_GLOBAL_Control,
                                   (unsigned int)&WPP_GLOBAL_Control,
                                   v13);
              Report = 65;
            }
            else
            {
              if ( *((_WORD *)v5 + v15) != 255 )
                goto LABEL_13;
              v11[53] = 1;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v18 = v13;
              }
              v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_13;
              UserSessionState = W32GetUserSessionState(
                                   (_DWORD)WPP_GLOBAL_Control,
                                   (unsigned int)&WPP_GLOBAL_Control,
                                   v13);
              Report = 66;
            }
            LOBYTE(v22) = v19;
            LOBYTE(v21) = v18;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v21,
              v22,
              *(_QWORD *)(UserSessionState + 19368),
              3,
              1,
              Report,
              (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
            v13 = 0;
          }
        }
LABEL_13:
        if ( ++v15 >= UsageLength )
          return (unsigned int)a5;
      }
    }
  }
  return v12;
}
