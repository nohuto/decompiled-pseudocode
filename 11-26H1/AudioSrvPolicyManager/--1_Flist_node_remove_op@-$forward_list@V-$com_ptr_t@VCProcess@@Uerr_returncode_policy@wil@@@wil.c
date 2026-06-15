/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180043588
 * Callers:
 *     std::forward_list_wil::com_ptr_t_CProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CProcess_wil::err_returncode_policy_____::remove_if__lambda_f12aaf106d0879da545a13c0b04fcb63___ @ 0x180043154 (std--forward_list_wil--com_ptr_t_CProcess_wil--err_returncode_policy__std--allocator_wil--com_pt.c)
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  volatile signed __int32 **v1; // rdi
  volatile signed __int32 *v2; // rbx

  v1 = *(volatile signed __int32 ***)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = *v1;
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16>(v1, (const struct std::nothrow_t *)0x10);
      v1 = (volatile signed __int32 **)v2;
    }
    while ( v2 );
  }
}
