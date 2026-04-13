/*
 * XREFs of ??$ReportFailure_GetLastError@$0A@@details@wil@@YAKPEAXIPEBD110@Z @ 0x18005FDE0
 * Callers:
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800653B4 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006A6AC (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180026620 (--$ReportFailure_Base@$0A@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180031E98 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180033938 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_GetLastError<0>(
        wil::details *a1,
        void *a2,
        __int64 a3,
        const char *a4,
        int a5,
        const char *a6)
{
  int v6; // ebx
  int v7; // edi
  int v8; // esi
  signed int LastErrorFail; // eax
  int v10; // r9d
  const char *v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[6]; // [rsp+50h] [rbp-18h] BYREF

  v6 = a3;
  v7 = (int)a2;
  v8 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v11, a6);
  if ( LastErrorFail > 0 )
    LastErrorFail = (unsigned __int16)LastErrorFail | 0x80070000;
  v13[0] = LastErrorFail;
  v13[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)LastErrorFail);
  v13[2] = 0;
  wil::details::ReportFailure_Base<0,0>(v8, v7, v6, v10, v12, (__int64)a6, (__int64)v13, 0LL);
}
