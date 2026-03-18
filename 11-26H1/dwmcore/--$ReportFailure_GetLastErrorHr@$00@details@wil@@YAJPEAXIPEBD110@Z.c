/*
 * XREFs of ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x180201630
 * Callers:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1801649B4 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1801649C0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180201798 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorHr<1>(
        wil::details *a1,
        void *a2,
        unsigned int a3,
        const char *a4,
        __int64 a5,
        const char *a6)
{
  int v7; // esi
  int v8; // ebp
  int LastErrorFail; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  const char *v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+20h] [rbp-48h]
  void *v15; // [rsp+30h] [rbp-38h]
  _DWORD v16[4]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v13, a6, v15);
  v10 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v10 = (unsigned __int16)LastErrorFail | 0x80070000;
  v16[0] = v10;
  v16[1] = wil::details::HrToNtStatus((wil::details *)v10);
  v16[2] = 0;
  wil::details::ReportFailure_Base<1,0>(v8, v7, a3, v11, v14, (__int64)a6, (__int64)v16);
  return v10;
}
