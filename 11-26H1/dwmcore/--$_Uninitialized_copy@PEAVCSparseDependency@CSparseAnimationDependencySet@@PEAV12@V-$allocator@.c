/*
 * XREFs of ??$_Uninitialized_copy@PEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@00AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x1801AD630
 * Callers:
 *     ??$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV23@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B83BC (--$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimati.c)
 * Callees:
 *     ??0CAnimationDependency@@QEAA@AEBV0@@Z @ 0x1801AD6B0 (--0CAnimationDependency@@QEAA@AEBV0@@Z.c)
 */

CAnimationDependency *__fastcall std::_Uninitialized_copy<CSparseAnimationDependencySet::CSparseDependency *,CSparseAnimationDependencySet::CSparseDependency *,std::allocator<CSparseAnimationDependencySet::CSparseDependency>>(
        struct CAnimationDependency *a1,
        struct CAnimationDependency *a2,
        CAnimationDependency *a3)
{
  CAnimationDependency *v3; // rdi
  const struct CAnimationDependency *v5; // rbx
  char *v7; // rsi
  __int64 v8; // rbp
  char *v9; // rdx
  int v10; // ecx

  v3 = a3;
  v5 = a1;
  if ( a1 != a2 )
  {
    v7 = (char *)(a1 - a3);
    v8 = a3 - a1;
    do
    {
      CAnimationDependency::CAnimationDependency(v3, v5);
      v9 = (char *)v5 + v8;
      v3 = (CAnimationDependency *)((char *)v3 + 24);
      v10 = *(_DWORD *)&v7[(_QWORD)v5 + v8 + 16];
      v5 = (const struct CAnimationDependency *)((char *)v5 + 24);
      *((_DWORD *)v9 + 4) = v10;
    }
    while ( v5 != a2 );
  }
  return v3;
}
