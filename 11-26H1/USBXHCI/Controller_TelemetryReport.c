/*
 * XREFs of Controller_TelemetryReport @ 0x140042FC0
 * Callers:
 *     Controller_TelemetryReportWorker @ 0x1400433B0 (Controller_TelemetryReportWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x14001EFE8 (RtlStringCchPrintfA.c)
 *     TelemetryData_CreateReport @ 0x140057444 (TelemetryData_CreateReport.c)
 *     TelemetryData_InsertTriageDataBlock @ 0x1400575C0 (TelemetryData_InsertTriageDataBlock.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     Controller_TelemetryAddControllerData @ 0x14007804C (Controller_TelemetryAddControllerData.c)
 *     Controller_TelemetryOkToGenerateReport @ 0x140078234 (Controller_TelemetryOkToGenerateReport.c)
 *     Controller_TelemetryUpdateSubmitReportSuccess @ 0x140078538 (Controller_TelemetryUpdateSubmitReportSuccess.c)
 *     TelemetryData_SubmitReport @ 0x14007F468 (TelemetryData_SubmitReport.c)
 */

void __fastcall Controller_TelemetryReport(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 v6; // r8
  bool v9; // zf
  int v10; // edx
  int v11; // ecx
  __int64 Report; // rax
  int v13; // edx
  __int64 v14; // rbx
  unsigned int i; // r15d
  __int64 v16; // r14
  int v17; // eax
  int v18; // edx
  unsigned int v19; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-5Dh] BYREF
  __int64 v21; // [rsp+38h] [rbp-59h] BYREF
  __int64 v22; // [rsp+40h] [rbp-51h] BYREF
  char pszDest[8]; // [rsp+50h] [rbp-41h] BYREF
  char v24[8]; // [rsp+58h] [rbp-39h] BYREF
  __int128 v25; // [rsp+60h] [rbp-31h]
  __int64 v26; // [rsp+70h] [rbp-21h]
  __int64 v27; // [rsp+78h] [rbp-19h]
  __int64 v28; // [rsp+80h] [rbp-11h]
  __int64 v29; // [rsp+88h] [rbp-9h]
  __int128 v30; // [rsp+90h] [rbp-1h] BYREF

  v22 = 0LL;
  v6 = *(unsigned int *)(a3 + 16);
  v30 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v19 = 0;
  if ( (unsigned __int8)Controller_TelemetryOkToGenerateReport(a1, a2, v6) )
  {
    v9 = *(_DWORD *)(a1 + 644) == 1;
    v27 = *(_QWORD *)(a3 + 40);
    v28 = *(_QWORD *)(a3 + 48);
    v29 = *(_QWORD *)(a3 + 56);
    *(_QWORD *)pszDest = 0LL;
    *(_QWORD *)v24 = 0LL;
    v25 = 0LL;
    v26 = a1;
    if ( v9 )
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(a1 + 648));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%04X", *(unsigned __int16 *)(a1 + 652));
      RtlStringCchPrintfA(&v24[2], 5uLL, "%02X", *(unsigned __int8 *)(a1 + 656));
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 5uLL, "%s", (const char *)(a1 + 704));
      RtlStringCchPrintfA(&pszDest[5], 5uLL, "%s", (const char *)(a1 + 709));
      RtlStringCchPrintfA(&v24[2], 5uLL, "%s", (const char *)(a1 + 714));
    }
    RtlStringCchPrintfA(&v24[7], 0x11uLL, "%I64X", *(_QWORD *)(a1 + 728));
    Report = TelemetryData_CreateReport(
               v11,
               v10,
               *(_DWORD *)(a3 + 16),
               (unsigned int)pszDest,
               *(_QWORD *)(a3 + 24),
               *(_QWORD *)(a3 + 32));
    v14 = Report;
    if ( Report )
    {
      if ( (int)TelemetryData_InsertTriageDataBlock(Report, pszDest, 64LL) >= 0
        && (int)TelemetryData_InsertTriageDataBlock(v14, &WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 8LL) >= 0
        && (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
         || (int)TelemetryData_InsertTriageDataBlock(v14, *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 336LL) >= 0) )
      {
        Controller_TelemetryAddControllerData(a1, v14);
        if ( (int)TelemetryData_InsertTriageDataBlock(v14, &WPP_GLOBAL_Control, 8LL) >= 0
          && (!WPP_GLOBAL_Control || (int)TelemetryData_InsertTriageDataBlock(v14, WPP_GLOBAL_Control, 80LL) >= 0)
          && (int)imp_WppRecorderDumpLiveDriverData(WPP_GLOBAL_Control, &v21, &v19, &v30) >= 0
          && (!v21 || (int)TelemetryData_InsertTriageDataBlock(v14, v21, v19) >= 0) )
        {
          for ( i = 0; i < a5; ++a4 )
          {
            if ( (int)TelemetryData_InsertTriageDataBlock(v14, *a4, 336LL) < 0 )
              break;
            v16 = *(_QWORD *)(*a4 + 64LL);
            if ( v16 )
            {
              if ( *(_QWORD *)(v16 + 8) == a1
                && ((int)TelemetryData_InsertTriageDataBlock(v14, *(_QWORD *)(*a4 + 64LL), 104LL) < 0
                 || (int)imp_WppRecorderLogDumpLiveData(WPP_GLOBAL_Control, *(_QWORD *)(v16 + 16), &v22, &v20, &v30) < 0
                 || (int)TelemetryData_InsertTriageDataBlock(v14, v22, v20) < 0) )
              {
                break;
              }
            }
            ++i;
          }
          v17 = TelemetryData_SubmitReport(v14);
          if ( v17 >= 0 )
          {
            Controller_TelemetryUpdateSubmitReportSuccess(a1, *(unsigned int *)(a3 + 16));
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 2;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(a1 + 72),
              v18,
              4,
              239,
              (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
              v17);
          }
        }
      }
      if ( *(_DWORD *)(v14 + 8) )
      {
        ExFreePoolWithTag(*(PVOID *)v14, 0x74614454u);
        *(_QWORD *)v14 = 0LL;
        *(_DWORD *)(v14 + 8) = 0;
      }
      ExFreePoolWithTag((PVOID)v14, 0x74614454u);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v13, 4, 238, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
  }
}
