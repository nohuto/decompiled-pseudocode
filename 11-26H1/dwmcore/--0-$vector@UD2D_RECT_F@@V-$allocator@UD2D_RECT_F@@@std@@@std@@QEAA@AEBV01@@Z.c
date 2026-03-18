/*
 * XREFs of ??0?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180234720
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@YAPEAUFragmentStackEntry@CFragmentIterator@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentStackEntry@CFragmentIterator@@@0@@Z @ 0x18019B0FC (--$_Uninitialized_move@PEAUFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntr.c)
 *     ??1?$_Tidy_guard@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ @ 0x180234798 (--1-$_Tidy_guard@V-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z @ 0x180236DAC (-_Buy_nonzero@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<D2D_RECT_F>::vector<D2D_RECT_F>(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    std::vector<D2D_RECT_F>::_Buy_nonzero();
    *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<CFragmentIterator::FragmentStackEntry *>(
                            *(void **)a2,
                            *(_QWORD *)(a2 + 8),
                            *(char **)a1);
    v5 = 0LL;
    std::_Tidy_guard<std::vector<D2D_RECT_F>>::~_Tidy_guard<std::vector<D2D_RECT_F>>(&v5);
  }
  return a1;
}
