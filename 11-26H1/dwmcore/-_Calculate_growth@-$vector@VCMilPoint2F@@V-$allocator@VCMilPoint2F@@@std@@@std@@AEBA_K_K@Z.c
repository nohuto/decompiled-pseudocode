/*
 * XREFs of ?_Calculate_growth@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEBA_K_K@Z @ 0x18018EFBC
 * Callers:
 *     ??$_Insert_counted_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@_K@Z @ 0x180052A20 (--$_Insert_counted_range@PEAVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@st.c)
 *     ??$_Emplace_reallocate@AEBVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAPEAVCMilPoint2F@@QEAV2@AEBV2@@Z @ 0x180052D1C (--$_Emplace_reallocate@AEBVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180054D24 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@.c)
 *     ??$_Emplace_reallocate@AEAPEAUIDXGIResource@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAUIDXGIResource@@@Z @ 0x180122C50 (--$_Emplace_reallocate@AEAPEAUIDXGIResource@@@-$vector@V-$com_ptr_t@UIDXGIResource@@Uerr_returnc.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801B589C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801BF11C (--$_Emplace_reallocate@V-$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@?$vector@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VIOverlayPlaneResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVISwapChainRealization@@@Z @ 0x1801CEEB0 (--$_Emplace_reallocate@AEAPEAVISwapChainRealization@@@-$vector@V-$com_ptr_t@VIOverlayPlaneResour.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCCursorVisual@@V?$allocator@PEAVCCursorVisual@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180233FE8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAVCCursorVisual@@V-$allocator@PEAVCCurso.c)
 *     ??$_Emplace_reallocate@PEAVCBrush@@@?$vector@PEAVCBrush@@V?$allocator@PEAVCBrush@@@std@@@std@@AEAAPEAPEAVCBrush@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x18026DA04 (--$_Emplace_reallocate@PEAVCBrush@@@-$vector@PEAVCBrush@@V-$allocator@PEAVCBrush@@@std@@@std@@AE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<CMilPoint2F>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x1FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 3;
  v4 = v3 >> 1;
  if ( v3 <= 0x1FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
