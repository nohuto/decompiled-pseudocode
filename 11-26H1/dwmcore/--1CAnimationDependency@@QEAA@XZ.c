/*
 * XREFs of ??1CAnimationDependency@@QEAA@XZ @ 0x18004F71C
 * Callers:
 *     ?_Change_array@?$vector@VCSparseDependency@CSparseAnimationDependencySet@@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@AEAAXQEAVCSparseDependency@CSparseAnimationDependencySet@@_K1@Z @ 0x18004F884 (-_Change_array@-$vector@VCSparseDependency@CSparseAnimationDependencySet@@V-$allocator@VCSparseD.c)
 *     ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930 (--$_Destroy_range@V-$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@Q.c)
 *     ??$_Destroy_range@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAXPEAVCSparseDependency@CSparseAnimationDependencySet@@QEAV12@AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x18004F968 (--$_Destroy_range@V-$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAX.c)
 * Callees:
 *     ??1?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@XZ @ 0x18004F744 (--1-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@.c)
 */

void __fastcall CAnimationDependency::~CAnimationDependency(CAnimationDependency *this)
{
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::~vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>((char *)this + 8);
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::~vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(this);
}
