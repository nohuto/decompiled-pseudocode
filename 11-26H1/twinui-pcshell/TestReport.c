/*
 * XREFs of TestReport @ 0x18018E6E0
 * Callers:
 *     ?on_result@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z @ 0x18028B878 (-on_result@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z.c)
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x180331510 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z @ 0x1803BCA58 (-evaluate_and_report@-$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803BCCC4 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x18069A814 (-evaluate_and_report@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18018E734 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

FARPROC __fastcall TestReport(__int64 a1)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestReport'::`2'::s_pfnTestReport;
  if ( `TestReport'::`2'::s_pfnTestReport )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestReport");
  `TestReport'::`2'::s_pfnTestReport = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
