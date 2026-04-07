/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800C4380
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C6C60 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ??$emplace_back@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAAAEAUtagRECT@@AEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B1F48 (--$emplace_back@AEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@.c)
 *     ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAAEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800BFF64 (--$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CStoryboard.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800C3D9C (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall CGroupingStoryboard::_RecordUnionRect(_QWORD *a1, __int64 a2, __int128 *a3)
{
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  v8 = 0;
  v5 = a1 + 16;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, v9, &v8) < 0 )
    return std::vector<CStoryboard::UnifiedTargetRect>::emplace_back<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
             (__int64)(a1 + 16),
             (int *)&v9,
             a3);
  v6 = 48LL * v8;
  UnionRect((LPRECT)(*v5 + v6 + 4), (const RECT *)a3, (const RECT *)(*v5 + v6 + 4));
  return std::vector<tagRECT>::emplace_back<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMILSurfaceRect_> const &>(
           (_QWORD *)(*v5 + v6 + 24),
           a3);
}
