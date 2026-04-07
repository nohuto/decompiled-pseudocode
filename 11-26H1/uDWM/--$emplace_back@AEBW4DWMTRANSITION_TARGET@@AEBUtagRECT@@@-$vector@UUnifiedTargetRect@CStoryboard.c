/*
 * XREFs of ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAAEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFF64
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C4380 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1DF4 (--$_Emplace_reallocate@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfac.c)
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFCD0 (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<CStoryboard::UnifiedTargetRect>::emplace_back<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
        __int64 a1,
        int *a2,
        __int128 *a3)
{
  __int64 v5; // rdx
  int v6; // eax
  _QWORD *v7; // rcx
  __int128 *v8; // rdx
  __int64 v9; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 == *(_QWORD *)(a1 + 16) )
    return std::vector<CStoryboard::UnifiedTargetRect>::_Emplace_reallocate<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
             (const char *)a1,
             v5,
             a2,
             a3);
  v6 = *a2;
  v7 = (_QWORD *)(v5 + 24);
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_DWORD *)v5 = v6 & 0xFFF;
  *(_OWORD *)(v5 + 4) = *a3;
  v8 = *(__int128 **)(v5 + 32);
  if ( v8 == (__int128 *)v7[2] )
  {
    std::vector<tagRECT>::_Emplace_reallocate<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
      v7,
      (__int64)v8,
      a3);
  }
  else
  {
    *v8 = *a3;
    v7[1] += 16LL;
  }
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v9 + 48;
  return (char *)v9;
}
