/*
 * XREFs of ?_Change_array@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAXQEAVCSparseDependency@CSparseAnimationDependencySet@@_K1@Z @ 0x18004F884
 * Callers:
 *     ??$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV23@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B83BC (--$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimati.c)
 * Callees:
 *     ??1CAnimationDependency@@QEAA@XZ @ 0x18004F71C (--1CAnimationDependency@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<CSparseAnimationDependencySet::CSparseDependency>::_Change_array(
        CAnimationDependency **a1,
        CAnimationDependency *a2,
        __int64 a3,
        __int64 a4)
{
  CAnimationDependency *v4; // rbx
  CAnimationDependency *v9; // rsi
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      CAnimationDependency::~CAnimationDependency(v4);
      v4 = (CAnimationDependency *)((char *)v4 + 24);
    }
    std::_Deallocate<16>(*a1, 8 * ((a1[2] - *a1) >> 3));
  }
  *a1 = a2;
  result = 3 * a4;
  a1[1] = (CAnimationDependency *)((char *)a2 + 24 * a3);
  a1[2] = (CAnimationDependency *)((char *)a2 + 24 * a4);
  return result;
}
