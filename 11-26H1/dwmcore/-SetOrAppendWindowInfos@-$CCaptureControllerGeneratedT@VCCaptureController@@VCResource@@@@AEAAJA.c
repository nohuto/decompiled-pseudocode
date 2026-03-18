/*
 * XREFs of ?SetOrAppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@AEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@_N@Z @ 0x18021DD18
 * Callers:
 *     ?AppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@@Z @ 0x18021DCF8 (-AppendWindowInfos@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV-$.c)
 *     ?SetWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@@Z @ 0x18021DD08 (-SetWindowInfos@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV-$spa.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@1@PEBU_DWMCaptureWindowInformation@@_K@Z @ 0x18024532C (--$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformati.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetOrAppendWindowInfos(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax

  if ( !a3 )
  {
    v4 = a1[17];
    if ( v4 != a1[18] )
      a1[18] = v4;
  }
  std::vector<_DWMCaptureWindowInformation>::_Insert_counted_range<_DWMCaptureWindowInformation const *>(
    a1 + 17,
    a1[18],
    a2[1],
    (32LL * *a2) >> 5);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}
