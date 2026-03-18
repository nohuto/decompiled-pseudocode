/*
 * XREFs of ?_Change_array@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAXQEAVCAnimationDependency@@_K1@Z @ 0x1801B2E8C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCAnimationDependency@@V?$allocator@VCAnimationDependency@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18018FB44 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCAnimationDependency@@V-$allocator@VCAnim.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@QEAV1@AEAV?$allocator@VCAnimationDependency@@@0@@Z @ 0x18004F930 (--$_Destroy_range@V-$allocator@VCAnimationDependency@@@std@@@std@@YAXPEAVCAnimationDependency@@Q.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CAnimationDependency>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  CAnimationDependency *v6; // rcx

  v6 = *(CAnimationDependency **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CAnimationDependency>>(v6, *(CAnimationDependency **)(a1 + 8));
    std::_Deallocate<16>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
