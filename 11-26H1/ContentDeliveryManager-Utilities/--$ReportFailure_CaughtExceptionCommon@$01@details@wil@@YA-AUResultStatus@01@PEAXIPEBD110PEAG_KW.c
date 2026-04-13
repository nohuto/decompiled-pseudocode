/*
 * XREFs of ??$ReportFailure_CaughtExceptionCommon@$01@details@wil@@YA?AUResultStatus@01@PEAXIPEBD110PEAG_KW4SupportedExceptions@1@@Z @ 0x1800268B4
 * Callers:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800266FC (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180030CC8 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x180066DF8 (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 * Callees:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180026594 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800265E8 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180033938 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon<2>(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // rdi
  __int64 v12; // rcx
  __int64 (__fastcall *v16)(__int64 *, __int64, __int64, char *); // rax
  char v17; // si
  __int64 v18; // rax
  int v19; // r9d
  int v20; // ecx
  int v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  char v24; // [rsp+90h] [rbp+8h] BYREF

  v10 = a8;
  v24 = 0;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(a8 + 2 * v12) );
  v16 = (__int64 (__fastcall *)(__int64 *, __int64, __int64, char *))g_pfnResultFromCaughtExceptionInternal;
  v17 = 1;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  if ( !v16
    || (v18 = v16(&v23, v10 + 2 * v12, 2048 - v12, &v24),
        v20 = *(_DWORD *)(v18 + 8),
        *(_QWORD *)a1 = *(_QWORD *)v18,
        *(_DWORD *)(a1 + 8) = v20,
        *(int *)a1 >= 0) )
  {
    v17 = 0;
    LODWORD(v23) = -2147024322;
    HIDWORD(v23) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL, a2);
    *(_QWORD *)a1 = v23;
    *(_DWORD *)(a1 + 8) = 0;
  }
  if ( !a10 && !v17 )
    wil::details::ReportFailure_Base<3,0>(a2, a3, a4, v19, v22, a7, a1, v10);
  wil::details::ReportFailure_Base<2,0>(a2, a3, a4, 0, 0LL, a7, a1, v10);
  return a1;
}
