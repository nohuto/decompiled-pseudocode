/*
 * XREFs of ?on_result@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z @ 0x1800A3FD0
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800A3A10 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::on_result(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a1;
  if ( !tip2::details::g_test_interface_exception_guard )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  result = tip2::details::g_test_interface_exception_guard(v3, 0LL, 0LL, 0LL, a2);
  if ( !(_BYTE)result )
  {
    *(_WORD *)(a2 + 42) = 16398;
    *(_BYTE *)(a2 + 40) = 3;
    return TestReport(a2);
  }
  return result;
}
