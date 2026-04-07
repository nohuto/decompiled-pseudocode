/*
 * XREFs of ??$emplace_back@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1F48
 * Callers:
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B222C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C4380 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1DF4 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfac.c)
 */

char *__fastcall std::vector<tagRECT>::emplace_back<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
        _QWORD *a1,
        __int128 *a2)
{
  __int128 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int128 *)a1[1];
  if ( v3 == (__int128 *)a1[2] )
    return std::vector<tagRECT>::_Emplace_reallocate<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
             a1,
             (__int64)v3,
             a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 16;
  return (char *)v4;
}
