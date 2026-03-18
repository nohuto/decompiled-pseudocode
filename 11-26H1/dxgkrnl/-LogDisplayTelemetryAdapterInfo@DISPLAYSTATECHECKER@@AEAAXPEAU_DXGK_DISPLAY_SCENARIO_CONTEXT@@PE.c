/*
 * XREFs of ?LogDisplayTelemetryAdapterInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAVDISPLAYDIAGNOSTICADAPTERDATA@@@Z @ 0x1401CB9C0
 * Callers:
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4DxgkrnlLiveDumpFailureReason@@@Z @ 0x1401CBB44 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4Dxg.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140049164 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetryAdapterInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        struct DISPLAYDIAGNOSTICADAPTERDATA *a3)
{
  __int64 v3; // r9
  const GUID *v4; // r10
  int v5; // [rsp+50h] [rbp-49h] BYREF
  int v6; // [rsp+54h] [rbp-45h] BYREF
  __int64 v7; // [rsp+58h] [rbp-41h] BYREF
  __int64 v8; // [rsp+60h] [rbp-39h] BYREF
  __int64 v9; // [rsp+68h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+90h] [rbp-9h]
  __int64 v12; // [rsp+98h] [rbp-1h]
  __int64 *v13; // [rsp+A0h] [rbp+7h]
  __int64 v14; // [rsp+A8h] [rbp+Fh]
  int *v15; // [rsp+B0h] [rbp+17h]
  __int64 v16; // [rsp+B8h] [rbp+1Fh]
  int *v17; // [rsp+C0h] [rbp+27h]
  __int64 v18; // [rsp+C8h] [rbp+2Fh]
  __int64 *v19; // [rsp+D0h] [rbp+37h]
  __int64 v20; // [rsp+D8h] [rbp+3Fh]

  if ( a3 && a2 )
  {
    if ( (unsigned int)dword_140166660 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140166660, 0x400000000400LL) )
      {
        v7 = *(_QWORD *)(v3 + 3496);
        v5 = *(unsigned __int8 *)(v3 + 3488);
        v6 = *(unsigned __int8 *)(v3 + 3248);
        v8 = *(_QWORD *)(v3 + 8);
        v19 = &v7;
        v17 = &v5;
        v15 = &v6;
        v13 = &v8;
        v11 = &v9;
        v9 = 33556480LL;
        v20 = 8LL;
        v18 = 4LL;
        v16 = 4LL;
        v14 = 8LL;
        v12 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140166660, byte_140141D64, v4, 0LL, 7u, &v10);
      }
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 344;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid parameters not expected", 344LL, 0LL, 0LL, 0LL, 0LL);
  }
}
