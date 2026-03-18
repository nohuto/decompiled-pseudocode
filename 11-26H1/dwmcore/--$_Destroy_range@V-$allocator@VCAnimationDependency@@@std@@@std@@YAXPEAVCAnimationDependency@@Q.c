/*
 * XREFs of ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930
 * Callers:
 *     ??1CFullAnimationDependencySet@@QEAA@XZ @ 0x1800AE2BC (--1CFullAnimationDependencySet@@QEAA@XZ.c)
 *     ?EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18018FAAC (-EnsureDependency@CFullAnimationDependencySet@@QEAAAEAVCAnimationDependency@@UDCOMPOSITION_PROPE.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18018FB44 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCAnimationDependency@@V-$allocator@VCAnim.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnimationDependency@@PEAV1@_KAEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18018FC64 (--$_Uninitialized_value_construct_n@V-$allocator@VCAnimationDependency@@@std@@@std@@YAPEAVCAnima.c)
 *     ?_Change_array@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAXQEAVCAnimationDependency@@_K1@Z @ 0x1801B2E8C (-_Change_array@-$vector@VCAnimationDependency@@V-$allocator@VCAnimationDependency@@@std@@@std@@A.c)
 *     ??1_Reallocation_guard@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@QEAA@XZ @ 0x18022BF94 (--1_Reallocation_guard@-$vector@VCAnimationDependency@@V-$allocator@VCAnimationDependency@@@std@.c)
 * Callees:
 *     ??1CAnimationDependency@@QEAA@XZ @ 0x18004F71C (--1CAnimationDependency@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CAnimationDependency>>(
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
      v3 = (CAnimationDependency *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
}
