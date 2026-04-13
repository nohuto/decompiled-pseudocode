/*
 * XREFs of ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x180026BCC
 * Callers:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002EC54 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003D9E8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800ABC80 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800265E8 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?FromResult@ResultStatus@details@wil@@SA?AU123@J@Z @ 0x1800300A8 (-FromResult@ResultStatus@details@wil@@SA-AU123@J@Z.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_Hr<3>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+58h] [rbp-20h]
  _BYTE v15[24]; // [rsp+60h] [rbp-18h] BYREF

  v7 = wil::details::ResultStatus::FromResult(v15, a7, a3, a3);
  v8 = *(_QWORD *)v7;
  v14 = *(_DWORD *)(v7 + 8);
  v13 = v8;
  wil::details::ReportFailure_Base<3,0>(v11, v10, v9, v9, v12, a6, (__int64)&v13, 0LL);
}
