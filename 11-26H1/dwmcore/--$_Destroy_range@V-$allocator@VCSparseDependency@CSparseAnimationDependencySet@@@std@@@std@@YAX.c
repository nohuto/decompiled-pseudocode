/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAXPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18004F968
 * Callers:
 *     ??1CSparseAnimationDependencySet@@QEAA@XZ @ 0x18004F9A0 (--1CSparseAnimationDependencySet@@QEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@0PEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18022BCBC (--$_Uninitialized_move@PEAVCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@VCSpars.c)
 *     ??1_Reallocation_guard@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@QEAA@XZ @ 0x18022BFD0 (--1_Reallocation_guard@-$vector@VCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@V.c)
 * Callees:
 *     ??1CAnimationDependency@@QEAA@XZ @ 0x18004F71C (--1CAnimationDependency@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CSparseAnimationDependencySet::CSparseDependency>>(
        CAnimationDependency *this,
        CAnimationDependency *a2)
{
  CAnimationDependency *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CAnimationDependency::~CAnimationDependency(v3);
      v3 = (CAnimationDependency *)((char *)v3 + 24);
    }
    while ( v3 != a2 );
  }
}
