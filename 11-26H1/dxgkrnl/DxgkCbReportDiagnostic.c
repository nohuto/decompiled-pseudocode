/*
 * XREFs of DxgkCbReportDiagnostic @ 0x14007A530
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400348A0 (DpiGetDxgAdapter.c)
 *     ?DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x140079E20 (-DxgkHandleDiagnosticNotifications@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z.c)
 *     ?DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z @ 0x14007A290 (-DxgkHandleDiagnosticProgressions@@YAJPEAU_DXGK_DIAGNOSTIC_HEADER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkCbReportDiagnostic(__int64 a1, unsigned int *a2)
{
  __int64 DxgAdapter; // r9
  unsigned int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-38h]

  if ( KeGetCurrentIrql() > 2u )
  {
    WdLogSingleEntry5(0LL, 275LL, 20LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 783;
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 789;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NULL device handle passed to DxgkCbReportDiagnostic (%d).",
      1LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 796;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid device handle passed to DxgkCbReportDiagnostic (%d).",
      2LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v5 = *a2;
  if ( !*a2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 802;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Zero diagnostic categories set for DxgkCbReportDiagnostic. (%d)",
      3LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( ((v5 - 1) & v5) != 0 )
  {
    WdLogSingleEntry2(2LL, *a2, 4LL);
    v9 = *a2;
    WdLogGlobalForLineNumber = 809;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Multiple diagnostic categories: 0x%I64x set for DxgkCbReportDiagnostic. (%d)",
      v9,
      4LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = a2[1];
  if ( !(_DWORD)v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 815;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Zero diagnostic types set for DxgkCbReportDiagnostic. (%d)",
      6LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (((_DWORD)v6 - 1) & (unsigned int)v6) != 0 )
  {
    WdLogSingleEntry2(2LL, v6, 7LL);
    v10 = a2[1];
    WdLogGlobalForLineNumber = 822;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Multiple diagnostic types: 0x%I64x set for DxgkCbReportDiagnostic. (%d)",
      v10,
      7LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v7 = 0;
  while ( !_bittest((const int *)&v5, v7) )
  {
    if ( ++v7 >= 2 )
    {
      WdLogSingleEntry2(2LL, *a2, 5LL);
      v11 = *a2;
      WdLogGlobalForLineNumber = 838;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Undefined diagnostic category 0x%I64x reported to DxgkCbReportDiagnostic. (%d)",
        v11,
        5LL,
        0LL,
        0LL,
        0LL);
      return 3221225485LL;
    }
  }
  if ( (*(_DWORD *)(DxgAdapter + 4LL * v7 + 4860) & *(_DWORD *)(DxgAdapter + 4LL * v7 + 4868) & (unsigned int)v6) == 0 )
  {
    WdLogSingleEntry3(3LL, *a2, a2[1], 8LL);
    WdLogGlobalForLineNumber = 856;
    return 3221225485LL;
  }
  return ((__int64 (__fastcall *)(unsigned int *))(&DiagnosticCategoryHandler)[v7])(a2);
}
