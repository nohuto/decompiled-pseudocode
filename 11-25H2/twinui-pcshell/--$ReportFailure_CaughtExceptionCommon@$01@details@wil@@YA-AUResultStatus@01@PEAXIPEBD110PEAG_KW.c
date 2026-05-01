/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x18023DF04
 * Callers:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1802DF5D8 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18031D784 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18033D1CC (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800939F8 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180093BEC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1802975A4 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon<2>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10)
{
  __int64 v10; // rdi
  __int64 v12; // rcx
  __int64 (__fastcall *v16)(__int64 *, __int64, __int64, char *); // rax
  char v17; // si
  __int64 v18; // rax
  int v19; // r9d
  int v20; // ecx
  __int64 v22; // [rsp+50h] [rbp-38h] BYREF
  char v23; // [rsp+90h] [rbp+8h] BYREF

  v10 = a8;
  v23 = 0;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(a8 + 2 * v12) );
  v16 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, char *))g_pfnResultFromCaughtExceptionInternal;
  v17 = 1;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  if ( !v16
    || (v18 = v16(&v22, v10 + 2 * v12, 2048 - v12, &v23),
        v20 = *(_DWORD *)(v18 + 8),
        *(_QWORD *)a1 = *(_QWORD *)v18,
        *(_DWORD *)(a1 + 8) = v20,
        *(int *)a1 >= 0) )
  {
    v17 = 0;
    LODWORD(v22) = -2147024322;
    HIDWORD(v22) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    *(_QWORD *)a1 = v22;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !a10 && !v17 )
    wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v19);
  wil::details::ReportFailure_Base<2,0>(a2, a3, a4, 0, 0LL, a7, a1, v10);
  return a1;
}
