/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800AE9A4
 * Callers:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800AE69C (--$_Emplace_reallocate@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800AE56C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 */

void __fastcall std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      *(__int64 **)(a1 + 24),
      *(__int64 **)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
  }
}
