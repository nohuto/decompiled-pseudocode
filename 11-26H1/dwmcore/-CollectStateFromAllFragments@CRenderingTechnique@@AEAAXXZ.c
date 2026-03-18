/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800FD53C
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18015C700 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FD2D0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?pop_back@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAXXZ @ 0x1800FDBC4 (-pop_back@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800FDFB0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1802B39A4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int128 v5; // kr00_16
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+28h] [rbp-28h]
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]

  v6 = *((_QWORD *)this + 1);
  v9 = 0LL;
  v7 = 0;
  v8 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v8,
    &v6,
    a3,
    a4);
LABEL_2:
  CFragmentIterator::FindFirst((CFragmentIterator *)&v8);
  v5 = v8;
  while ( (__int64)(*((_QWORD *)&v5 + 1) - v5) >> 4 )
  {
    CRenderingTechnique::CollectStateFromFragment(
      this,
      *(struct CRenderingTechniqueFragment **)(*((_QWORD *)&v5 + 1) - 16LL));
    std::vector<CFragmentIterator::FragmentStackEntry>::pop_back(&v8);
    v5 = v8;
    if ( (__int64)(*((_QWORD *)&v8 + 1) - v8) >> 4 )
    {
      ++*(_DWORD *)(*((_QWORD *)&v8 + 1) - 8LL);
      goto LABEL_2;
    }
  }
  if ( (_QWORD)v5 )
    std::_Deallocate<16>((void *)v5, (v9 - v5) & 0xFFFFFFFFFFFFFFF0uLL);
}
