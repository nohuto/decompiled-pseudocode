/*
 * XREFs of ??1CSparseAnimationDependencySet@@QEAA@XZ @ 0x18004F9A0
 * Callers:
 *     ??1CAnimationDependencies@@QEAA@XZ @ 0x1800AD360 (--1CAnimationDependencies@@QEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAXPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18004F968 (--$_Destroy_range@V-$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAX.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CSparseAnimationDependencySet::~CSparseAnimationDependencySet(CSparseAnimationDependencySet *this)
{
  CAnimationDependency *v2; // rcx

  v2 = (CAnimationDependency *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CSparseAnimationDependencySet::CSparseDependency>>(
      v2,
      *((CAnimationDependency **)this + 2));
    std::_Deallocate<16>(*((_QWORD *)this + 1), 8 * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) >> 3));
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
