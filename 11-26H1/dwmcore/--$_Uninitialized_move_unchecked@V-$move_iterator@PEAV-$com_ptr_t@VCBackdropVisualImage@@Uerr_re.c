/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@YAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@V30@PEAV12@@Z @ 0x1801056B8
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18008B1F0 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 *     ?push_back@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@Z @ 0x18008C47C (-push_back@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@@st.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800F8878 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wi.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18010563C (--$uninitialized_move@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180145484 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801969A8 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Uninitialized_move_unchecked<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax

  while ( a1 != a2 )
  {
    v3 = *a1;
    *a1 = 0LL;
    *a3++ = v3;
    ++a1;
  }
  return a3;
}
