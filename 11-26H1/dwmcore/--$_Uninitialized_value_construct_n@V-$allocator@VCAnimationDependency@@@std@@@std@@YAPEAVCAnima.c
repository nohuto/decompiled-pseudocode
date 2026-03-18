/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnimationDependency@@PEAV1@_KAEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18018FC64
 * Callers:
 *     ?EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018FAAC (-EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPE.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18018FB44 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCAnimationDependency@@V-$allocator@VCAnim.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930 (--$_Destroy_range@V-$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@Q.c)
 */

CAnimationDependency *__fastcall std::_Uninitialized_value_construct_n<std::allocator<CAnimationDependency>>(
        CAnimationDependency *this,
        __int64 a2)
{
  for ( ; a2; --a2 )
  {
    *(_QWORD *)this = 2LL;
    *((_QWORD *)this + 1) = 2LL;
    this = (CAnimationDependency *)((char *)this + 16);
  }
  std::_Destroy_range<std::allocator<CAnimationDependency>>(this, this);
  return this;
}
