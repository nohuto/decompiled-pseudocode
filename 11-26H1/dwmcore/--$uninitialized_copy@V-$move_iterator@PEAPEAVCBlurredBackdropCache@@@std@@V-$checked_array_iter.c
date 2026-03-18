/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x180141C90
 * Callers:
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z @ 0x18001847C (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?reserve_region@?$vector_facade@PEBXV?$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX_K0@Z @ 0x18009FA24 (-reserve_region@-$vector_facade@PEBXV-$pointer_buffer_impl@PEBX$0A@@detail@@@detail@@IEAAPEAPEBX.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18010BB6C (-ensure_extra_capacity@-$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x180141340 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$03$00Vliber.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180141510 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?push_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCOverlayContext@@@Z @ 0x180141AC8 (-push_back@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vlib.c)
 *     std::_Func_impl_no_alloc__CPreWalkVisual::ProcessVisuals_::_2_::_lambda_1__void_CVisualTree___::_Do_call @ 0x180144AA0 (std--_Func_impl_no_alloc__CPreWalkVisual--ProcessVisuals_--_2_--_lambda_1__void_CVisualTree___--.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
        __int64 a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v8; // rax
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                 a4,
                 (a3 - (__int64)a2) >> 3);
  a4[2] = (std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(a2, a3, v8) - *a4) >> 3;
  result = a1;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
