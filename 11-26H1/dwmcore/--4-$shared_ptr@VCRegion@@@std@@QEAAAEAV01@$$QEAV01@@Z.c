/*
 * XREFs of ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180125C94
 * Callers:
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801267C4 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@_N@Z @ 0x18015E0DC (-TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UN.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x18018A118 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18028FC50 (std--_Insertion_sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorS.c)
 *     ??$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PEAU12@00@Z @ 0x18028FEE0 (--$_Move_unchecked@PEAUMonitorData@CCursorState@@PEAU12@@std@@YAPEAUMonitorData@CCursorState@@PE.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x18029022C (std--_Pop_heap_hole_by_index_std--shared_ptr_CCursorState--ShapeData____std--shared_ptr_CCursorS.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__CCursorState::SortShapeCache_::_2_::_lambda_1_____ @ 0x180290354 (std--_Sort_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__CCursorState-.c)
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x180291270 (-ClearShape@CCursorState@@UEAAXXZ.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x180292040 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802923D8 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180126C50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CRegion>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
