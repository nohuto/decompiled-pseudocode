/*
 * XREFs of ??1_Reallocation_guard@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800B21B8
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1DF4 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfac.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 16LL * *(_QWORD *)(a1 + 16));
}
