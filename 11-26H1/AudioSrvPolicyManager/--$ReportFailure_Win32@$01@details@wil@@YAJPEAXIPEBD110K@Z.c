/*
 * XREFs of ??$ReportFailure_Win32@$01@details@wil@@YAJPEAXIPEBD110K@Z @ 0x18003B354
 * Callers:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18003D680 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18002CEEC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800316BC (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 */

__int64 __fastcall wil::details::ReportFailure_Win32<2>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        wil::details *a7)
{
  unsigned int v7; // ebx
  __int64 v8; // r9
  int v9; // edx
  int v10; // r8d
  int v11; // r10d
  _DWORD v13[6]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned int)a7;
  if ( (int)a7 > 0 )
    v7 = (unsigned __int16)a7 | 0x80070000;
  v13[0] = v7;
  v13[1] = wil::details::HrToNtStatus((wil::details *)v7);
  v13[2] = v8;
  wil::details::ReportFailure_Base<2,0>(v11, v9, v10, v8, v8, a6, (__int64)v13, v8);
  return v7;
}
