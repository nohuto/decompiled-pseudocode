/*
 * XREFs of ?_Change_array@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAXQEAUFragmentStackEntry@CFragmentIterator@@_K1@Z @ 0x180151210
 * Callers:
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@AEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1801AC95C (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = *(void **)a1;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 16) - (_QWORD)v6;
    v12 = v6;
    v10 = v9 & 0xFFFFFFFFFFFFFFF0uLL;
    v11 = v10;
    if ( v10 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v12, &v11);
      v10 = v11;
      v6 = v12;
    }
    operator delete(v6, v10);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
