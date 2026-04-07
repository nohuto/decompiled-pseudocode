/*
 * XREFs of ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180088A3C
 * Callers:
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1800889F8 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18007B810 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x18007CE34 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_HrMsg<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7,
        __int64 a8,
        char *a9)
{
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-48h]
  _DWORD v14[6]; // [rsp+50h] [rbp-18h] BYREF

  v14[0] = (_DWORD)a7;
  v14[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)a7);
  v14[2] = 0;
  return wil::details::ReportFailure_Msg<2>(v11, v9, v10, v11, v13, a6, (__int64)v14, a8, a9);
}
