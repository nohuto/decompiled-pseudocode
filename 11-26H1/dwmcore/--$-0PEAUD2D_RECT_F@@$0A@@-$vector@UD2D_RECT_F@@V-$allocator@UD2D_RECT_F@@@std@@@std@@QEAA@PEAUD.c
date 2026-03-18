/*
 * XREFs of ??$?0PEAUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD2D_RECT_F@@0AEBV?$allocator@UD2D_RECT_F@@@1@@Z @ 0x1802600B0
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180260650 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@YAPEAUFragmentStackEntry@CFragmentIterator@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentStackEntry@CFragmentIterator@@@0@@Z @ 0x18019B0FC (--$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntr.c)
 *     ??1?$_Tidy_guard@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180234798 (--1-$_Tidy_guard@V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z @ 0x180236DAC (-_Buy_nonzero@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z.c)
 */

char **std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(char **a1, void *a2, __int64 a3, ...)
{
  unsigned __int64 v4; // rdx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - (__int64)a2) >> 4;
  if ( v4 )
  {
    std::vector<D2D_RECT_F>::_Buy_nonzero(a1, v4);
    a1[1] = std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(a2, a3, *a1);
    v8 = 0LL;
    std::_Tidy_guard<std::vector<D2D_RECT_F>>::~_Tidy_guard<std::vector<D2D_RECT_F>>((__int64 *)va);
  }
  return a1;
}
