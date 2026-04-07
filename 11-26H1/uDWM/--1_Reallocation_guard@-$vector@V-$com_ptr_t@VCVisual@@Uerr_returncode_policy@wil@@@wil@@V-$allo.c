/*
 * XREFs of ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800BDAF8
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCPrimitive@@@?$vector@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCPrimitive@@@Z @ 0x1800BD934 (--$_Emplace_reallocate@AEAPEAVCPrimitive@@@-$vector@V-$com_ptr_t@VCPrimitive@@Uerr_returncode_po.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9BC0 (--$_Emplace_reallocate@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$com.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005DC2C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 */

void __fastcall std::vector<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
      *(CBaseObject ***)(a1 + 24),
      *(CBaseObject ***)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), 8LL * *(_QWORD *)(a1 + 16));
  }
}
