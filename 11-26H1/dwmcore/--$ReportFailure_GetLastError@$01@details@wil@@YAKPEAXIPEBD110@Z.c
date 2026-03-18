/*
 * XREFs of ??$ReportFailure_GetLastError@$01@details@wil@@YAKPEAXIPEBD110@Z @ 0x18025C10C
 * Callers:
 *     ?Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z @ 0x18025D114 (-Log_GetLastError@in1diag3@details@wil@@YAKPEAXIPEBD@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1801649C0 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180201798 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180204898 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastError<2>(
        wil::details *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        int a5,
        char *a6)
{
  signed int LastErrorFail; // eax
  DWORD v8; // ebx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  const char *v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  unsigned int v15[6]; // [rsp+50h] [rbp-18h] BYREF

  LastErrorFail = wil::details::GetLastErrorFail(
                    a1,
                    (void *)0xC2,
                    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
                    a4,
                    v12,
                    a6);
  v8 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v9 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v9 = (unsigned int)LastErrorFail;
  v15[0] = v9;
  v15[1] = wil::details::HrToNtStatus((wil::details *)v9);
  v15[2] = v10;
  wil::details::ReportFailure_Base<2,0>(
    (__int64)a1,
    194,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblescheduler.cpp",
    0LL,
    v10,
    (__int64)a6,
    v15,
    v13,
    v14,
    v10);
  SetLastError(v8);
  return v8;
}
