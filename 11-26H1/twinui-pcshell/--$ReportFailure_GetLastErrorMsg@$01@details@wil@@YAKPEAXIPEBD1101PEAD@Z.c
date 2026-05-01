/*
 * XREFs of ??$ReportFailure_GetLastErrorMsg@$01@details@wil@@YAKPEAXIPEBD1101PEAD@Z @ 0x18033CEAC
 * Callers:
 *     ?Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18034DD44 (-Log_GetLastErrorIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ @ 0x180633104 (-Log_GetLastErrorMsg@in1diag3@details@wil@@YAKPEAXIPEBD1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18004FCA4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x18004FE88 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180232590 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_GetLastErrorMsg<2>(
        wil::details *a1,
        void *a2,
        int a3,
        const char *a4,
        int a5,
        const char *a6,
        unsigned __int64 a7,
        char *a8)
{
  unsigned int v9; // esi
  int v10; // ebp
  signed int LastErrorFail; // eax
  DWORD v12; // ebx
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  const char *v16; // [rsp+20h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-48h]
  _DWORD v18[4]; // [rsp+50h] [rbp-18h] BYREF

  v9 = (unsigned int)a2;
  v10 = (int)a1;
  LastErrorFail = wil::details::GetLastErrorFail(a1, a2, a3, a4, v16, a6);
  v12 = LastErrorFail;
  if ( LastErrorFail > 0 )
    v13 = (unsigned __int16)LastErrorFail | 0x80070000;
  else
    v13 = (unsigned int)LastErrorFail;
  v18[0] = v13;
  v18[1] = wil::details::HrToNtStatus((wil::details *)v13);
  v18[2] = 0;
  wil::details::ReportFailure_Msg<2>(v10, (unsigned __int16 *)v9, a3, v14, v17, (__int64)a6, (__int64)v18, a7, a8);
  SetLastError(v12);
  return v12;
}
