/*
 * XREFs of ??1CFullAnimationDependencySet@@QEAA@XZ @ 0x1800AE2BC
 * Callers:
 *     ??1CAnimationDependencies@@QEAA@XZ @ 0x1800AD360 (--1CAnimationDependencies@@QEAA@XZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930 (--$_Destroy_range@V-$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@Q.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CFullAnimationDependencySet::~CFullAnimationDependencySet(CFullAnimationDependencySet *this)
{
  CAnimationDependency *v2; // rcx

  v2 = (CAnimationDependency *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CAnimationDependency>>(v2, *((CAnimationDependency **)this + 2));
    std::_Deallocate<16>(*((_QWORD *)this + 1), (*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
