/*
 * XREFs of ?EnableDriverDiagnosticsTelemetryProviderImpl@@YAXKK_K@Z @ 0x1401D80C4
 * Callers:
 *     ??$EnableDriverDiagnosticsTelemetryProviderCallback@$00@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1401D8060 (--$EnableDriverDiagnosticsTelemetryProviderCallback@$00@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DE.c)
 *     ??$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1401D8080 (--$EnableDriverDiagnosticsTelemetryProviderCallback@$0A@@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall EnableDriverDiagnosticsTelemetryProviderImpl(unsigned int a1, int a2, char a3)
{
  __int64 v3; // rsi
  struct DXGGLOBAL *Global; // rax
  int v6; // ebx
  _DWORD v7[2]; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = a1;
  if ( a2 == 1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !(_DWORD)v3 )
    {
      v6 = a3 & 3;
      v8 = -4;
LABEL_6:
      *((_DWORD *)Global + v3 + 76239) = v6;
      v9 = v3;
      v7[0] = 1 << v3;
      v7[1] = v6;
      DXGGLOBAL::IterateAdaptersWithCallback(Global, UpdateDiagnosticAdapterCallback, v7, 2LL);
      return;
    }
    if ( (_DWORD)v3 == 1 )
    {
      v6 = a3 & 1;
      v8 = -2;
      goto LABEL_6;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 422;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unrecognized Driver Diagnostics Telemetry Provider.",
      422LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
