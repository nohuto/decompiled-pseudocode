/*
 * XREFs of _std::vector_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__const_&__::_1_::catch$2 @ 0x1806ACA6E
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800F4574 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVirtualDesktop_wil::err_returncode_policy__const____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(
    *(_QWORD **)(a2 + 128),
    *(_QWORD **)(a2 + 40));
  std::_Deallocate<16,0>(*(void **)(a2 + 48), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 136)));
  throw;
}
