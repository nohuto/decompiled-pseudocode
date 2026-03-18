/*
 * XREFs of ?GetBackdropBrushNoRef@CRenderingTechnique@@QEBAPEBVCBackdropBrush@@XZ @ 0x18015D24C
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ @ 0x18015D14C (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@IEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAXXZ @ 0x1800FDBC4 (-pop_back@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800FDFB0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingGraph@@@Z @ 0x18015D3B4 (-GetBackdropBrushNoRef@CRenderingTechniqueFragment@@QEBAPEBVCBackdropBrush@@PEBVCBrushRenderingG.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1802B39A4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

const struct CBackdropBrush *__fastcall CRenderingTechnique::GetBackdropBrushNoRef(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const struct CBackdropBrush *BackdropBrushNoRef; // rbx
  void *v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  __int128 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  BackdropBrushNoRef = 0LL;
  v9 = *((_QWORD *)this + 1);
  v12 = 0LL;
  v10 = 0;
  v11 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v11,
    &v9,
    a3,
    a4);
LABEL_2:
  CFragmentIterator::FindFirst((CFragmentIterator *)&v11);
  v7 = *((_QWORD *)&v11 + 1);
  v6 = (void *)v11;
  while ( (v7 - (__int64)v6) >> 4 )
  {
    BackdropBrushNoRef = CRenderingTechniqueFragment::GetBackdropBrushNoRef(
                           *(CRenderingTechniqueFragment **)(v7 - 16),
                           *(const struct CBrushRenderingGraph **)this);
    if ( BackdropBrushNoRef )
    {
      v6 = (void *)v11;
      break;
    }
    std::vector<CFragmentIterator::FragmentStackEntry>::pop_back((__int64)&v11);
    v7 = *((_QWORD *)&v11 + 1);
    v6 = (void *)v11;
    if ( (__int64)(*((_QWORD *)&v11 + 1) - v11) >> 4 )
    {
      ++*(_DWORD *)(*((_QWORD *)&v11 + 1) - 8LL);
      goto LABEL_2;
    }
  }
  if ( v6 )
    std::_Deallocate<16>(v6, (v12 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
  return BackdropBrushNoRef;
}
