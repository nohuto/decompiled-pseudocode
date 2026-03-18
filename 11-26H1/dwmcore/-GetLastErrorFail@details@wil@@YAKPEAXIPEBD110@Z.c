/*
 * XREFs of ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180201798
 * Callers:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1802015FC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180201630 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z @ 0x1802016E4 (--$ReportFailure_GetLastError@$02@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18025C10C (--$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x18025C1B8 (--$ReportFailure_GetLastErrorMsg@$02@details@wil@@YAKPEAXIPEBD1101PEAD@Z.c)
 * Callees:
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x1802047A0 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

DWORD __fastcall wil::details::GetLastErrorFail(
        wil::details *this,
        void *a2,
        int a3,
        const char *a4,
        const char *a5,
        const char *a6)
{
  int v7; // edi
  int v8; // esi
  DWORD result; // eax
  wil::details *v10; // [rsp+30h] [rbp-18h]

  v7 = (int)a2;
  v8 = (int)this;
  result = GetLastError();
  if ( !result )
  {
    LODWORD(v10) = -2147024228;
    wil::details::ReportFailure_Hr<2>(v8, v7, a3, 0, 0LL, (__int64)a6, v10);
    return 668;
  }
  return result;
}
