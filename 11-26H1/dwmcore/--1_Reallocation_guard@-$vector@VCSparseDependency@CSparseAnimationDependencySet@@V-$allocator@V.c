/*
 * XREFs of ??1_Reallocation_guard@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAA@XZ @ 0x18022BFD0
 * Callers:
 *     ??$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV23@AEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801B83BC (--$_Emplace_reallocate@AEAUDCOMPOSITION_PROPERTY_ID@@@-$vector@VCSparseDependency@CSparseAnimati.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAXPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18004F968 (--$_Destroy_range@V-$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAX.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CSparseAnimationDependencySet::CSparseDependency>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<CSparseAnimationDependencySet::CSparseDependency>>(
      *(CAnimationDependency **)(a1 + 24),
      *(CAnimationDependency **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 24LL * *(_QWORD *)(a1 + 16));
  }
}
