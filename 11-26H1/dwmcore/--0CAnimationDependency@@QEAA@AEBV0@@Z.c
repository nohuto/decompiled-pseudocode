/*
 * XREFs of ??0CAnimationDependency@@QEAA@AEBV0@@Z @ 0x1801AD6B0
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18018FB44 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCAnimationDependency@@V-$allocator@VCAnim.c)
 *     ??$_Uninitialized_copy@PEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@V?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@std@@@std@@YAPEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@00AEAV?$allocator@VCSparseDependency@CSparseAnimationDependencySet@@@0@@Z @ 0x1801AD630 (--$_Uninitialized_copy@PEAVCSparseDependency@CSparseAnimationDependencySet@@PEAV12@V-$allocator@.c)
 * Callees:
 *     ??0?$vector_facade@PEAVCBaseExpression@@V?$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x18004D59C (--0-$vector_facade@PEAVCBaseExpression@@V-$pointer_buffer_impl@PEAVCBaseExpression@@$0A@@detail@.c)
 */

CAnimationDependency *__fastcall CAnimationDependency::CAnimationDependency(
        CAnimationDependency *this,
        const struct CAnimationDependency *a2)
{
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
    this,
    (__int64)a2);
  detail::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>::vector_facade<CBaseExpression *,detail::pointer_buffer_impl<CBaseExpression *,0>>(
    (_QWORD *)this + 1,
    (__int64)a2 + 8);
  return this;
}
