/*
 * XREFs of ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18015D490
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18015D14C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAXXZ @ 0x1800FDBC4 (-pop_back@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800FDFB0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18015D630 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1802B39A4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

bool __fastcall CRenderingTechnique::HasWindowBackdropInput(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v5; // kr00_16
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  v7 = *((_QWORD *)this + 1);
  v10 = 0LL;
  v8 = 0;
  v9 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v9,
    &v7,
    a3,
    a4);
LABEL_2:
  CFragmentIterator::FindFirst((CFragmentIterator *)&v9);
  v5 = v9;
  while ( (__int64)(*((_QWORD *)&v5 + 1) - v5) >> 4 )
  {
    if ( CRenderingTechniqueFragment::HasWindowBackdropInput(
           *(CRenderingTechniqueFragment **)(*((_QWORD *)&v5 + 1) - 16LL),
           *(const struct CBrushRenderingGraph **)this) )
    {
      v5 = v9;
      break;
    }
    std::vector<CFragmentIterator::FragmentStackEntry>::pop_back((__int64)&v9);
    v5 = v9;
    if ( (__int64)(*((_QWORD *)&v9 + 1) - v9) >> 4 )
    {
      ++*(_DWORD *)(*((_QWORD *)&v9 + 1) - 8LL);
      goto LABEL_2;
    }
  }
  if ( (_QWORD)v5 )
    std::_Deallocate<16>((void *)v5, (v10 - v5) & 0xFFFFFFFFFFFFFFF0uLL);
  return *((_QWORD *)&v5 + 1) != (_QWORD)v5;
}
