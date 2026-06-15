/*
 * XREFs of ??$ReportFailure_Win32Msg@$01@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180132DC0
 * Callers:
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18013B1EC (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180047BBC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x1800C32F4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32Msg<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        unsigned __int64 a8,
        char *a9)
{
  unsigned int v9; // ebx
  unsigned __int16 *v10; // rdx
  int v11; // r8d
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-48h]
  _DWORD v15[6]; // [rsp+50h] [rbp-18h] BYREF

  v9 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v9 = (unsigned __int16)a7 | 0x80070000;
  v15[0] = v9;
  v15[1] = wil::details::HrToNtStatus((wil::details *)v9);
  v15[2] = 0;
  wil::details::ReportFailure_Msg<2>(v12, v10, v11, v12, v14, a6, (__int64)v15, a8, a9);
  return v9;
}
